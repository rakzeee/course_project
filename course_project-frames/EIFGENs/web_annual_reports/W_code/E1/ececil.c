#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* WSF_STANDALONE_SERVICE_LAUNCHER [G#1] on_launched */
void _A601_41_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(880, "on_launched", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* WGI_FILTER_RESPONSE commit */
void _A100_38 (void(*f_ptr) (EIF_REFERENCE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1300, "commit", closed [1].it_r))(closed [1].it_r);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of not_found_message */
void _A236_45_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F236_7639)(closed [1].it_r, open [1], closed [2], closed [3]);
}

	/* WSF_DEFAULT_ROUTER_RESPONSE inline-agent#1 of method_not_allowed_message */
void _A236_46_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) F236_7640)(closed [1].it_r, open [1], closed [2]);
}

	/* HASH_TABLE [G#1, INTEGER_32] has */
EIF_TYPED_VALUE _A581_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [G#1, G#2] has */
EIF_TYPED_VALUE _A627_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, INTEGER_32] has */
EIF_TYPED_VALUE _A887_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* HASH_TABLE [INTEGER_32, G#2] has */
EIF_TYPED_VALUE _A923_48_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3598, "has", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION clear_all */
void A250_93 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3629, "clear_all", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A250_159 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3697, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A250_160 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3698, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* WSF_REQUEST item */
EIF_TYPED_VALUE _A336_70_2 (EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5402, "item", closed [1].it_r))(closed [1].it_r, open [1]);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A341_159_2 (void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE) , EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F341_7681)(closed [1].it_r, open [1]);
}

	/* SQLITE_DATABASE on_busy */
EIF_BOOLEAN A986_142 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	EIF_TYPED_VALUE u [1];
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "on_busy", Current))(Current, ((u [0].type = SK_UINT32), (u [0].it_n4 = arg1), u [0])).it_b;
}

	/* SQLITE_DATABASE on_update_callback */
void A986_138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_64 arg4)
{
	EIF_TYPED_VALUE u [4];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6255, "on_update_callback", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT64), (u [3].it_i8 = arg4), u [3]));
}

	/* SQLITE_DATABASE on_rollback_callback */
void A986_136 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6253, "on_rollback_callback", Current))(Current);
}

	/* SQLITE_DATABASE on_commit_callback */
EIF_BOOLEAN A986_134 (EIF_REFERENCE Current)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6251, "on_commit_callback", Current))(Current).it_b;
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A250_93,
(fnptr)A250_159,
(fnptr)A250_160,
(fnptr)A986_142,
(fnptr)A986_138,
(fnptr)A986_136,
(fnptr)A986_134,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
