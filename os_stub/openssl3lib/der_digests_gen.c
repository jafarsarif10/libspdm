/*
 * WARNING: do not edit!
 * Generated by Makefile from providers/common/der/der_digests_gen.c.in
 *
 * Copyright 2020-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include "prov/der_digests.h"

#include "prov/der_ecx.h"
#include "prov/der_ec.h"
#include "prov/der_sm2.h"
/* Well known OIDs precompiled */

/*
 * sigAlgs OBJECT IDENTIFIER ::= { nistAlgorithms 3 }
 */
const unsigned char ossl_der_oid_sigAlgs[DER_OID_SZ_sigAlgs] = {
    DER_OID_V_sigAlgs
};

/*
 * id-sha1  OBJECT IDENTIFIER  ::=  { iso(1)
 *                      identified-organization(3) oiw(14)
 *                      secsig(3) algorithms(2) 26 }
 */
const unsigned char ossl_der_oid_id_sha1[DER_OID_SZ_id_sha1] = {
    DER_OID_V_id_sha1
};

/*
 * id-md2  OBJECT IDENTIFIER ::= {
 *   iso(1) member-body(2) us(840) rsadsi(113549) digestAlgorithm(2) 2 }
 */
const unsigned char ossl_der_oid_id_md2[DER_OID_SZ_id_md2] = {
    DER_OID_V_id_md2
};

/*
 * id-md5  OBJECT IDENTIFIER ::= {
 *   iso(1) member-body(2) us(840) rsadsi(113549) digestAlgorithm(2) 5 }
 */
const unsigned char ossl_der_oid_id_md5[DER_OID_SZ_id_md5] = {
    DER_OID_V_id_md5
};

/*
 * id-sha256 OBJECT IDENTIFIER ::= { hashAlgs 1 }
 */
const unsigned char ossl_der_oid_id_sha256[DER_OID_SZ_id_sha256] = {
    DER_OID_V_id_sha256
};

/*
 * id-sha384 OBJECT IDENTIFIER ::= { hashAlgs 2 }
 */
const unsigned char ossl_der_oid_id_sha384[DER_OID_SZ_id_sha384] = {
    DER_OID_V_id_sha384
};

/*
 * id-sha512 OBJECT IDENTIFIER ::= { hashAlgs 3 }
 */
const unsigned char ossl_der_oid_id_sha512[DER_OID_SZ_id_sha512] = {
    DER_OID_V_id_sha512
};

/*
 * id-sha224 OBJECT IDENTIFIER ::= { hashAlgs 4 }
 */
const unsigned char ossl_der_oid_id_sha224[DER_OID_SZ_id_sha224] = {
    DER_OID_V_id_sha224
};

/*
 * id-sha512-224 OBJECT IDENTIFIER ::= { hashAlgs 5 }
 */
const unsigned char ossl_der_oid_id_sha512_224[DER_OID_SZ_id_sha512_224] = {
    DER_OID_V_id_sha512_224
};

/*
 * id-sha512-256 OBJECT IDENTIFIER ::= { hashAlgs 6 }
 */
const unsigned char ossl_der_oid_id_sha512_256[DER_OID_SZ_id_sha512_256] = {
    DER_OID_V_id_sha512_256
};

/*
 * id-sha3-224 OBJECT IDENTIFIER ::= { hashAlgs 7 }
 */
const unsigned char ossl_der_oid_id_sha3_224[DER_OID_SZ_id_sha3_224] = {
    DER_OID_V_id_sha3_224
};

/*
 * id-sha3-256 OBJECT IDENTIFIER ::= { hashAlgs 8 }
 */
const unsigned char ossl_der_oid_id_sha3_256[DER_OID_SZ_id_sha3_256] = {
    DER_OID_V_id_sha3_256
};

/*
 * id-sha3-384 OBJECT IDENTIFIER ::= { hashAlgs 9 }
 */
const unsigned char ossl_der_oid_id_sha3_384[DER_OID_SZ_id_sha3_384] = {
    DER_OID_V_id_sha3_384
};

/*
 * id-sha3-512 OBJECT IDENTIFIER ::= { hashAlgs 10 }
 */
const unsigned char ossl_der_oid_id_sha3_512[DER_OID_SZ_id_sha3_512] = {
    DER_OID_V_id_sha3_512
};

/*
 * id-shake128 OBJECT IDENTIFIER ::= { hashAlgs 11 }
 */
const unsigned char ossl_der_oid_id_shake128[DER_OID_SZ_id_shake128] = {
    DER_OID_V_id_shake128
};

/*
 * id-shake256 OBJECT IDENTIFIER ::= { hashAlgs 12 }
 */
const unsigned char ossl_der_oid_id_shake256[DER_OID_SZ_id_shake256] = {
    DER_OID_V_id_shake256
};

/*
 * id-shake128-len OBJECT IDENTIFIER ::= { hashAlgs 17 }
 */
const unsigned char ossl_der_oid_id_shake128_len[DER_OID_SZ_id_shake128_len] = {
    DER_OID_V_id_shake128_len
};

/*
 * id-shake256-len OBJECT IDENTIFIER ::= { hashAlgs 18 }
 */
