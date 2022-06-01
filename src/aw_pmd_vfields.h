 

#ifndef __aw_pmd_vfields
#define __aw_pmd_vfields

 
 
#define CMN_PRELOCK_KP_ADDR 0x00000130
#define CMN_PRELOCK_KP_OFFSET 0x00000000
#define CMN_PRELOCK_KP_BITWIDTH 0x0000000F
#define CMN_PRELOCK_KP_MASK 0x00007FFF

 
 
#define CMN_PRELOCK_KI_ADDR 0x00000130
#define CMN_PRELOCK_KI_OFFSET 0x0000000F
#define CMN_PRELOCK_KI_BITWIDTH 0x00000005
#define CMN_PRELOCK_KI_MASK 0x000F8000

 
 
#define CMN_POSTLOCK_KP_ADDR 0x00000134
#define CMN_POSTLOCK_KP_OFFSET 0x00000000
#define CMN_POSTLOCK_KP_BITWIDTH 0x0000000F
#define CMN_POSTLOCK_KP_MASK 0x00007FFF

 
 
#define CMN_POSTLOCK_KI_ADDR 0x00000134
#define CMN_POSTLOCK_KI_OFFSET 0x0000000F
#define CMN_POSTLOCK_KI_BITWIDTH 0x00000005
#define CMN_POSTLOCK_KI_MASK 0x000F8000

 
 
#define CMN_SRIS_ENABLE_ADDR 0x00000134
#define CMN_SRIS_ENABLE_OFFSET 0x00000014
#define CMN_SRIS_ENABLE_BITWIDTH 0x00000001
#define CMN_SRIS_ENABLE_MASK 0x00100000

 
 
#define LSREF_BYPASS_ADDR 0x00000138
#define LSREF_BYPASS_OFFSET 0x00000000
#define LSREF_BYPASS_BITWIDTH 0x00000020
#define LSREF_BYPASS_MASK 0xFFFFFFFF

 
 
#define FAST_SRAM_CLK_ADDR 0x0000013C
#define FAST_SRAM_CLK_OFFSET 0x00000000
#define FAST_SRAM_CLK_BITWIDTH 0x00000020
#define FAST_SRAM_CLK_MASK 0xFFFFFFFF

 
 
#define TX_SPARE_0_ADDR 0x02001070
#define TX_SPARE_0_OFFSET 0x0000000A
#define TX_SPARE_0_BITWIDTH 0x00000001
#define TX_SPARE_0_MASK 0x00000400

 
 
#define TX_SPARE_1_ADDR 0x02001070
#define TX_SPARE_1_OFFSET 0x0000000B
#define TX_SPARE_1_BITWIDTH 0x00000001
#define TX_SPARE_1_MASK 0x00000800

 
 
#define NYQ0_ADDR 0x02000978
#define NYQ0_OFFSET 0x00000000
#define NYQ0_BITWIDTH 0x00000010
#define NYQ0_MASK 0x0000FFFF

 
 
#define NYQ1_ADDR 0x02000978
#define NYQ1_OFFSET 0x00000010
#define NYQ1_BITWIDTH 0x00000010
#define NYQ1_MASK 0xFFFF0000

 
 
#define NYQ2_ADDR 0x020009A4
#define NYQ2_OFFSET 0x00000000
#define NYQ2_BITWIDTH 0x00000010
#define NYQ2_MASK 0x0000FFFF

 
 
#define NYQ3_ADDR 0x020009A4
#define NYQ3_OFFSET 0x00000010
#define NYQ3_BITWIDTH 0x00000010
#define NYQ3_MASK 0xFFFF0000

 
 
#define NYQ4_ADDR 0x020009BC
#define NYQ4_OFFSET 0x00000000
#define NYQ4_BITWIDTH 0x00000010
#define NYQ4_MASK 0x0000FFFF

 
 
#define NYQ5_ADDR 0x020009BC
#define NYQ5_OFFSET 0x00000010
#define NYQ5_BITWIDTH 0x00000010
#define NYQ5_MASK 0xFFFF0000

 
 
