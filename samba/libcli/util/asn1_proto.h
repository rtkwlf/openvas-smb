#ifndef __LIBCLI_UTIL_ASN1_PROTO_H__
#define __LIBCLI_UTIL_ASN1_PROTO_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from libcli/util/asn1.c  */

void asn1_free(struct asn1_data *data);
BOOL asn1_write(struct asn1_data *data, const void *p, int len);
BOOL asn1_write_uint8(struct asn1_data *data, uint8_t v);
BOOL asn1_push_tag(struct asn1_data *data, uint8_t tag);
BOOL asn1_pop_tag(struct asn1_data *data);
BOOL asn1_write_implicit_Integer(struct asn1_data *data, int i);
BOOL asn1_write_Integer(struct asn1_data *data, int i);
BOOL asn1_write_OID(struct asn1_data *data, const char *OID);
BOOL asn1_write_OctetString(struct asn1_data *data, const void *p, size_t length);
BOOL asn1_write_LDAPString(struct asn1_data *data, const char *s);
BOOL asn1_write_GeneralString(struct asn1_data *data, const char *s);
BOOL asn1_write_ContextSimple(struct asn1_data *data, uint8_t num, DATA_BLOB *blob);
BOOL asn1_write_BOOLEAN(struct asn1_data *data, BOOL v);
BOOL asn1_read_BOOLEAN(struct asn1_data *data, BOOL *v);
BOOL asn1_check_BOOLEAN(struct asn1_data *data, BOOL v);
BOOL asn1_load(struct asn1_data *data, DATA_BLOB blob);
BOOL asn1_peek(struct asn1_data *data, void *p, int len);
BOOL asn1_read(struct asn1_data *data, void *p, int len);
BOOL asn1_read_uint8(struct asn1_data *data, uint8_t *v);
BOOL asn1_peek_uint8(struct asn1_data *data, uint8_t *v);
BOOL asn1_peek_tag(struct asn1_data *data, uint8_t tag);
BOOL asn1_start_tag(struct asn1_data *data, uint8_t tag);
BOOL asn1_end_tag(struct asn1_data *data);
int asn1_tag_remaining(struct asn1_data *data);
BOOL asn1_read_OID(struct asn1_data *data, const char **OID);
BOOL asn1_check_OID(struct asn1_data *data, const char *OID);
BOOL asn1_read_LDAPString(struct asn1_data *data, char **s);
BOOL asn1_read_GeneralString(struct asn1_data *data, char **s);
BOOL asn1_read_OctetString(struct asn1_data *data, DATA_BLOB *blob);
BOOL asn1_read_ContextSimple(struct asn1_data *data, uint8_t num, DATA_BLOB *blob);
BOOL asn1_read_implicit_Integer(struct asn1_data *data, int *i);
BOOL asn1_read_Integer(struct asn1_data *data, int *i);
BOOL asn1_read_enumerated(struct asn1_data *data, int *v);
BOOL asn1_check_enumerated(struct asn1_data *data, int v);
BOOL asn1_write_enumerated(struct asn1_data *data, uint8_t v);
NTSTATUS asn1_full_tag(DATA_BLOB blob, uint8_t tag, size_t *packet_size);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIBCLI_UTIL_ASN1_PROTO_H__ */

