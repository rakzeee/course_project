/*
 * Code for class HTTPD_CONFIGURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F36_621(EIF_REFERENCE);
extern EIF_TYPED_VALUE F36_622(EIF_REFERENCE);
extern void F36_623(EIF_REFERENCE);
extern void F36_624(EIF_REFERENCE);
extern void F36_625(EIF_REFERENCE);
extern void F36_626(EIF_REFERENCE);
extern void F36_627(EIF_REFERENCE);
extern void EIF_Minit36(void);

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

/* {HTTPD_CONFIGURATION}.server_details */
RTOID (F36_621)


EIF_TYPED_VALUE F36_621 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F36_621,678,RTMS_EX_H("Server: Standalone Eiffel Server",32,1003060338));
}

/* {HTTPD_CONFIGURATION}.has_ssl_support */
EIF_TYPED_VALUE F36_622 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = (EIF_BOOLEAN) EIF_FALSE;
	return r;
}

/* {HTTPD_CONFIGURATION}.set_ssl_protocol_to_ssl_2_or_3 */
void F36_623 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_ssl_2_or_3";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 0, 679);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(35, Current, 679);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_ssl_protocol_to_tls_1_0 */
void F36_624 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_tls_1_0";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 0, 680);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(35, Current, 680);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_ssl_protocol_to_tls_1_1 */
void F36_625 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_tls_1_1";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 0, 681);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(35, Current, 681);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_ssl_protocol_to_tls_1_2 */
void F36_626 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_tls_1_2";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 0, 682);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(35, Current, 682);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION}.set_ssl_protocol_to_dtls_1_0 */
void F36_627 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol_to_dtls_1_0";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 35, Current, 0, 0, 683);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(35, Current, 683);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit36 (void)
{
	GTCX
	RTOTS (621,F36_621)
}


#ifdef __cplusplus
}
#endif
