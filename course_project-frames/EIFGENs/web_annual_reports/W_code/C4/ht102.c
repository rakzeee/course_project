/*
 * Code for class HTTP_REQUEST_METHODS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F102_1533(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F102_1534(EIF_REFERENCE);
extern EIF_TYPED_VALUE F102_1535(EIF_REFERENCE);
extern EIF_TYPED_VALUE F102_1536(EIF_REFERENCE);
extern EIF_TYPED_VALUE F102_1537(EIF_REFERENCE);
extern EIF_TYPED_VALUE F102_1538(EIF_REFERENCE);
extern EIF_TYPED_VALUE F102_1539(EIF_REFERENCE);
extern EIF_TYPED_VALUE F102_1540(EIF_REFERENCE);
extern EIF_TYPED_VALUE F102_1541(EIF_REFERENCE);
extern EIF_TYPED_VALUE F102_1542(EIF_REFERENCE);
extern void EIF_Minit102(void);

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

/* {HTTP_REQUEST_METHODS}.method */
EIF_TYPED_VALUE F102_1533 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "method";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 101, Current, 0, 1, 1487);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(101, Current, 1487);
	RTCC(arg1, 101, l_feature_name, 1, eif_new_type(271, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1390, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4347, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
		Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1390, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	} else {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1393, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4347, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
			Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1393, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTHOOK(5);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1389, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4347, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(6);
				RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
				Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1389, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			} else {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1391, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4347, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
					Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1391, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				} else {
					RTHOOK(9);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1392, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4347, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(10);
						RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
						Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1392, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					} else {
						RTHOOK(11);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1394, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4347, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
							Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1394, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						} else {
							RTHOOK(13);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1395, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							ur1 = RTCCL(tr1);
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4347, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
							if (tb1) {
								RTHOOK(14);
								RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
								Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1395, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							} else {
								RTHOOK(15);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1396, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								ur1 = RTCCL(tr1);
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4347, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
								if (tb1) {
									RTHOOK(16);
									RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
									Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1396, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								} else {
									RTHOOK(17);
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1397, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									ur1 = RTCCL(tr1);
									tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4347, "is_case_insensitive_equal", arg1))(arg1, ur1x)).it_b);
									if (tb1) {
										RTHOOK(18);
										RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
										Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1397, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									} else {
										RTHOOK(19);
										RTDBGAL(Current, 0, 0xF800010F, 0,0); /* Result */
										tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4265, "as_upper", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
										Result = (EIF_REFERENCE) RTCCL(tr1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {HTTP_REQUEST_METHODS}.method_head */
RTOID (F102_1534)


EIF_TYPED_VALUE F102_1534 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F102_1534,1489,RTMS_EX_H("HEAD",4,1212498244));
}

/* {HTTP_REQUEST_METHODS}.method_get */
RTOID (F102_1535)


EIF_TYPED_VALUE F102_1535 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F102_1535,1490,RTMS_EX_H("GET",3,4670804));
}

/* {HTTP_REQUEST_METHODS}.method_trace */
RTOID (F102_1536)


EIF_TYPED_VALUE F102_1536 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F102_1536,1491,RTMS_EX_H("TRACE",5,1380653893));
}

/* {HTTP_REQUEST_METHODS}.method_options */
RTOID (F102_1537)


EIF_TYPED_VALUE F102_1537 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F102_1537,1492,RTMS_EX_H("OPTIONS",7,347751251));
}

/* {HTTP_REQUEST_METHODS}.method_post */
RTOID (F102_1538)


EIF_TYPED_VALUE F102_1538 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F102_1538,1493,RTMS_EX_H("POST",4,1347375956));
}

/* {HTTP_REQUEST_METHODS}.method_put */
RTOID (F102_1539)


EIF_TYPED_VALUE F102_1539 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F102_1539,1494,RTMS_EX_H("PUT",3,5264724));
}

/* {HTTP_REQUEST_METHODS}.method_delete */
RTOID (F102_1540)


EIF_TYPED_VALUE F102_1540 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F102_1540,1495,RTMS_EX_H("DELETE",6,1413835333));
}

/* {HTTP_REQUEST_METHODS}.method_connect */
RTOID (F102_1541)


EIF_TYPED_VALUE F102_1541 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F102_1541,1496,RTMS_EX_H("CONNECT",7,831608660));
}

/* {HTTP_REQUEST_METHODS}.method_patch */
RTOID (F102_1542)


EIF_TYPED_VALUE F102_1542 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F102_1542,1497,RTMS_EX_H("PATCH",5,1096655688));
}

void EIF_Minit102 (void)
{
	GTCX
	RTOTS (1534,F102_1534)
	RTOTS (1535,F102_1535)
	RTOTS (1536,F102_1536)
	RTOTS (1537,F102_1537)
	RTOTS (1538,F102_1538)
	RTOTS (1539,F102_1539)
	RTOTS (1540,F102_1540)
	RTOTS (1541,F102_1541)
	RTOTS (1542,F102_1542)
}


#ifdef __cplusplus
}
#endif