#define CM1C1_TAKEOVER_RATIO_ADDR 0x020009C0
#define CM1C1_TAKEOVER_RATIO_OFFSET 0x00000000
#define CM1C1_TAKEOVER_RATIO_BITWIDTH 0x00000010
#define CM1C1_TAKEOVER_RATIO_MASK 0x0000FFFF

 
 
#define C0_TAKEOVER_CODE_ADDR 0x020009C0
#define C0_TAKEOVER_CODE_OFFSET 0x00000010
#define C0_TAKEOVER_CODE_BITWIDTH 0x00000005
#define C0_TAKEOVER_CODE_MASK 0x001F0000

 
 
#define EQBK_COUNTER_ADDR 0x020009C4
#define EQBK_COUNTER_OFFSET 0x00000000
#define EQBK_COUNTER_BITWIDTH 0x00000005
#define EQBK_COUNTER_MASK 0x0000001F

 
 
#define TEMP1_ADDR 0x020009C4
#define TEMP1_OFFSET 0x00000005
#define TEMP1_BITWIDTH 0x00000007
#define TEMP1_MASK 0x00000FE0

 
 
#define TEMP2_ADDR 0x020009C4
#define TEMP2_OFFSET 0x0000000C
#define TEMP2_BITWIDTH 0x00000004
#define TEMP2_MASK 0x0000F000

 
 
#define SIGDET_OFFSET_CAL_VALID_ADDR 0x020009C4
#define SIGDET_OFFSET_CAL_VALID_OFFSET 0x00000010
#define SIGDET_OFFSET_CAL_VALID_BITWIDTH 0x00000001
#define SIGDET_OFFSET_CAL_VALID_MASK 0x00010000

 
 
#define SIGDET_OFFSET_CAL_ADDR 0x020009C4
#define SIGDET_OFFSET_CAL_OFFSET 0x00000011
#define SIGDET_OFFSET_CAL_BITWIDTH 0x00000004
#define SIGDET_OFFSET_CAL_MASK 0x001E0000

 
 
#define FG_DONE_ADDR 0x020009C8
#define FG_DONE_OFFSET 0x00000000
#define FG_DONE_BITWIDTH 0x00000001
#define FG_DONE_MASK 0x00000001

 
 
#define EQBK_FIRST_ITER_DONE_ADDR 0x020009C8
#define EQBK_FIRST_ITER_DONE_OFFSET 0x00000001
#define EQBK_FIRST_ITER_DONE_BITWIDTH 0x00000001
#define EQBK_FIRST_ITER_DONE_MASK 0x00000002

 
 
#define POST1_NPRE1_ADDR 0x020009C8
#define POST1_NPRE1_OFFSET 0x00000002
#define POST1_NPRE1_BITWIDTH 0x00000001
#define POST1_NPRE1_MASK 0x00000004

 
 
#define LINKEVAL_STATE_ADDR 0x020009C8
#define LINKEVAL_STATE_OFFSET 0x00000003
#define LINKEVAL_STATE_BITWIDTH 0x00000004
#define LINKEVAL_STATE_MASK 0x00000078

 
 
#define C0_DEC_COUNTER_ADDR 0x020009C8
#define C0_DEC_COUNTER_OFFSET 0x00000007
#define C0_DEC_COUNTER_BITWIDTH 0x00000008
#define C0_DEC_COUNTER_MASK 0x00007F80

 
 
#define CM1_INC_COUNTER_ADDR 0x020009C8
#define CM1_INC_COUNTER_OFFSET 0x0000000F
#define CM1_INC_COUNTER_BITWIDTH 0x00000006
#define CM1_INC_COUNTER_MASK 0x001F8000

 
 
#define C1_INC_COUNTER_ADDR 0x020009C8
#define C1_INC_COUNTER_OFFSET 0x00000015
#define C1_INC_COUNTER_BITWIDTH 0x00000006
#define C1_INC_COUNTER_MASK 0x07E00000

 
 
#define C0_ITER_REMAIN_ADDR 0x020009C8
#define C0_ITER_REMAIN_OFFSET 0x0000001B
#define C0_ITER_REMAIN_BITWIDTH 0x00000005
#define C0_ITER_REMAIN_MASK 0xF8000000

 
 
