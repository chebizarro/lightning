#ifndef LIGHTNING_WIRE_WIRE_H
#define LIGHTNING_WIRE_WIRE_H
#include "config.h"
#include <bitcoin/block.h>
#include <bitcoin/chainparams.h>
#include <bitcoin/privkey.h>
#include <bitcoin/pubkey.h>
#include <bitcoin/shadouble.h>
#include <bitcoin/signature.h>
#include <ccan/crypto/sha256/sha256.h>
#include <ccan/short_types/short_types.h>
#include <ccan/structeq/structeq.h>
#include <common/amount.h>
#include <common/bigsize.h>
#include <common/errcode.h>
#include <common/node_id.h>
#include <secp256k1_recovery.h>
#include <stdlib.h>

struct preimage;
struct ripemd160;
struct siphash_seed;

/* Makes generate-wire.py work */
typedef char wirestring;
typedef bigsize_t bigsize;

/* FIXME: Some versions of spec using 'varint' for bigsize' */
typedef bigsize varint;
#define fromwire_varint fromwire_bigsize
#define towire_varint towire_bigsize

/* Read the type; returns -1 if not long enough.  cursor is a tal ptr. */
int fromwire_peektype(const u8 *cursor);
const void *fromwire_fail(const u8 **cursor, size_t *max);

void towire(u8 **pptr, const void *data, size_t len);
void towire_pubkey(u8 **pptr, const struct pubkey *pubkey);
void towire_node_id(u8 **pptr, const struct node_id *id);
void towire_privkey(u8 **pptr, const struct privkey *privkey);
void towire_secret(u8 **pptr, const struct secret *secret);
void towire_secp256k1_ecdsa_signature(u8 **pptr,
			      const secp256k1_ecdsa_signature *signature);
void towire_secp256k1_ecdsa_recoverable_signature(u8 **pptr,
			      const secp256k1_ecdsa_recoverable_signature *rsig);
void towire_sha256(u8 **pptr, const struct sha256 *sha256);
void towire_sha256_double(u8 **pptr, const struct sha256_double *sha256d);
void towire_ripemd160(u8 **pptr, const struct ripemd160 *ripemd);
void towire_u8(u8 **pptr, u8 v);
void towire_u16(u8 **pptr, u16 v);
void towire_u32(u8 **pptr, u32 v);
void towire_u64(u8 **pptr, u64 v);
void towire_tu16(u8 **pptr, u16 v);
void towire_tu32(u8 **pptr, u32 v);
void towire_tu64(u8 **pptr, u64 v);
void towire_pad(u8 **pptr, size_t num);
void towire_bool(u8 **pptr, bool v);
void towire_errcode_t(u8 **pptr, errcode_t v);
void towire_bigsize(u8 **pptr, const bigsize_t val);

void towire_u8_array(u8 **pptr, const u8 *arr, size_t num);

void towire_wirestring(u8 **pptr, const char *str);
void towire_siphash_seed(u8 **cursor, const struct siphash_seed *seed);

void towire_bip32_key_version(u8 **cursor, const struct bip32_key_version *version);

const u8 *fromwire(const u8 **cursor, size_t *max, void *copy, size_t n);
u8 fromwire_u8(const u8 **cursor, size_t *max);
u16 fromwire_u16(const u8 **cursor, size_t *max);
u32 fromwire_u32(const u8 **cursor, size_t *max);
u64 fromwire_u64(const u8 **cursor, size_t *max);
u16 fromwire_tu16(const u8 **cursor, size_t *max);
u32 fromwire_tu32(const u8 **cursor, size_t *max);
u64 fromwire_tu64(const u8 **cursor, size_t *max);
bool fromwire_bool(const u8 **cursor, size_t *max);
errcode_t fromwire_errcode_t(const u8 **cursor, size_t *max);
bigsize_t fromwire_bigsize(const u8 **cursor, size_t *max);
void fromwire_secret(const u8 **cursor, size_t *max, struct secret *secret);
void fromwire_privkey(const u8 **cursor, size_t *max, struct privkey *privkey);
void fromwire_pubkey(const u8 **cursor, size_t *max, struct pubkey *pubkey);
void fromwire_node_id(const u8 **cursor, size_t *max, struct node_id *id);
void fromwire_secp256k1_ecdsa_signature(const u8 **cursor, size_t *max,
					secp256k1_ecdsa_signature *signature);
void fromwire_secp256k1_ecdsa_recoverable_signature(const u8 **cursor,
				    size_t *max,
				    secp256k1_ecdsa_recoverable_signature *rsig);
void fromwire_sha256(const u8 **cursor, size_t *max, struct sha256 *sha256);
void fromwire_sha256_double(const u8 **cursor, size_t *max,
			    struct sha256_double *sha256d);
void fromwire_ripemd160(const u8 **cursor, size_t *max, struct ripemd160 *ripemd);
void fromwire_pad(const u8 **cursor, size_t *max, size_t num);

void fromwire_u8_array(const u8 **cursor, size_t *max, u8 *arr, size_t num);
u8 *fromwire_tal_arrn(const tal_t *ctx,
		       const u8 **cursor, size_t *max, size_t num);
char *fromwire_wirestring(const tal_t *ctx, const u8 **cursor, size_t *max);
void fromwire_siphash_seed(const u8 **cursor, size_t *max,
			   struct siphash_seed *seed);
void fromwire_bip32_key_version(const u8 **cursor, size_t *max,
				struct bip32_key_version *version);

#if !EXPERIMENTAL_FEATURES
/* Stubs, as this subtype is only defined when EXPERIMENTAL_FEATURES */
struct onionmsg_path;

static inline void towire_onionmsg_path(u8 **p, const struct onionmsg_path *onionmsg_path)
{
}

static inline struct onionmsg_path *
fromwire_onionmsg_path(const tal_t *ctx, const u8 **cursor, size_t *plen)
{
	return NULL;
}
#endif /* EXPERIMENTAL_FEATURES */
#endif /* LIGHTNING_WIRE_WIRE_H */
