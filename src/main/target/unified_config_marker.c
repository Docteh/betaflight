#include <stdint.h>
#include "common/utils.h"
#ifndef UNIFIED_REGION
#    define UNIFIED_REGION 0x08003000
#endif
#define UNIFIED_MARKER "#BTFLUNIFIEDCFG\n#ST " STR(UNIFIED_REGION) "\n#LN " STR(4096) "\n"
const char unifiedConfigMarker[] = UNIFIED_MARKER;