const unsigned char ossl_der_oid_id_shake256_len[DER_OID_SZ_id_shake256_len] = {
    DER_OID_V_id_shake256_len
};

/*
 * id-KMACWithSHAKE128 OBJECT IDENTIFIER ::={hashAlgs 19}
 */
const unsigned char ossl_der_oid_id_KMACWithSHAKE128[DER_OID_SZ_id_KMACWithSHAKE128] = {
    DER_OID_V_id_KMACWithSHAKE128
};

/*
 * id-KMACWithSHAKE256 OBJECT IDENTIFIER ::={ hashAlgs 20}
 */
const unsigned char ossl_der_oid_id_KMACWithSHAKE256[DER_OID_SZ_id_KMACWithSHAKE256] = {
    DER_OID_V_id_KMACWithSHAKE256
};






/////////////////////////my add

const unsigned char ossl_der_oid_id_X25519[DER_OID_SZ_id_X25519] = {
    DER_OID_V_id_X25519
};


const unsigned char ossl_der_oid_id_X448[DER_OID_SZ_id_X448] = {
    DER_OID_V_id_X448
};

const unsigned char ossl_der_oid_id_Ed25519[DER_OID_SZ_id_Ed25519] = {
    DER_OID_V_id_Ed25519
};


const unsigned char ossl_der_oid_id_Ed448[DER_OID_SZ_id_Ed448] = {
    DER_OID_V_id_Ed448
};



const unsigned char ossl_der_oid_ecdsa_with_SHA1[DER_OID_SZ_ecdsa_with_SHA1] = {
   DER_OID_V_ecdsa_with_SHA1 
};

const unsigned char ossl_der_oid_prime256v1[DER_OID_SZ_prime256v1];

/*
 * ecdsa-with-SHA224 OBJECT IDENTIFIER ::= { iso(1) member-body(2)
 *      us(840) ansi-X9-62(10045) signatures(4) ecdsa-with-SHA2(3) 1 }
 */
const unsigned char ossl_der_oid_ecdsa_with_SHA224[DER_OID_SZ_ecdsa_with_SHA224] = {
    DER_OID_V_ecdsa_with_SHA224
};

/*
 * ecdsa-with-SHA256 OBJECT IDENTIFIER ::= { iso(1) member-body(2)
 *      us(840) ansi-X9-62(10045) signatures(4) ecdsa-with-SHA2(3) 2 }
 */
const unsigned char ossl_der_oid_ecdsa_with_SHA256[DER_OID_SZ_ecdsa_with_SHA256] = {
    DER_OID_V_ecdsa_with_SHA256
};

/*
 * ecdsa-with-SHA384 OBJECT IDENTIFIER ::= { iso(1) member-body(2)
 *      us(840) ansi-X9-62(10045) signatures(4) ecdsa-with-SHA2(3) 3 }
 */
const unsigned char ossl_der_oid_ecdsa_with_SHA384[DER_OID_SZ_ecdsa_with_SHA384] = {
    DER_OID_V_ecdsa_with_SHA384
};

/*
 * ecdsa-with-SHA512 OBJECT IDENTIFIER ::= { iso(1) member-body(2)
 *      us(840) ansi-X9-62(10045) signatures(4) ecdsa-with-SHA2(3) 4 }
 */
const unsigned char ossl_der_oid_ecdsa_with_SHA512[DER_OID_SZ_ecdsa_with_SHA512] = {
    DER_OID_V_ecdsa_with_SHA512
};

/*
 * id-ecdsa-with-sha3-224 OBJECT IDENTIFIER ::= { sigAlgs 9 }
 */
const unsigned char ossl_der_oid_id_ecdsa_with_sha3_224[DER_OID_SZ_id_ecdsa_with_sha3_224] = {
    DER_OID_V_id_ecdsa_with_sha3_224
};

/*
 * id-ecdsa-with-sha3-256 OBJECT IDENTIFIER ::= { sigAlgs 10 }
 */
const unsigned char ossl_der_oid_id_ecdsa_with_sha3_256[DER_OID_SZ_id_ecdsa_with_sha3_256] = {
    DER_OID_V_id_ecdsa_with_sha3_256
};

/*
 * id-ecdsa-with-sha3-384 OBJECT IDENTIFIER ::= { sigAlgs 11 }
 */
const unsigned char ossl_der_oid_id_ecdsa_with_sha3_384[DER_OID_SZ_id_ecdsa_with_sha3_384] = {
    DER_OID_V_id_ecdsa_with_sha3_384
};

/*
 * id-ecdsa-with-sha3-512 OBJECT IDENTIFIER ::= { sigAlgs 12 }
 */
const unsigned char ossl_der_oid_id_ecdsa_with_sha3_512[DER_OID_SZ_id_ecdsa_with_sha3_512] = {
    DER_OID_V_id_ecdsa_with_sha3_512
};



/*
 * sm2-with-SM3 OBJECT IDENTIFIER ::= { sm-scheme 501 }
 */
const unsigned char ossl_der_oid_sm2_with_SM3[DER_OID_SZ_sm2_with_SM3] = {
    DER_OID_V_sm2_with_SM3
};
