/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "SPDU"
 * 	found in "SPDU.asn1"
 */

#ifndef	_CertificateDigest_H_
#define	_CertificateDigest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HashAlgorithm.h"
#include "HashedId8.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CertificateDigest */
typedef struct CertificateDigest {
	HashAlgorithm_t	 algroithm;
	HashedId8_t	 digest;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CertificateDigest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertificateDigest;

#ifdef __cplusplus
}
#endif

#endif	/* _CertificateDigest_H_ */
#include <asn_internal.h>
