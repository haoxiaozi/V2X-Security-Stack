/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "SPDU"
 * 	found in "SPDU.asn1"
 */

#include "Payload.h"

static asn_per_constraints_t asn_PER_type_Payload_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Payload_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Payload, choice.unSecuredData),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Opaque,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"unSecuredData"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Payload, choice.signedData),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignedData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"signedData"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Payload_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* unSecuredData */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* signedData */
};
static asn_CHOICE_specifics_t asn_SPC_Payload_specs_1 = {
	sizeof(struct Payload),
	offsetof(struct Payload, _asn_ctx),
	offsetof(struct Payload, present),
	sizeof(((struct Payload *)0)->present),
	asn_MAP_Payload_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Payload = {
	"Payload",
	"Payload",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_Payload_constr_1,
	asn_MBR_Payload_1,
	2,	/* Elements count */
	&asn_SPC_Payload_specs_1	/* Additional specs */
};

