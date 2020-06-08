/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SPDU"
 * 	found in "SPDU.asn1"
 * 	`asn1c -gen-PER`
 */

#ifndef	_Certificate_H_
#define	_Certificate_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Uint8.h"
#include "IssuerID.h"
#include "TBSCert.h"
#include "Signature.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Certificate */
typedef struct Certificate {
	Uint8_t	 version;
	IssuerID_t	 issuerID;
	TBSCert_t	 tbs;
	Signature_t	 signature;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Certificate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Certificate;

#ifdef __cplusplus
}
#endif

#endif	/* _Certificate_H_ */
#include <asn_internal.h>