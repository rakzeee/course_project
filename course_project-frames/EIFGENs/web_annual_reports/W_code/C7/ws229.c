/*
 * Code for class WSF_TRACE_RESPONSE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F229_3828(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F229_3829(EIF_REFERENCE);
extern EIF_TYPED_VALUE F229_3830(EIF_REFERENCE);
extern void F229_3831(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit229(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WSF_TRACE_RESPONSE}.make */
void F229_3828 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 228, Current, 0, 1, 4262);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(228, Current, 4262);
	RTCC(arg1, 228, l_feature_name, 1, eif_new_type(335, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3211, 0xF800014F, 0); /* request */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(3211, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3210, 0xF80000FB, 0); /* header */
	tr1 = RTLNSMART(RTWCT(3210, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(3857, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3210, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WSF_TRACE_RESPONSE}.header */
EIF_TYPED_VALUE F229_3829 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3210,Dtype(Current)));
	return r;
}


/* {WSF_TRACE_RESPONSE}.request */
EIF_TYPED_VALUE F229_3830 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3211,Dtype(Current)));
	return r;
}


/* {WSF_TRACE_RESPONSE}.send_to */
void F229_3831 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "send_to";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc4);
	RTLR(4,loc7);
	RTLR(5,tr1);
	RTLR(6,loc1);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,tr2);
	RTLR(12,loc2);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 228, Current, 9, 1, 4265);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(228, Current, 4265);
	RTCC(arg1, 228, l_feature_name, 1, eif_new_type(66, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("header_not_committed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(994, "header_committed", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("status_not_committed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(993, "status_committed", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("no_message_committed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(995, "message_committed", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 3, 0xF80000FB, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3210, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1402, 102))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(998, "set_status_code", arg1))(arg1, ui4_1x);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3539, "put_content_type_message_http", loc3))(loc3);
	RTHOOK(7);
	RTDBGAL(Current, 4, 0xF800014F, 0, 0); /* loc4 */
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3211, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(8);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5381, "raw_header_data", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc7 = RTCCL(tr1);
	if (EIF_TEST(loc7)) {
		RTHOOK(9);
		RTDBGAL(Current, 1, 0xF8000113, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(275, 0x01).id);
		ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(4325, "count", loc7));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4203, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(9,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4256, "to_string_8", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4462, "append", loc1))(loc1, ur1x);
		RTHOOK(11);
		uc1 = (EIF_CHARACTER_8) '\012';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4475, "append_character", loc1))(loc1, uc1x);
	} else {
		RTHOOK(12);
		RTDBGAL(Current, 1, 0xF8000113, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(275, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4204, Dtype(tr1)))(tr1);
		RTNHOOK(12,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(13);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5385, "is_chunked_input", loc4))(loc4)).it_b);
	if (tb1) {
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3522, "put_transfer_encoding_chunked", loc3))(loc3);
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3866, "string", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1008, "put_header_text", arg1))(arg1, ur1x);
		RTHOOK(16);
		ur1 = RTCCL(loc1);
		ur2 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1020, "put_chunk", arg1))(arg1, ur1x, ur2x);
		RTHOOK(17);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5384, "input", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc8 = RTCCL(tr1);
		if ((EIF_TRUE)) {
			RTHOOK(18);
			loc9 = RTCCL(loc8);
			loc9 = RTRV(eif_new_type(188, 0x01),loc9);
			if (EIF_TEST(loc9)) {
				RTHOOK(19);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2093, "read_chunk", loc9))(loc9);
				for (;;) {
					RTHOOK(20);
					ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(2089, "last_chunk_size", loc9));
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(21);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2090, "last_chunk_data", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2092, "last_chunk_extension", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur2 = RTCCL(tr2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1020, "put_chunk", arg1))(arg1, ur1x, ur2x);
					RTHOOK(22);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2093, "read_chunk", loc9))(loc9);
				}
				RTHOOK(23);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2092, "last_chunk_extension", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2091, "last_trailer", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur2 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1021, "put_custom_chunk_end", arg1))(arg1, ur1x, ur2x);
			} else {
				if (RTAL & CK_CHECK) {
					RTHOOK(24);
					RTCT("is_chunked_input", EX_CHECK);
						RTCF;
				}
				RTHOOK(25);
				RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8192L);
				for (;;) {
					RTHOOK(26);
					if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(27);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1976, "wipe_out", loc1))(loc1);
					RTHOOK(28);
					RTDBGAL(Current, 6, 0x10000000, 1, 0); /* loc6 */
					ur1 = RTCCL(loc1);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					ui4_2 = loc5;
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2074, "read_to_string", loc8))(loc8, ur1x, ui4_1x, ui4_2x)).it_i4);
					loc6 = (EIF_INTEGER_32) ti4_2;
					RTHOOK(29);
					if ((EIF_BOOLEAN)(loc6 == ((EIF_INTEGER_32) 0L))) {
						RTHOOK(30);
						RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
						loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					} else {
						RTHOOK(31);
						if ((EIF_BOOLEAN) (loc6 < loc5)) {
							RTHOOK(32);
							RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
							loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
						RTHOOK(33);
						ur1 = RTCCL(loc1);
						ur2 = NULL;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1020, "put_chunk", arg1))(arg1, ur1x, ur2x);
					}
				}
				RTHOOK(34);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1022, "put_chunk_end", arg1))(arg1);
			}
		}
		RTHOOK(35);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1023, "flush", arg1))(arg1);
	} else {
		RTHOOK(36);
		RTDBGAL(Current, 2, 0xF8000113, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(275, 0x01).id);
		tu8_1 = *(EIF_NATURAL_64 *)(loc4 + RTVA(5424, "content_length_value", loc4));
		RTNHOOK(36,1);
		ti4_2 = (EIF_INTEGER_32) tu8_1;
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4203, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(36,2);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(37);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5386, "read_input_data_into", loc4))(loc4, ur1x);
		RTHOOK(38);
		ti4_2 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4363, "count", loc1));
		ti4_3 = *(EIF_INTEGER_32 *)(loc2 + RTVA(4363, "count", loc2));
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + ti4_3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3516, "put_content_length", loc3))(loc3, ui4_1x);
		RTHOOK(39);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3866, "string", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1008, "put_header_text", arg1))(arg1, ur1x);
		RTHOOK(40);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1018, "put_string", arg1))(arg1, ur1x);
		RTHOOK(41);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1018, "put_string", arg1))(arg1, ur1x);
		RTHOOK(42);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1023, "flush", arg1))(arg1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(43);
		RTCT("res_status_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(997, "status_is_set", arg1))(arg1)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

void EIF_Minit229 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
