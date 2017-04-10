/*
 * Class HTTPD_REQUEST_HANDLER_I
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_165 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_1_165 [] = {0xFF01,354,164,0xFFFF};
static const EIF_TYPE_INDEX egt_2_165 [] = {0xFF01,164,0xFFFF};
static const EIF_TYPE_INDEX egt_3_165 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_165 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_165 [] = {0xFF01,164,0xFFFF};
static const EIF_TYPE_INDEX egt_6_165 [] = {0xFF01,164,0xFFFF};
static const EIF_TYPE_INDEX egt_7_165 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_165 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_165 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_10_165 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_11_165 [] = {0xFF01,22,0xFFFF};
static const EIF_TYPE_INDEX egt_12_165 [] = {0xFF01,164,0xFFFF};
static const EIF_TYPE_INDEX egt_13_165 [] = {0xFF01,2,0xFFFF};
static const EIF_TYPE_INDEX egt_14_165 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_15_165 [] = {0xFF01,626,0xFF01,275,0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_16_165 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_17_165 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_18_165 [] = {0xFFF9,3,254,0xFF01,275,0xFF01,275,298,0xFFFF};


static const struct desc_info desc_165[] = {
	{EIF_GENERIC(NULL), 2031, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_165), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_165), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_165), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_165), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_165), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_165), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_165), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_165), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_165), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_165), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_165), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_165), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0149 /*164*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0213 /*265*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_165), 31, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2029, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0255 /*298*/), 2030, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2032, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2033, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2034, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 2035, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x05 /*2*/), 2036, 0},
	{EIF_GENERIC(egt_13_165), 2037, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_165), 2038, 8},
	{EIF_GENERIC(egt_15_165), 2039, 16},
	{EIF_GENERIC(egt_16_165), 2040, 24},
	{EIF_GENERIC(egt_17_165), 2041, 32},
	{EIF_NON_GENERIC(0x0227 /*275*/), 2042, 40},
	{EIF_GENERIC(egt_18_165), 2043, 48},
	{EIF_NON_GENERIC(0x020D /*262*/), 2044, 64},
	{EIF_NON_GENERIC(0x020D /*262*/), 2045, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 2046, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 2047, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 2048, 65},
	{EIF_NON_GENERIC(0x020D /*262*/), 2049, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0255 /*298*/), 2050, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 2051, 66},
	{EIF_GENERIC(NULL), 2052, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2053, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2054, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2055, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2056, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2057, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2058, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0227 /*275*/), 2059, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x43 /*33*/), 2060, 56},
	{EIF_GENERIC(NULL), 2061, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 2062, 0xFFFFFFFF},
};
void Init165(void)
{
	IDSC(desc_165, 0, 164);
	IDSC(desc_165 + 1, 2, 164);
	IDSC(desc_165 + 32, 378, 164);
	IDSC(desc_165 + 34, 408, 164);
}


#ifdef __cplusplus
}
#endif