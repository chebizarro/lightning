#include "config.h"
#include "../../wire/fromwire.c"
#include "../../wire/peer_wiregen.c"
#include "../../wire/tlvstream.c"
#include "../../wire/towire.c"
#include "../bigsize.c"
#include "../bolt12.c"
#include <common/setup.h>
#include <stdio.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_feerate */
 bool amount_feerate(u32 *feerate UNNEEDED, struct amount_sat fee UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_feerate called!\n"); abort(); }
/* Generated stub for amount_sat */
struct amount_sat amount_sat(u64 satoshis UNNEEDED)
{ fprintf(stderr, "amount_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for amount_sat_to_asset */
struct amount_asset amount_sat_to_asset(struct amount_sat *sat UNNEEDED, const u8 *asset UNNEEDED)
{ fprintf(stderr, "amount_sat_to_asset called!\n"); abort(); }
/* Generated stub for amount_tx_fee */
struct amount_sat amount_tx_fee(u32 fee_per_kw UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_tx_fee called!\n"); abort(); }
/* Generated stub for features_unsupported */
int features_unsupported(const struct feature_set *our_features UNNEEDED,
			 const u8 *their_features UNNEEDED,
			 enum feature_place p UNNEEDED)
{ fprintf(stderr, "features_unsupported called!\n"); abort(); }
/* Generated stub for from_bech32_charset */
bool from_bech32_charset(const tal_t *ctx UNNEEDED,
			 const char *bech32 UNNEEDED, size_t bech32_len UNNEEDED,
			 char **hrp UNNEEDED, u8 **data UNNEEDED)
{ fprintf(stderr, "from_bech32_charset called!\n"); abort(); }
/* Generated stub for fromwire_amount_msat */
struct amount_msat fromwire_amount_msat(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_amount_msat called!\n"); abort(); }
/* Generated stub for fromwire_amount_sat */
struct amount_sat fromwire_amount_sat(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_amount_sat called!\n"); abort(); }
/* Generated stub for fromwire_channel_id */
bool fromwire_channel_id(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
			 struct channel_id *channel_id UNNEEDED)
{ fprintf(stderr, "fromwire_channel_id called!\n"); abort(); }
/* Generated stub for fromwire_node_id */
void fromwire_node_id(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct node_id *id UNNEEDED)
{ fprintf(stderr, "fromwire_node_id called!\n"); abort(); }
/* Generated stub for fromwire_tlv_invoice */
struct tlv_invoice *fromwire_tlv_invoice(const tal_t *ctx UNNEEDED,
						  const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_tlv_invoice called!\n"); abort(); }
/* Generated stub for fromwire_tlv_invoice_request */
struct tlv_invoice_request *fromwire_tlv_invoice_request(const tal_t *ctx UNNEEDED,
						  const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_tlv_invoice_request called!\n"); abort(); }
/* Generated stub for fromwire_tlv_offer */
struct tlv_offer *fromwire_tlv_offer(const tal_t *ctx UNNEEDED,
						  const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_tlv_offer called!\n"); abort(); }
/* Generated stub for merkle_tlv */
void merkle_tlv(const struct tlv_field *fields UNNEEDED, struct sha256 *merkle UNNEEDED)
{ fprintf(stderr, "merkle_tlv called!\n"); abort(); }
/* Generated stub for sighash_from_merkle */
void sighash_from_merkle(const char *messagename UNNEEDED,
			 const char *fieldname UNNEEDED,
			 const struct sha256 *merkle UNNEEDED,
			 struct sha256 *sighash UNNEEDED)
{ fprintf(stderr, "sighash_from_merkle called!\n"); abort(); }
/* Generated stub for to_bech32_charset */
char *to_bech32_charset(const tal_t *ctx UNNEEDED,
			const char *hrp UNNEEDED, const u8 *data UNNEEDED)
{ fprintf(stderr, "to_bech32_charset called!\n"); abort(); }
/* Generated stub for towire_amount_msat */
void towire_amount_msat(u8 **pptr UNNEEDED, const struct amount_msat msat UNNEEDED)
{ fprintf(stderr, "towire_amount_msat called!\n"); abort(); }
/* Generated stub for towire_amount_sat */
void towire_amount_sat(u8 **pptr UNNEEDED, const struct amount_sat sat UNNEEDED)
{ fprintf(stderr, "towire_amount_sat called!\n"); abort(); }
/* Generated stub for towire_channel_id */
void towire_channel_id(u8 **pptr UNNEEDED, const struct channel_id *channel_id UNNEEDED)
{ fprintf(stderr, "towire_channel_id called!\n"); abort(); }
/* Generated stub for towire_node_id */
void towire_node_id(u8 **pptr UNNEEDED, const struct node_id *id UNNEEDED)
{ fprintf(stderr, "towire_node_id called!\n"); abort(); }
/* Generated stub for towire_tlv_invoice */
void towire_tlv_invoice(u8 **pptr UNNEEDED, const struct tlv_invoice *record UNNEEDED)
{ fprintf(stderr, "towire_tlv_invoice called!\n"); abort(); }
/* Generated stub for towire_tlv_invoice_request */
void towire_tlv_invoice_request(u8 **pptr UNNEEDED, const struct tlv_invoice_request *record UNNEEDED)
{ fprintf(stderr, "towire_tlv_invoice_request called!\n"); abort(); }
/* Generated stub for towire_tlv_offer */
void towire_tlv_offer(u8 **pptr UNNEEDED, const struct tlv_offer *record UNNEEDED)
{ fprintf(stderr, "towire_tlv_offer called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

/* BOLT #1:
 *
 * 1. `tlv_stream`: `n1`
 * 2. types:
 *    1. type: 1 (`tlv1`)
 *    2. data:
 *      * [`tu64`:`amount_msat`]
 *    1. type: 2 (`tlv2`)
 *    2. data:
 *      * [`short_channel_id`:`scid`]
 *    1. type: 3 (`tlv3`)
 *    2. data:
 *      * [`point`:`node_id`]
 *      * [`u64`:`amount_msat_1`]
 *      * [`u64`:`amount_msat_2`]
 *    1. type: 254 (`tlv4`)
 *    2. data:
 *      * [`u16`:`cltv_delta`]
 */
int main(int argc, char *argv[])
{
	u8 *wire_in, *wire_out;
	struct tlv_n1 *n1;
	const u8 *cursor;
	size_t len;

	common_setup(argv[0]);

	/* Only an unknown field. */
	wire_in = tal_hexdata(tmpctx, "050199", strlen("050199"));
	cursor = wire_in;
	len = tal_bytelen(wire_in);
	n1 = fromwire_tlv_n1(tmpctx, &cursor, &len);
	assert(len == 0);
	assert(!n1->tlv1);
	assert(!n1->tlv2);
	assert(!n1->tlv3);
	assert(!n1->tlv4);
	assert(tal_count(n1->fields) == 1);
	assert(n1->fields[0].meta == NULL);
	assert(n1->fields[0].numtype == 5);
	assert(n1->fields[0].length == 1);
	assert(n1->fields[0].value[0] == 0x99);

	wire_out = tal_arr(tmpctx, u8, 0);
	towire_tlv_n1(&wire_out, n1);
	assert(memeq(wire_in, tal_bytelen(wire_in),
		     wire_out, tal_bytelen(wire_out)));

	/* Known field and unknown field. */
	wire_in = tal_hexdata(tmpctx, "0100050199", strlen("0100050199"));
	cursor = wire_in;
	len = tal_bytelen(wire_in);
	n1 = fromwire_tlv_n1(tmpctx, &cursor, &len);
	assert(len == 0);
	assert(*n1->tlv1 == 0);
	assert(!n1->tlv2);
	assert(!n1->tlv3);
	assert(!n1->tlv4);
	assert(tal_count(n1->fields) == 2);
	assert(n1->fields[1].meta == NULL);
	assert(n1->fields[1].numtype == 5);
	assert(n1->fields[1].length == 1);
	assert(n1->fields[1].value[0] == 0x99);

	wire_out = tal_arr(tmpctx, u8, 0);
	towire_tlv_n1(&wire_out, n1);
	assert(memeq(wire_in, tal_bytelen(wire_in),
		     wire_out, tal_bytelen(wire_out)));

	/* Unknown field between known fields */
	wire_in = tal_hexdata(tmpctx, "0100050199FD00FE020000", strlen("0100050199FD00FE020000"));
	cursor = wire_in;
	len = tal_bytelen(wire_in);
	n1 = fromwire_tlv_n1(tmpctx, &cursor, &len);
	assert(len == 0);
	assert(*n1->tlv1 == 0);
	assert(!n1->tlv2);
	assert(!n1->tlv3);
	assert(*n1->tlv4 == 0);
	assert(tal_count(n1->fields) == 3);
	assert(n1->fields[1].meta == NULL);
	assert(n1->fields[1].numtype == 5);
	assert(n1->fields[1].length == 1);
	assert(n1->fields[1].value[0] == 0x99);

	wire_out = tal_arr(tmpctx, u8, 0);
	towire_tlv_n1(&wire_out, n1);
	assert(memeq(wire_in, tal_bytelen(wire_in),
		     wire_out, tal_bytelen(wire_out)));

	/* And finally, a field at the end */
	wire_in = tal_hexdata(tmpctx, "0100050199FD00FE020000FE3B9ACA0102AABB", strlen("0100050199FD00FE020000FE3B9ACA0102AABB"));
	cursor = wire_in;
	len = tal_bytelen(wire_in);
	n1 = fromwire_tlv_n1(tmpctx, &cursor, &len);
	assert(len == 0);
	assert(*n1->tlv1 == 0);
	assert(!n1->tlv2);
	assert(!n1->tlv3);
	assert(*n1->tlv4 == 0);
	assert(tal_count(n1->fields) == 4);
	assert(n1->fields[1].meta == NULL);
	assert(n1->fields[1].numtype == 5);
	assert(n1->fields[1].length == 1);
	assert(n1->fields[1].value[0] == 0x99);
	assert(n1->fields[3].meta == NULL);
	assert(n1->fields[3].numtype == 1000000001);
	assert(n1->fields[3].length == 2);
	assert(n1->fields[3].value[0] == 0xAA);
	assert(n1->fields[3].value[1] == 0xBB);

	wire_out = tal_arr(tmpctx, u8, 0);
	towire_tlv_n1(&wire_out, n1);
	assert(memeq(wire_in, tal_bytelen(wire_in),
		     wire_out, tal_bytelen(wire_out)));

	common_shutdown();
	return 0;
}