#define CHANNEL_TYPE_ADDR 0x020009C4
#define CHANNEL_TYPE_OFFSET 0x00000015
#define CHANNEL_TYPE_BITWIDTH 0x00000002
#define CHANNEL_TYPE_MASK 0x00600000

 
 
#define AUTOEQ_DISABLE_ADDR 0x020009CC
#define AUTOEQ_DISABLE_OFFSET 0x00000000
#define AUTOEQ_DISABLE_BITWIDTH 0x00000008
#define AUTOEQ_DISABLE_MASK 0x000000FF

 
 
#define EQSTORE_VALID_ADDR 0x020009CC
#define EQSTORE_VALID_OFFSET 0x00000008
#define EQSTORE_VALID_BITWIDTH 0x00000008
#define EQSTORE_VALID_MASK 0x0000FF00

 
 
#define DISABLE_VGA_CAP_ADAPT_ADDR 0x020009CC
#define DISABLE_VGA_CAP_ADAPT_OFFSET 0x00000010
#define DISABLE_VGA_CAP_ADAPT_BITWIDTH 0x00000001
#define DISABLE_VGA_CAP_ADAPT_MASK 0x00010000

 
 
#define DISABLE_CTLE_ADAPT_ADDR 0x020009CC
#define DISABLE_CTLE_ADAPT_OFFSET 0x00000011
#define DISABLE_CTLE_ADAPT_BITWIDTH 0x00000001
#define DISABLE_CTLE_ADAPT_MASK 0x00020000

 
 
#define DISABLE_C0_ADAPT_ADDR 0x020009CC
#define DISABLE_C0_ADAPT_OFFSET 0x00000012
#define DISABLE_C0_ADAPT_BITWIDTH 0x00000001
#define DISABLE_C0_ADAPT_MASK 0x00040000

 
 
#define DISABLE_CM1C1_ADAPT_ADDR 0x020009CC
#define DISABLE_CM1C1_ADAPT_OFFSET 0x00000013
#define DISABLE_CM1C1_ADAPT_BITWIDTH 0x00000001
#define DISABLE_CM1C1_ADAPT_MASK 0x00080000

 
 
#define USE_CUSTOM_VGA_CAP_TAKEOVER_ADDR 0x020009CC
#define USE_CUSTOM_VGA_CAP_TAKEOVER_OFFSET 0x00000014
#define USE_CUSTOM_VGA_CAP_TAKEOVER_BITWIDTH 0x00000001
#define USE_CUSTOM_VGA_CAP_TAKEOVER_MASK 0x00100000

 
 
#define USE_CUSTOM_CTLE_TAKEOVER_ADDR 0x020009CC
#define USE_CUSTOM_CTLE_TAKEOVER_OFFSET 0x00000015
#define USE_CUSTOM_CTLE_TAKEOVER_BITWIDTH 0x00000001
#define USE_CUSTOM_CTLE_TAKEOVER_MASK 0x00200000

 
 
#define USE_CUSTOM_C0_TAKEOVER_ADDR 0x020009CC
#define USE_CUSTOM_C0_TAKEOVER_OFFSET 0x00000016
#define USE_CUSTOM_C0_TAKEOVER_BITWIDTH 0x00000001
#define USE_CUSTOM_C0_TAKEOVER_MASK 0x00400000

 
 
#define USE_CUSTOM_CM1C1_DZ_ADDR 0x020009CC
#define USE_CUSTOM_CM1C1_DZ_OFFSET 0x00000017
#define USE_CUSTOM_CM1C1_DZ_BITWIDTH 0x00000001
#define USE_CUSTOM_CM1C1_DZ_MASK 0x00800000

 
 
#define USE_CUSTOM_CDR_OFFSET_ADDR 0x020009CC
#define USE_CUSTOM_CDR_OFFSET_OFFSET 0x00000018
#define USE_CUSTOM_CDR_OFFSET_BITWIDTH 0x00000001
#define USE_CUSTOM_CDR_OFFSET_MASK 0x01000000

 
 
