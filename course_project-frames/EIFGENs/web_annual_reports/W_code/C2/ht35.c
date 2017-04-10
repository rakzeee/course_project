/*
 * Code for class HTTPD_CONFIGURATION_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F35_586(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_588(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_589(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_590(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_591(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_592(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_593(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_594(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_595(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_596(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_598(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_599(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_600(EIF_REFERENCE);
extern EIF_TYPED_VALUE F35_601(EIF_REFERENCE);
extern void F35_602(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_603(EIF_REFERENCE);
extern void F35_604(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_605(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_606(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_607(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_608(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_609(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_610(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_611(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_612(EIF_REFERENCE);
extern void F35_613(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_614(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F35_615(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit35(void);

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

/* {HTTPD_CONFIGURATION_I}.make */
void F35_586 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 0, 649);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 649);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 580, 0x10000000, 1); /* http_server_port */
	*(EIF_INTEGER_32 *)(Current + RTWA(580, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 582, 0x10000000, 1); /* max_concurrent_connections */
	*(EIF_INTEGER_32 *)(Current + RTWA(582, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 581, 0x10000000, 1); /* max_tcp_clients */
	*(EIF_INTEGER_32 *)(Current + RTWA(581, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 583, 0x10000000, 1); /* socket_accept_timeout */
	*(EIF_INTEGER_32 *)(Current + RTWA(583, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 584, 0x10000000, 1); /* socket_connect_timeout */
	*(EIF_INTEGER_32 *)(Current + RTWA(584, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5000L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 587, 0x10000000, 1); /* keep_alive_timeout */
	*(EIF_INTEGER_32 *)(Current + RTWA(587, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 589, 0x04000000, 1); /* is_secure */
	*(EIF_BOOLEAN *)(Current + RTWA(589, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 590, 0xF8000113, 0); /* ca_crt */
	tr1 = RTLNSMART(RTWCT(590, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4204, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(590, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 591, 0xF8000113, 0); /* ca_key */
	tr1 = RTLNSMART(RTWCT(591, dtype, Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4204, Dtype(tr1)))(tr1);
	RTNHOOK(9,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(591, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {HTTPD_CONFIGURATION_I}.http_server_name */
EIF_TYPED_VALUE F35_588 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(579,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.http_server_port */
EIF_TYPED_VALUE F35_589 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(580,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.max_tcp_clients */
EIF_TYPED_VALUE F35_590 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(581,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.max_concurrent_connections */
EIF_TYPED_VALUE F35_591 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(582,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.socket_accept_timeout */
EIF_TYPED_VALUE F35_592 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(583,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.socket_connect_timeout */
EIF_TYPED_VALUE F35_593 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(584,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.force_single_threaded */
EIF_TYPED_VALUE F35_594 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "force_single_threaded";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 0, 656);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(34, Current, 656);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(582, Dtype(Current)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {HTTPD_CONFIGURATION_I}.is_verbose */
EIF_TYPED_VALUE F35_595 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(586,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.keep_alive_timeout */
EIF_TYPED_VALUE F35_596 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(587,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.is_secure */
EIF_TYPED_VALUE F35_598 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(589,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.ca_crt */
EIF_TYPED_VALUE F35_599 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(590,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.ca_key */
EIF_TYPED_VALUE F35_600 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(591,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.ssl_protocol */
EIF_TYPED_VALUE F35_601 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(592,Dtype(Current)));
	return r;
}


/* {HTTPD_CONFIGURATION_I}.set_http_server_name */
void F35_602 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_http_server_name";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 663);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 663);
	if (arg1) {
		RTCC(arg1, 34, l_feature_name, 1, eif_new_type(271, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(594, dtype))(Current);
	} else {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 579, 0xF800010F, 0); /* http_server_name */
		tr1 = RTLN(eif_new_type(272, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4338, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(3,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(579, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {HTTPD_CONFIGURATION_I}.unset_http_server_name */
void F35_603 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unset_http_server_name";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 0, 664);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 664);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 579, 0xF800010F, 0); /* http_server_name */
	*(EIF_REFERENCE *)(Current + RTWA(579, dtype)) = (EIF_REFERENCE) NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("unset_http_server_name", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(579, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
}

/* {HTTPD_CONFIGURATION_I}.set_http_server_port */
void F35_604 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_http_server_port";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 665);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 665);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 580, 0x10000000, 1); /* http_server_port */
	*(EIF_INTEGER_32 *)(Current + RTWA(580, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("http_server_port_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(580, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
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

/* {HTTPD_CONFIGURATION_I}.set_max_tcp_clients */
void F35_605 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_max_tcp_clients";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 666);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 666);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 581, 0x10000000, 1); /* max_tcp_clients */
	*(EIF_INTEGER_32 *)(Current + RTWA(581, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("max_tcp_clients_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(581, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
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

/* {HTTPD_CONFIGURATION_I}.set_max_concurrent_connections */
void F35_606 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_max_concurrent_connections";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 667);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 667);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 582, 0x10000000, 1); /* max_concurrent_connections */
	*(EIF_INTEGER_32 *)(Current + RTWA(582, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("max_concurrent_connections_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(582, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
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

/* {HTTPD_CONFIGURATION_I}.set_socket_accept_timeout */
void F35_607 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_socket_accept_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 668);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 668);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 583, 0x10000000, 1); /* socket_accept_timeout */
	*(EIF_INTEGER_32 *)(Current + RTWA(583, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("socket_accept_timeout_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(583, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
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

/* {HTTPD_CONFIGURATION_I}.set_socket_connect_timeout */
void F35_608 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_socket_connect_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 669);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 669);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 584, 0x10000000, 1); /* socket_connect_timeout */
	*(EIF_INTEGER_32 *)(Current + RTWA(584, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("socket_connect_timeout_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(584, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
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

/* {HTTPD_CONFIGURATION_I}.set_force_single_threaded */
void F35_609 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_force_single_threaded";
	RTEX;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 670);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(34, Current, 670);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(597, Dtype(Current)))(Current, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {HTTPD_CONFIGURATION_I}.set_is_verbose */
void F35_610 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_verbose";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 671);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 671);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 586, 0x04000000, 1); /* is_verbose */
	*(EIF_BOOLEAN *)(Current + RTWA(586, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_verbose_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(586, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
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

/* {HTTPD_CONFIGURATION_I}.set_keep_alive_timeout */
void F35_611 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_keep_alive_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 672);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 672);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 587, 0x10000000, 1); /* keep_alive_timeout */
	*(EIF_INTEGER_32 *)(Current + RTWA(587, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("keep_alive_timeout_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(587, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
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

/* {HTTPD_CONFIGURATION_I}.mark_secure */
void F35_612 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "mark_secure";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 0, 673);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 673);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(588, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 589, 0x04000000, 1); /* is_secure */
		*(EIF_BOOLEAN *)(Current + RTWA(589, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(580, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 80L))) {
			RTHOOK(4);
			ui4_1 = ((EIF_INTEGER_32) 443L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(595, dtype))(Current, ui4_1x);
		}
	} else {
		RTHOOK(5);
		RTDBGAA(Current, dtype, 589, 0x04000000, 1); /* is_secure */
		*(EIF_BOOLEAN *)(Current + RTWA(589, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_secure_set", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(588, dtype))(Current)).it_b);
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(589, dtype));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("is_not_secure", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(588, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(589, dtype));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {HTTPD_CONFIGURATION_I}.set_ca_crt */
void F35_613 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_ca_crt";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 674);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 674);
	RTCC(arg1, 34, l_feature_name, 1, eif_new_type(275, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 590, 0xF8000113, 0); /* ca_crt */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(590, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("ca_crt_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(590, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {HTTPD_CONFIGURATION_I}.set_ca_key */
void F35_614 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_ca_key";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 675);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 675);
	RTCC(arg1, 34, l_feature_name, 1, eif_new_type(275, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 591, 0xF8000113, 0); /* ca_key */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(591, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("ca_key_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(591, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {HTTPD_CONFIGURATION_I}.set_ssl_protocol */
void F35_615 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_ssl_protocol";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 34, Current, 0, 1, 676);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(34, Current, 676);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 592, 0x38000000, 1); /* ssl_protocol */
	*(EIF_NATURAL_32 *)(Current + RTWA(592, dtype)) = (EIF_NATURAL_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("ssl_protocol_set", EX_POST);
		tu4_1 = *(EIF_NATURAL_32 *)(Current + RTWA(592, dtype));
		if ((EIF_BOOLEAN)(tu4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
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

void EIF_Minit35 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
