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
#ifndef SKP_SILK_TABLES_NLSF_CB1_16_H
#define SKP_SILK_TABLES_NLSF_CB1_16_H
#include "SKP_Silk_define.h"
#ifdef __cplusplus
extern "C"
{
#endif
#define NLSF_MSVQ_CB1_16_STAGES       10
#define NLSF_MSVQ_CB1_16_VECTORS      104
/* NLSF codebook entropy coding tables */
extern const SKP_uint16         SKP_Silk_NLSF_MSVQ_CB1_16_CDF[ NLSF_MSVQ_CB1_16_VECTORS + NLSF_MSVQ_CB1_16_STAGES ];
extern const SKP_uint16 * const SKP_Silk_NLSF_MSVQ_CB1_16_CDF_start_ptr[                  NLSF_MSVQ_CB1_16_STAGES ];
extern const SKP_int            SKP_Silk_NLSF_MSVQ_CB1_16_CDF_middle_idx[                 NLSF_MSVQ_CB1_16_STAGES ];
#ifdef __cplusplus
}
#endif
#endif