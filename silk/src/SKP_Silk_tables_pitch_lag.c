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
#include "SKP_Silk_tables.h"
const SKP_uint16 SKP_Silk_pitch_lag_NB_CDF[ 8 * ( PITCH_EST_MAX_LAG_MS - PITCH_EST_MIN_LAG_MS ) + 2 ] = {
         0,    194,    395,    608,    841,   1099,   1391,   1724,
      2105,   2544,   3047,   3624,   4282,   5027,   5865,   6799,
      7833,   8965,  10193,  11510,  12910,  14379,  15905,  17473,
     19065,  20664,  22252,  23814,  25335,  26802,  28206,  29541,
     30803,  31992,  33110,  34163,  35156,  36098,  36997,  37861,
     38698,  39515,  40319,  41115,  41906,  42696,  43485,  44273,
     45061,  45847,  46630,  47406,  48175,  48933,  49679,  50411,
     51126,  51824,  52502,  53161,  53799,  54416,  55011,  55584,
     56136,  56666,  57174,  57661,  58126,  58570,  58993,  59394,
     59775,  60134,  60472,  60790,  61087,  61363,  61620,  61856,
     62075,  62275,  62458,  62625,  62778,  62918,  63045,  63162,
     63269,  63368,  63459,  63544,  63623,  63698,  63769,  63836,
     63901,  63963,  64023,  64081,  64138,  64194,  64248,  64301,
     64354,  64406,  64457,  64508,  64558,  64608,  64657,  64706,
     64754,  64803,  64851,  64899,  64946,  64994,  65041,  65088,
     65135,  65181,  65227,  65272,  65317,  65361,  65405,  65449,
     65492,  65535
};
const SKP_int SKP_Silk_pitch_lag_NB_CDF_offset = 43;
const SKP_uint16 SKP_Silk_pitch_contour_NB_CDF[ 12 ] = {
         0,  14445,  18587,  25628,  30013,  34859,  40597,  48426,
     54460,  59033,  62990,  65535
};
const SKP_int SKP_Silk_pitch_contour_NB_CDF_offset = 5;
const SKP_uint16 SKP_Silk_pitch_lag_MB_CDF[ 12 * ( PITCH_EST_MAX_LAG_MS - PITCH_EST_MIN_LAG_MS ) + 2 ] = {
         0,    132,    266,    402,    542,    686,    838,    997,
      1167,   1349,   1546,   1760,   1993,   2248,   2528,   2835,
      3173,   3544,   3951,   4397,   4882,   5411,   5984,   6604,
      7270,   7984,   8745,   9552,  10405,  11300,  12235,  13206,
     14209,  15239,  16289,  17355,  18430,  19507,  20579,  21642,
     22688,  23712,  24710,  25677,  26610,  27507,  28366,  29188,
     29971,  30717,  31427,  32104,  32751,  33370,  33964,  34537,
     35091,  35630,  36157,  36675,  37186,  37692,  38195,  38697,
     39199,  39701,  40206,  40713,  41222,  41733,  42247,  42761,
     43277,  43793,  44309,  44824,  45336,  45845,  46351,  46851,
     47347,  47836,  48319,  48795,  49264,  49724,  50177,  50621,
     51057,  51484,  51902,  52312,  52714,  53106,  53490,  53866,
     54233,  54592,  54942,  55284,  55618,  55944,  56261,  56571,
     56873,  57167,  57453,  57731,  58001,  58263,  58516,  58762,
     58998,  59226,  59446,  59656,  59857,  60050,  60233,  60408,
     60574,  60732,  60882,  61024,  61159,  61288,  61410,  61526,
     61636,  61742,  61843,  61940,  62033,  62123,  62210,  62293,
     62374,  62452,  62528,  62602,  62674,  62744,  62812,  62879,
     62945,  63009,  63072,  63135,  63196,  63256,  63316,  63375,
     63434,  63491,  63549,  63605,  63661,  63717,  63772,  63827,
     63881,  63935,  63988,  64041,  64094,  64147,  64199,  64252,
     64304,  64356,  64409,  64461,  64513,  64565,  64617,  64669,
     64721,  64773,  64824,  64875,  64925,  64975,  65024,  65072,
     65121,  65168,  65215,  65262,  65308,  65354,  65399,  65445,
     65490,  65535
};
const SKP_int SKP_Silk_pitch_lag_MB_CDF_offset = 64;
const SKP_uint16 SKP_Silk_pitch_lag_WB_CDF[ 16 * ( PITCH_EST_MAX_LAG_MS - PITCH_EST_MIN_LAG_MS ) + 2 ] = {
         0,    106,    213,    321,    429,    539,    651,    766,
       884,   1005,   1132,   1264,   1403,   1549,   1705,   1870,
      2047,   2236,   2439,   2658,   2893,   3147,   3420,   3714,
      4030,   4370,   4736,   5127,   5546,   5993,   6470,   6978,
      7516,   8086,   8687,   9320,   9985,  10680,  11405,  12158,
     12938,  13744,  14572,  15420,  16286,  17166,  18057,  18955,
     19857,  20759,  21657,  22547,  23427,  24293,  25141,  25969,
     26774,  27555,  28310,  29037,  29736,  30406,  31048,  31662,
     32248,  32808,  33343,  33855,  34345,  34815,  35268,  35704,
     36127,  36537,  36938,  37330,  37715,  38095,  38471,  38844,
     39216,  39588,  39959,  40332,  40707,  41084,  41463,  41844,
     42229,  42615,  43005,  43397,  43791,  44186,  44583,  44982,
     45381,  45780,  46179,  46578,  46975,  47371,  47765,  48156,
     48545,  48930,  49312,  49690,  50064,  50433,  50798,  51158,
     51513,  51862,  52206,  52544,  52877,  53204,  53526,  53842,
     54152,  54457,  54756,  55050,  55338,  55621,  55898,  56170,
     56436,  56697,  56953,  57204,  57449,  57689,  57924,  58154,
     58378,  58598,  58812,  59022,  59226,  59426,  59620,  59810,
     59994,  60173,  60348,  60517,  60681,  60840,  60993,  61141,
     61284,  61421,  61553,  61679,  61800,  61916,  62026,  62131,
     62231,  62326,  62417,  62503,  62585,  62663,  62737,  62807,
     62874,  62938,  62999,  63057,  63113,  63166,  63217,  63266,
     63314,  63359,  63404,  63446,  63488,  63528,  63567,  63605,
     63642,  63678,  63713,  63748,  63781,  63815,  63847,  63879,
     63911,  63942,  63973,  64003,  64033,  64063,  64092,  64121,
     64150,  64179,  64207,  64235,  64263,  64291,  64319,  64347,
     64374,  64401,  64428,  64455,  64481,  64508,  64534,  64560,
     64585,  64610,  64635,  64660,  64685,  64710,  64734,  64758,
     64782,  64807,  64831,  64855,  64878,  64902,  64926,  64950,
     64974,  64998,  65022,  65045,  65069,  65093,  65116,  65139,
     65163,  65186,  65209,  65231,  65254,  65276,  65299,  65321,
     65343,  65364,  65386,  65408,  65429,  65450,  65471,  65493,
     65514,  65535
};
const SKP_int SKP_Silk_pitch_lag_WB_CDF_offset = 86;
const SKP_uint16 SKP_Silk_pitch_lag_SWB_CDF[ 24 * ( PITCH_EST_MAX_LAG_MS - PITCH_EST_MIN_LAG_MS ) + 2 ] = {
         0,    253,    505,    757,   1008,   1258,   1507,   1755,
      2003,   2249,   2494,   2738,   2982,   3225,   3469,   3713,
      3957,   4202,   4449,   4698,   4949,   5203,   5460,   5720,
      5983,   6251,   6522,   6798,   7077,   7361,   7650,   7942,
      8238,   8539,   8843,   9150,   9461,   9775,  10092,  10411,
     10733,  11057,  11383,  11710,  12039,  12370,  12701,  13034,
     13368,  13703,  14040,  14377,  14716,  15056,  15398,  15742,
     16087,  16435,  16785,  17137,  17492,  17850,  18212,  18577,
     18946,  19318,  19695,  20075,  20460,  20849,  21243,  21640,
     22041,  22447,  22856,  23269,  23684,  24103,  24524,  24947,
     25372,  25798,  26225,  26652,  27079,  27504,  27929,  28352,
     28773,  29191,  29606,  30018,  30427,  30831,  31231,  31627,
     32018,  32404,  32786,  33163,  33535,  33902,  34264,  34621,
     34973,  35320,  35663,  36000,  36333,  36662,  36985,  37304,
     37619,  37929,  38234,  38535,  38831,  39122,  39409,  39692,
     39970,  40244,  40513,  40778,  41039,  41295,  41548,  41796,
     42041,  42282,  42520,  42754,  42985,  43213,  43438,  43660,
     43880,  44097,  44312,  44525,  44736,  44945,  45153,  45359,
     45565,  45769,  45972,  46175,  46377,  46578,  46780,  46981,
     47182,  47383,  47585,  47787,  47989,  48192,  48395,  48599,
     48804,  49009,  49215,  49422,  49630,  49839,  50049,  50259,
     50470,  50682,  50894,  51107,  51320,  51533,  51747,  51961,
     52175,  52388,  52601,  52813,  53025,  53236,  53446,  53655,
     53863,  54069,  54274,  54477,  54679,  54879,  55078,  55274,
     55469,  55662,  55853,  56042,  56230,  56415,  56598,  56779,
     56959,  57136,  57311,  57484,  57654,  57823,  57989,  58152,
     58314,  58473,  58629,  58783,  58935,  59084,  59230,  59373,
     59514,  59652,  59787,  59919,  60048,  60174,  60297,  60417,
     60533,  60647,  60757,  60865,  60969,  61070,  61167,  61262,
     61353,  61442,  61527,  61609,  61689,  61765,  61839,  61910,
     61979,  62045,  62109,  62170,  62230,  62287,  62343,  62396,
     62448,  62498,  62547,  62594,  62640,  62685,  62728,  62770,
     62811,  62852,  62891,  62929,  62967,  63004,  63040,  63075,
     63110,  63145,  63178,  63212,  63244,  63277,  63308,  63340,
     63371,  63402,  63432,  63462,  63491,  63521,  63550,  63578,
     63607,  63635,  63663,  63690,  63718,  63744,  63771,  63798,
     63824,  63850,  63875,  63900,  63925,  63950,  63975,  63999,
     64023,  64046,  64069,  64092,  64115,  64138,  64160,  64182,
     64204,  64225,  64247,  64268,  64289,  64310,  64330,  64351,
     64371,  64391,  64411,  64431,  64450,  64470,  64489,  64508,
     64527,  64545,  64564,  64582,  64600,  64617,  64635,  64652,
     64669,  64686,  64702,  64719,  64735,  64750,  64766,  64782,
     64797,  64812,  64827,  64842,  64857,  64872,  64886,  64901,
     64915,  64930,  64944,  64959,  64974,  64988,  65003,  65018,
     65033,  65048,  65063,  65078,  65094,  65109,  65125,  65141,
     65157,  65172,  65188,  65204,  65220,  65236,  65252,  65268,
     65283,  65299,  65314,  65330,  65345,  65360,  65375,  65390,
     65405,  65419,  65434,  65449,  65463,  65477,  65492,  65506,
     65521,  65535
};
const SKP_int SKP_Silk_pitch_lag_SWB_CDF_offset = 128;
const SKP_uint16 SKP_Silk_pitch_contour_CDF[ 35 ] = {
         0,    372,    843,   1315,   1836,   2644,   3576,   4719,
      6088,   7621,   9396,  11509,  14245,  17618,  20777,  24294,
     27992,  33116,  40100,  44329,  47558,  50679,  53130,  55557,
     57510,  59022,  60285,  61345,  62316,  63140,  63762,  64321,
     64729,  65099,  65535
};
const SKP_int SKP_Silk_pitch_contour_CDF_offset = 17;
const SKP_uint16 SKP_Silk_pitch_delta_CDF[23] = {
         0,    343,    740,   1249,   1889,   2733,   3861,   5396,
      7552,  10890,  16053,  24152,  30220,  34680,  37973,  40405,
     42243,  43708,  44823,  45773,  46462,  47055,  65535
};
const SKP_int SKP_Silk_pitch_delta_CDF_offset = 11;