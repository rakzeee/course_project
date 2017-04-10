/*
 * Code for class SQLITE_EXCEPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F974_7845(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F974_7846(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F974_7847(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_7848(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_7849(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F974_7850(EIF_REFERENCE);
extern EIF_TYPED_VALUE F974_7851(EIF_REFERENCE);
extern void EIF_Minit974(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SQLITE_EXCEPTION}.make */
void F974_7845 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 973, Current, 0, 1, 13736);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(973, Current, 13736);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_a_code_is_ok", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5877, 962))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(arg1 != ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = arg1;
	ui4_2 = arg1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6023, dtype))(Current, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6020, dtype))(Current, ui4_1x, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("internal_code_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6024, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {SQLITE_EXCEPTION}.make_with_message */
void F974_7846 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_with_message";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 973, Current, 0, 2, 13737);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(973, Current, 13737);
	RTCC(arg2, 973, l_feature_name, 2, eif_new_type(271, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_a_code_is_ok", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5877, 962))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(arg1 != ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6024, 0x10000000, 1); /* internal_code */
	*(EIF_INTEGER_32 *)(Current + RTWA(6024, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6025, 0xF800010E, 0); /* tag */
	tr1 = RTLNSMART(RTWCT(6025, dtype, Dftype(Current)).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4261, "as_readable_string_32", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4299, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(6025, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("internal_code_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6024, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("tag_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6025, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4261, "as_readable_string_32", arg2))(arg2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4312, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef arg2
#undef arg1
}

/* {SQLITE_EXCEPTION}.result_code */
EIF_TYPED_VALUE F974_7847 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "result_code";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 973, Current, 0, 0, 13738);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(973, Current, 13738);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6024, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5875, 962))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_and(ti4_1,ui4_1);
	Result = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_result_code", EX_POST);
		tr1 = RTLN(eif_new_type(962, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		ui4_1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5906, "is_valid_result_code", tr1))(tr1, ui4_1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("not_result_is_ok", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5877, 962))(Current)).it_i4);
		if ((EIF_BOOLEAN)(Result != ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {SQLITE_EXCEPTION}.extended_code */
EIF_TYPED_VALUE F974_7848 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "extended_code";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 973, Current, 0, 0, 13739);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(973, Current, 13739);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6024, Dtype(Current)));
	ui4_1 = ((EIF_INTEGER_32) 8L);
	ti4_2 = eif_bit_shift_left(ti4_1,ui4_1);
	Result = (EIF_INTEGER_32) ti4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {SQLITE_EXCEPTION}.message_from_code */
