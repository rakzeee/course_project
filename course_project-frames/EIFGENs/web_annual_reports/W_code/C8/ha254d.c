/*
 * Class HASHABLE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_254 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_1_254 [] = {0xFF01,354,253,0xFFFF};
static const EIF_TYPE_INDEX egt_2_254 [] = {0xFF01,253,0xFFFF};
static const EIF_TYPE_INDEX egt_3_254 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_254 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_254 [] = {0xFF01,253,0xFFFF};
static const EIF_TYPE_INDEX egt_6_254 [] = {0xFF01,253,0xFFFF};
static const EIF_TYPE_INDEX egt_7_254 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_254 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_254 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_10_254 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_11_254 [] = {0xFF01,22,0xFFFF};
static const EIF_TYPE_INDEX egt_12_254 [] = {0xFF01,253,0xFFFF};


static const struct desc_info desc_254[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_254), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_254), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_254), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_254), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_254), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_254), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_254), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_254), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_254), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_254), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_254), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_254), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01FB /*253*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0213 /*265*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_254), 31, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0255 /*298*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 8159, 0xFFFFFFFF},
};
void Init254(void)
{
	IDSC(desc_254, 0, 253);
	IDSC(desc_254 + 1, 2, 253);
	IDSC(desc_254 + 32, 50, 253);
}


#ifdef __cplusplus
}
#endif