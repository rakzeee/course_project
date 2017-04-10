/*
 * Code for class WSF_REQUEST_PATH_PARAMETERS_SOURCE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F10_129(EIF_REFERENCE);
extern void F10_130(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit10(void);

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

/* {WSF_REQUEST_PATH_PARAMETERS_SOURCE}.path_parameters */
EIF_TYPED_VALUE F10_129 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(131,Dtype(Current)));
	return r;
}


/* {WSF_REQUEST_PATH_PARAMETERS_SOURCE}.update_path_parameters */
void F10_130 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_path_parameters";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 9, Current, 0, 1, 135);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(9, Current, 135);
	RTCC(arg1, 9, l_feature_name, 1, RTWCT(131, Dtype(Current), Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 131, 0xF8000195, 0); /* path_parameters */
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(131, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit10 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
