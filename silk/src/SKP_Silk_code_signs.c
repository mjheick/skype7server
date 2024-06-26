/***********************************************************************
Copyright (c) 2006-2010, Skype Limited. All rights reserved.
Redistribution and use in source and binary forms, with or without
modification, (subject to the limitations in the disclaimer below)
are permitted provided that the following conditions are met:
- Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.
- Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.
- Neither the name of Skype Limited, nor the names of specific
contributors, may be used to endorse or promote products derived from
this software without specific prior written permission.
NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED
BY THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
CONTRIBUTORS ''AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
***********************************************************************/
#include "SKP_Silk_main.h"
//#define SKP_enc_map(a)                ((a) > 0 ? 1 : 0)
//#define SKP_dec_map(a)                ((a) > 0 ? 1 : -1)
/* shifting avoids if-statement */
#define SKP_enc_map(a)                  ( SKP_RSHIFT( (a), 15 ) + 1 )
#define SKP_dec_map(a)                  ( SKP_LSHIFT( (a),  1 ) - 1 )
/* Encodes signs of excitation */
void SKP_Silk_encode_signs(
    SKP_Silk_range_coder_state      *sRC,               /* I/O  Range coder state                       */
    const SKP_int                   q[],                /* I    Pulse signal                            */
    const SKP_int                   length,             /* I    Length of input                         */
    const SKP_int                   sigtype,            /* I    Signal type                             */
    const SKP_int                   QuantOffsetType,    /* I    Quantization offset type                */
    const SKP_int                   RateLevelIndex      /* I    Rate level index                        */
)
{
    SKP_int i;
    SKP_int inData;
    const SKP_uint16 *cdf;
    i = SKP_SMULBB( N_RATE_LEVELS - 1, SKP_LSHIFT( sigtype, 1 ) + QuantOffsetType ) + RateLevelIndex;
    cdf = SKP_Silk_sign_CDF[ i ];
    for( i = 0; i < length; i++ ) {
        if( q[ i ] != 0 ) {
            inData = SKP_enc_map( q[ i ] ); /* - = 0, + = 1 */
            SKP_Silk_range_encoder( sRC, inData, cdf );
        }
    }
}
/* Decodes signs of excitation */
void SKP_Silk_decode_signs(
    SKP_Silk_range_coder_state      *sRC,               /* I/O  Range coder state                           */
    SKP_int                         q[],                /* I/O  pulse signal                                */
    const SKP_int                   length,             /* I    length of output                            */
    const SKP_int                   sigtype,            /* I    Signal type                                 */
    const SKP_int                   QuantOffsetType,    /* I    Quantization offset type                    */
    const SKP_int                   RateLevelIndex      /* I    Rate Level Index                            */
)
{
    SKP_int i;
    SKP_int data;
    const SKP_uint16 *cdf;
    i = SKP_SMULBB( N_RATE_LEVELS - 1, SKP_LSHIFT( sigtype, 1 ) + QuantOffsetType ) + RateLevelIndex;
    cdf = SKP_Silk_sign_CDF[ i ];
    for( i = 0; i < length; i++ ) {
        if( q[ i ] > 0 ) {
            SKP_Silk_range_decoder( &data, sRC, cdf, 1 );
            /* attach sign */
            /* implementation with shift, subtraction, multiplication */
            q[ i ] *= SKP_dec_map( data );
        }
    }
}