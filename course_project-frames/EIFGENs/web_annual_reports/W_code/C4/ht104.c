/*
 * Code for class HTTP_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F104_1604(EIF_REFERENCE);
extern EIF_TYPED_VALUE F104_1605(EIF_REFERENCE);
extern EIF_TYPED_VALUE F104_1606(EIF_REFERENCE);
extern EIF_TYPED_VALUE F104_1607(EIF_REFERENCE);
extern EIF_TYPED_VALUE F104_1608(EIF_REFERENCE);
extern EIF_TYPED_VALUE F104_1609(EIF_REFERENCE);
extern void EIF_Minit104(void);

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

/* {HTTP_CONSTANTS}.default_http_port */
EIF_TYPED_VALUE F104_1604 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 80L);
	return r;
}

/* {HTTP_CONSTANTS}.default_https_port */
EIF_TYPED_VALUE F104_1605 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 443L);
	return r;
}

/* {HTTP_CONSTANTS}.http_version_1_0 */
RTOID (F104_1606)


EIF_TYPED_VALUE F104_1606 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F104_1606,1561,RTMS_EX_H("HTTP/1.0",8,303094320));
}

/* {HTTP_CONSTANTS}.http_version_1_1 */
RTOID (F104_1607)


EIF_TYPED_VALUE F104_1607 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F104_1607,1562,RTMS_EX_H("HTTP/1.1",8,303094321));
}

/* {HTTP_CONSTANTS}.crlf */
RTOID (F104_1608)


EIF_TYPED_VALUE F104_1608 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F104_1608,1563,RTMS_EX_H("\015\012",2,3338));
}

/* {HTTP_CONSTANTS}.default_bufsize */
EIF_TYPED_VALUE F104_1609 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16384L);
	return r;
}

void EIF_Minit104 (void)
{
	GTCX
	RTOTS (1606,F104_1606)
	RTOTS (1607,F104_1607)
	RTOTS (1608,F104_1608)
}


#ifdef __cplusplus
}
#endif
