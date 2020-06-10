/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "SPDU"
 * 	found in "SPDU.asn1"
 */

#ifndef	_OneEightyDegreeInt_H_
#define	_OneEightyDegreeInt_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OneEightyDegreeInt {
	OneEightyDegreeInt_min	= -1799999999,
	OneEightyDegreeInt_max	= 1800000000,
	OneEightyDegreeInt_unKnown	= 1800000001
} e_OneEightyDegreeInt;

/* OneEightyDegreeInt */
typedef long	 OneEightyDegreeInt_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OneEightyDegreeInt;
asn_struct_free_f OneEightyDegreeInt_free;
asn_struct_print_f OneEightyDegreeInt_print;
asn_constr_check_f OneEightyDegreeInt_constraint;
ber_type_decoder_f OneEightyDegreeInt_decode_ber;
der_type_encoder_f OneEightyDegreeInt_encode_der;
xer_type_decoder_f OneEightyDegreeInt_decode_xer;
xer_type_encoder_f OneEightyDegreeInt_encode_xer;
per_type_decoder_f OneEightyDegreeInt_decode_uper;
per_type_encoder_f OneEightyDegreeInt_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _OneEightyDegreeInt_H_ */
#include <asn_internal.h>