EIF_TYPED_VALUE F974_7849 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "message_from_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 973, Current, 1, 1, 13740);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(973, Current, 13740);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_result_code", EX_PRE);
		tr1 = RTLN(eif_new_type(962, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(1,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5906, "is_valid_result_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_a_code_is_ok", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5877, 962))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(arg1 != ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5875, 962))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_and(arg1,ui4_1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5878, 962))(Current)).it_i4);
	if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
		Result = RTMS_EX_H("SQL error or missing database",29,1457216613);
	} else {
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5879, 962))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
			Result = RTMS_EX_H("Internal logic error in SQLite",30,377907045);
		} else {
			RTHOOK(8);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5880, 962))(Current)).it_i4);
			if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
				RTHOOK(9);
				RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
				Result = RTMS_EX_H("Access permission denied",24,401541988);
			} else {
				RTHOOK(10);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5881, 962))(Current)).it_i4);
				if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
					RTHOOK(11);
					RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
					Result = RTMS_EX_H("Callback routine requested an abort",35,1940845684);
				} else {
					RTHOOK(12);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5882, 962))(Current)).it_i4);
					if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
						RTHOOK(13);
						RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
						Result = RTMS_EX_H("The database file is locked",27,1487636580);
					} else {
						RTHOOK(14);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5883, 962))(Current)).it_i4);
						if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
							RTHOOK(15);
							RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
							Result = RTMS_EX_H("A table in the database is locked",33,2087120484);
						} else {
							RTHOOK(16);
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5884, 962))(Current)).it_i4);
							if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
								RTHOOK(17);
								RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
								Result = RTMS_EX_H("There is not enough memory",26,307331193);
							} else {
								RTHOOK(18);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5885, 962))(Current)).it_i4);
								if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
									RTHOOK(19);
									RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
									Result = RTMS_EX_H("Attempted to write a read-only database",39,374305893);
								} else {
									RTHOOK(20);
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5886, 962))(Current)).it_i4);
									if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
										RTHOOK(21);
										RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
										Result = RTMS_EX_H("Operation interrupted",21,940657508);
									} else {
										RTHOOK(22);
										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5887, 962))(Current)).it_i4);
										if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
											RTHOOK(23);
											RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
											Result = RTMS_EX_H("I/O operation error",19,1678256498);
										} else {
											RTHOOK(24);
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5888, 962))(Current)).it_i4);
											if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
												RTHOOK(25);
												RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
												Result = RTMS_EX_H("The database disk image is malformed",36,711189092);
											} else {
												RTHOOK(26);
												ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5889, 962))(Current)).it_i4);
												if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
													if (RTAL & CK_CHECK) {
														RTHOOK(27);
														RTCT("not_used", EX_CHECK);
															RTCF;
													}
													RTHOOK(28);
													RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
													Result = RTMS_EX_H("Table or record not found",25,1960066916);
												} else {
													RTHOOK(29);
													ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5890, 962))(Current)).it_i4);
													if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
														RTHOOK(30);
														RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
														Result = RTMS_EX_H("Insertion failed because database is full",41,432642924);
													} else {
														RTHOOK(31);
														ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5891, 962))(Current)).it_i4);
														if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
															RTHOOK(32);
															RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
															Result = RTMS_EX_H("Unable to open the database file",32,432045413);
														} else {
															RTHOOK(33);
															ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5892, 962))(Current)).it_i4);
															if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																if (RTAL & CK_CHECK) {
																	RTHOOK(34);
																	RTCT("not_used", EX_CHECK);
																		RTCF;
																}
																RTHOOK(35);
																RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																Result = RTMS_EX_H("Database lock protocol error",28,2017768306);
															} else {
																RTHOOK(36);
																ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5893, 962))(Current)).it_i4);
																if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																	RTHOOK(37);
																	RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																	Result = RTMS_EX_H("Database is empty",17,216386681);
																} else {
																	RTHOOK(38);
																	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5894, 962))(Current)).it_i4);
																	if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																		RTHOOK(39);
																		RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																		Result = RTMS_EX_H("The database schema changed",27,2123186020);
																	} else {
																		RTHOOK(40);
																		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5895, 962))(Current)).it_i4);
																		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																			RTHOOK(41);
																			RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																			Result = RTMS_EX_H("String or BLOB exceeds size limit",33,620043636);
																		} else {
																			RTHOOK(42);
																			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5896, 962))(Current)).it_i4);
																			if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																				RTHOOK(43);
																				RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																				Result = RTMS_EX_H("Abort due to constraint violation",33,1963456622);
																			} else {
																				RTHOOK(44);
																				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5897, 962))(Current)).it_i4);
																				if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																					RTHOOK(45);
																					RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																					Result = RTMS_EX_H("Data type mismatch",18,811392872);
																				} else {
																					RTHOOK(46);
																					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5898, 962))(Current)).it_i4);
																					if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																						RTHOOK(47);
																						RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																						Result = RTMS_EX_H("Library used incorrectly",24,106989177);
																					} else {
																						RTHOOK(48);
																						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5899, 962))(Current)).it_i4);
																						if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																							RTHOOK(49);
																							RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																							Result = RTMS_EX_H("Use of OS features not supported on host",40,1117792372);
																						} else {
																							RTHOOK(50);
																							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5900, 962))(Current)).it_i4);
																							if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																								RTHOOK(51);
																								RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																								Result = RTMS_EX_H("Authorization denied",20,783759460);
																							} else {
																								RTHOOK(52);
																								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5901, 962))(Current)).it_i4);
																								if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																									RTHOOK(53);
																									RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																									Result = RTMS_EX_H("Auxiliary database format error",31,1812450418);
																								} else {
																									RTHOOK(54);
																									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5902, 962))(Current)).it_i4);
																									if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																										RTHOOK(55);
																										RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																										Result = RTMS_EX_H("2nd parameter to sqlite3_bind out of range",42,604313445);
																									} else {
																										RTHOOK(56);
																										ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5903, 962))(Current)).it_i4);
																										if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
																											RTHOOK(57);
																											RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																											Result = RTMS_EX_H("File opened that is not a database file",39,1883566693);
																										} else {
																											if (RTAL & CK_CHECK) {
																												RTHOOK(58);
																												RTCT("unhandled_error", EX_CHECK);
																													RTCF;
																											}
																											RTHOOK(59);
																											RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
																											Result = RTMS_EX_H("Unknown error",13,1947251314);
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(60);
		RTCT("not_result_is_empty", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4220, "is_empty", Result))(Result)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(61);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {SQLITE_EXCEPTION}.tag */
EIF_TYPED_VALUE F974_7850 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(6025,Dtype(Current)));
	return r;
}


/* {SQLITE_EXCEPTION}.internal_code */
EIF_TYPED_VALUE F974_7851 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6024,Dtype(Current)));
	return r;
}


void EIF_Minit974 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
