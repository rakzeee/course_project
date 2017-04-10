/*
 * Class WGI_CONNECTOR
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_55 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_1_55 [] = {0xFF01,354,54,0xFFFF};
static const EIF_TYPE_INDEX egt_2_55 [] = {0xFF01,54,0xFFFF};
static const EIF_TYPE_INDEX egt_3_55 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_55 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_55 [] = {0xFF01,54,0xFFFF};
static const EIF_TYPE_INDEX egt_6_55 [] = {0xFF01,54,0xFFFF};
static const EIF_TYPE_INDEX egt_7_55 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_55 [] = {0xFF01,21,0xFFFF};
static const EIF_TYPE_INDEX egt_9_55 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_10_55 [] = {0xFF01,275,0xFFFF};
static const EIF_TYPE_INDEX egt_11_55 [] = {0xFF01,22,0xFFFF};
static const EIF_TYPE_INDEX egt_12_55 [] = {0xFF01,54,0xFFFF};
static const EIF_TYPE_INDEX egt_13_55 [] = {0xFF01,271,0xFFFF};
static const EIF_TYPE_INDEX egt_14_55 [] = {0xFF01,271,0xFFFF};


static const struct desc_info desc_55[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_55), 1, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_55), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x020D /*262*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_55), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_55), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_55), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_55), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_55), 17, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_55), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_55), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_55), 22, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_55), 23, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 24, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_55), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x6D /*54*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0213 /*265*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_55), 31, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_55), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_55), 0x00, 0xFFFFFFFF},
};
void Init55(void)
{
	IDSC(desc_55, 0, 54);
	IDSC(desc_55 + 1, 2, 54);
	IDSC(desc_55 + 32, 263, 54);
}


#ifdef __cplusplus
}
#endif