/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "SPDU"
 * 	found in "SPDU.asn1"
 */

#ifndef	_HashAlgorithm_H_
#define	_HashAlgorithm_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HashAlgorithm {
	HashAlgorithm_sgdsm3	= 0,
	HashAlgorithm_sha256	= 1
} e_HashAlgorithm;

/* HashAlgorithm */
typedef long	 HashAlgorithm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HashAlgorithm;
asn_struct_free_f HashAlgorithm_free;
asn_struct_print_f HashAlgorithm_print;
asn_constr_check_f HashAlgorithm_constraint;
ber_type_decoder_f HashAlgorithm_decode_ber;
der_type_encoder_f HashAlgorithm_encode_der;
xer_type_decoder_f HashAlgorithm_decode_xer;
xer_type_encoder_f HashAlgorithm_encode_xer;
per_type_decoder_f HashAlgorithm_decode_uper;
per_type_encoder_f HashAlgorithm_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HashAlgorithm_H_ */
#include <asn_internal.h>