#define USE_CUSTOM_NYQ_MASKS_ADDR 0x020009CC
#define USE_CUSTOM_NYQ_MASKS_OFFSET 0x00000019
#define USE_CUSTOM_NYQ_MASKS_BITWIDTH 0x00000001
#define USE_CUSTOM_NYQ_MASKS_MASK 0x02000000

 
 
#define SKIP_WAIT_LT_DONE_ADDR 0x020009CC
#define SKIP_WAIT_LT_DONE_OFFSET 0x0000001A
#define SKIP_WAIT_LT_DONE_BITWIDTH 0x00000001
#define SKIP_WAIT_LT_DONE_MASK 0x04000000

 
 
#define LIMIT_TARGET_CMA_ADDR 0x020009CC
#define LIMIT_TARGET_CMA_OFFSET 0x0000001C
#define LIMIT_TARGET_CMA_BITWIDTH 0x00000001
#define LIMIT_TARGET_CMA_MASK 0x10000000

 
 
#define ZERO_SMALL_TAPS_ADDR 0x020009CC
#define ZERO_SMALL_TAPS_OFFSET 0x0000001D
#define ZERO_SMALL_TAPS_BITWIDTH 0x00000001
#define ZERO_SMALL_TAPS_MASK 0x20000000

 
 
#define NES_MODE_ADDR 0x020009CC
#define NES_MODE_OFFSET 0x0000001E
#define NES_MODE_BITWIDTH 0x00000001
#define NES_MODE_MASK 0x40000000

 
 
#define VGA_CAP_TAKEOVER_RATIO_ADDR 0x020009D0
#define VGA_CAP_TAKEOVER_RATIO_OFFSET 0x00000000
#define VGA_CAP_TAKEOVER_RATIO_BITWIDTH 0x00000010
#define VGA_CAP_TAKEOVER_RATIO_MASK 0x0000FFFF

 
 
#define CTLE_TAKEOVER_RATIO_ADDR 0x020009D0
#define CTLE_TAKEOVER_RATIO_OFFSET 0x00000010
#define CTLE_TAKEOVER_RATIO_BITWIDTH 0x00000010
#define CTLE_TAKEOVER_RATIO_MASK 0xFFFF0000

 
 
#define DZ_PRE1_FW_ADDR 0x020009D4
#define DZ_PRE1_FW_OFFSET 0x00000000
#define DZ_PRE1_FW_BITWIDTH 0x00000020
#define DZ_PRE1_FW_MASK 0xFFFFFFFF

 
 
#define DZ_POST1_FW_ADDR 0x0200097C
#define DZ_POST1_FW_OFFSET 0x00000000
#define DZ_POST1_FW_BITWIDTH 0x00000020
#define DZ_POST1_FW_MASK 0xFFFFFFFF

 
 
#define CDR_OFFSET_CFG_ADDR 0x02000980
#define CDR_OFFSET_CFG_OFFSET 0x00000000
#define CDR_OFFSET_CFG_BITWIDTH 0x00000009
#define CDR_OFFSET_CFG_MASK 0x000001FF

 
 
#define RXEQ_PRBS_ADDR 0x02000980
#define RXEQ_PRBS_OFFSET 0x0000001C
#define RXEQ_PRBS_BITWIDTH 0x00000001
#define RXEQ_PRBS_MASK 0x10000000

 
 
#define EQBK_SKIP_DELAY_ADDR 0x02000980
#define EQBK_SKIP_DELAY_OFFSET 0x0000001D
#define EQBK_SKIP_DELAY_BITWIDTH 0x00000001
#define EQBK_SKIP_DELAY_MASK 0x20000000

 
 
#define EQBK_HOLD_REQ_ADDR 0x02000980
#define EQBK_HOLD_REQ_OFFSET 0x0000001F
#define EQBK_HOLD_REQ_BITWIDTH 0x00000001
#define EQBK_HOLD_REQ_MASK 0x80000000

 
 
#define NYQ_MASK_VGA_CAP_ADDR 0x02000984
#define NYQ_MASK_VGA_CAP_OFFSET 0x00000000
#define NYQ_MASK_VGA_CAP_BITWIDTH 0x00000008
#define NYQ_MASK_VGA_CAP_MASK 0x000000FF

 
 
