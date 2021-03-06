/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "SPDU"
 * 	found in "SPDU.asn1"
 */

#ifndef	_SubjectAttributes_H_
#define	_SubjectAttributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PublicVerifyKey.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SubjectAttributes */
typedef struct SubjectAttributes {
	PublicVerifyKey_t	 verificationKey;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubjectAttributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubjectAttributes;

#ifdef __cplusplus
}
#endif

#endif	/* _SubjectAttributes_H_ */
#include <asn_internal.h>