#define NYQ_MASK_CTLE_ADDR 0x02000984
#define NYQ_MASK_CTLE_OFFSET 0x00000008
#define NYQ_MASK_CTLE_BITWIDTH 0x00000008
#define NYQ_MASK_CTLE_MASK 0x0000FF00

 
 
#define NYQ_MASK_CM1C1_ADDR 0x02000984
#define NYQ_MASK_CM1C1_OFFSET 0x00000010
#define NYQ_MASK_CM1C1_BITWIDTH 0x00000008
#define NYQ_MASK_CM1C1_MASK 0x00FF0000

 
 
#define RX_SRIS_ENABLE_ADDR 0x02000984
#define RX_SRIS_ENABLE_OFFSET 0x00000018
#define RX_SRIS_ENABLE_BITWIDTH 0x00000001
#define RX_SRIS_ENABLE_MASK 0x01000000

 
 
#define EQBK_HOLD_ACK_ADDR 0x02000984
#define EQBK_HOLD_ACK_OFFSET 0x0000001F
#define EQBK_HOLD_ACK_BITWIDTH 0x00000001
#define EQBK_HOLD_ACK_MASK 0x80000000

 
 
#define __NYQ_MASK_ADDR 0x0200098C
#define __NYQ_MASK_OFFSET 0x00000000
#define __NYQ_MASK_BITWIDTH 0x00000008
#define __NYQ_MASK_MASK 0x000000FF

 
 
#define ENABLE_ROAMING_ADAPT_ADDR 0x0200098C
#define ENABLE_ROAMING_ADAPT_OFFSET 0x00000008
#define ENABLE_ROAMING_ADAPT_BITWIDTH 0x00000001
#define ENABLE_ROAMING_ADAPT_MASK 0x00000100

 
 
#define USE_CUSTOM_ROAMING_WINDOWS_ADDR 0x0200098C
#define USE_CUSTOM_ROAMING_WINDOWS_OFFSET 0x00000009
#define USE_CUSTOM_ROAMING_WINDOWS_BITWIDTH 0x00000001
#define USE_CUSTOM_ROAMING_WINDOWS_MASK 0x00000200

 
 
#define ROAMING_WINDOWS_CFG_ADDR 0x02000990
#define ROAMING_WINDOWS_CFG_OFFSET 0x00000000
#define ROAMING_WINDOWS_CFG_BITWIDTH 0x0000000E
#define ROAMING_WINDOWS_CFG_MASK 0x00003FFF

 
 
#define USE_REDUCED_TAPS_ADDR 0x02000990
#define USE_REDUCED_TAPS_OFFSET 0x0000000E
#define USE_REDUCED_TAPS_BITWIDTH 0x00000001
#define USE_REDUCED_TAPS_MASK 0x00004000

 
 
#define REDUCED_TAPS_ADDR 0x02000994
#define REDUCED_TAPS_OFFSET 0x0000000F
#define REDUCED_TAPS_BITWIDTH 0x00000002
#define REDUCED_TAPS_MASK 0x00018000

 
 
#define PROTOCOL_ADDR 0x02000994
#define PROTOCOL_OFFSET 0x00000011
#define PROTOCOL_BITWIDTH 0x00000001
#define PROTOCOL_MASK 0x00020000

 
 
#define FFE_TAP_DISABLE_ADDR 0x02000998
#define FFE_TAP_DISABLE_OFFSET 0x00000000
#define FFE_TAP_DISABLE_BITWIDTH 0x00000017
#define FFE_TAP_DISABLE_MASK 0x007FFFFF

 
 
#define USE_CUSTOM_FFE_TAP_DISABLE_ADDR 0x02000998
#define USE_CUSTOM_FFE_TAP_DISABLE_OFFSET 0x00000017
#define USE_CUSTOM_FFE_TAP_DISABLE_BITWIDTH 0x00000001
#define USE_CUSTOM_FFE_TAP_DISABLE_MASK 0x00800000


#endif  

