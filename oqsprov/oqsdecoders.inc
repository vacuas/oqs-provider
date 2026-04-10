// SPDX-License-Identifier: Apache-2.0 AND MIT

/*
 * OQS OpenSSL 3 provider decoders
 *
 * Code strongly inspired by OpenSSL default provider.
 *
 */

#ifndef DECODER_PROVIDER
#error Macro DECODER_PROVIDER undefined
#endif

#define DECODER_STRUCTURE_type_specific_keypair "type-specific"
#define DECODER_STRUCTURE_type_specific_params "type-specific"
#define DECODER_STRUCTURE_type_specific "type-specific"
#define DECODER_STRUCTURE_type_specific_no_pub "type-specific"
#define DECODER_STRUCTURE_PKCS8 "pkcs8"
#define DECODER_STRUCTURE_SubjectPublicKeyInfo "SubjectPublicKeyInfo"
#define DECODER_STRUCTURE_PrivateKeyInfo "PrivateKeyInfo"

/* Arguments are prefixed with '_' to avoid build breaks on certain platforms */
#define DECODER(_name, _input, _output)                                        \
    {_name, "provider=" DECODER_PROVIDER ",input=" #_input,                    \
     (oqs_##_input##_to_##_output##_decoder_functions)}
#define DECODER_w_structure(_name, _input, _structure, _output)                \
    {_name,                                                                    \
     "provider=" DECODER_PROVIDER ",input=" #_input                            \
     ",structure=" DECODER_STRUCTURE_##_structure,                             \
     (oqs_##_structure##_##_input##_to_##_output##_decoder_functions)}

///// OQS_TEMPLATE_FRAGMENT_MAKE_START
#ifdef OQS_KEM_ENCODERS

#ifdef OQS_ENABLE_KEM_efrodokem_640_aes
DECODER_w_structure("efrodo640aes", der, PrivateKeyInfo, efrodo640aes),
    DECODER_w_structure("efrodo640aes", der, SubjectPublicKeyInfo,
                        efrodo640aes),
    DECODER_w_structure("p256_efrodo640aes", der, PrivateKeyInfo,
                        p256_efrodo640aes),
    DECODER_w_structure("p256_efrodo640aes", der, SubjectPublicKeyInfo,
                        p256_efrodo640aes),
    DECODER_w_structure("x25519_efrodo640aes", der, PrivateKeyInfo,
                        x25519_efrodo640aes),
    DECODER_w_structure("x25519_efrodo640aes", der, SubjectPublicKeyInfo,
                        x25519_efrodo640aes),
#endif
#ifdef OQS_ENABLE_KEM_efrodokem_640_shake
    DECODER_w_structure("efrodo640shake", der, PrivateKeyInfo, efrodo640shake),
    DECODER_w_structure("efrodo640shake", der, SubjectPublicKeyInfo,
                        efrodo640shake),
    DECODER_w_structure("p256_efrodo640shake", der, PrivateKeyInfo,
                        p256_efrodo640shake),
    DECODER_w_structure("p256_efrodo640shake", der, SubjectPublicKeyInfo,
                        p256_efrodo640shake),
    DECODER_w_structure("x25519_efrodo640shake", der, PrivateKeyInfo,
                        x25519_efrodo640shake),
    DECODER_w_structure("x25519_efrodo640shake", der, SubjectPublicKeyInfo,
                        x25519_efrodo640shake),
#endif
#ifdef OQS_ENABLE_KEM_efrodokem_976_aes
    DECODER_w_structure("efrodo976aes", der, PrivateKeyInfo, efrodo976aes),
    DECODER_w_structure("efrodo976aes", der, SubjectPublicKeyInfo,
                        efrodo976aes),
    DECODER_w_structure("p384_efrodo976aes", der, PrivateKeyInfo,
                        p384_efrodo976aes),
    DECODER_w_structure("p384_efrodo976aes", der, SubjectPublicKeyInfo,
                        p384_efrodo976aes),
    DECODER_w_structure("x448_efrodo976aes", der, PrivateKeyInfo,
                        x448_efrodo976aes),
    DECODER_w_structure("x448_efrodo976aes", der, SubjectPublicKeyInfo,
                        x448_efrodo976aes),
#endif
#ifdef OQS_ENABLE_KEM_efrodokem_976_shake
    DECODER_w_structure("efrodo976shake", der, PrivateKeyInfo, efrodo976shake),
    DECODER_w_structure("efrodo976shake", der, SubjectPublicKeyInfo,
                        efrodo976shake),
    DECODER_w_structure("p384_efrodo976shake", der, PrivateKeyInfo,
                        p384_efrodo976shake),
    DECODER_w_structure("p384_efrodo976shake", der, SubjectPublicKeyInfo,
                        p384_efrodo976shake),
    DECODER_w_structure("x448_efrodo976shake", der, PrivateKeyInfo,
                        x448_efrodo976shake),
    DECODER_w_structure("x448_efrodo976shake", der, SubjectPublicKeyInfo,
                        x448_efrodo976shake),
#endif
#ifdef OQS_ENABLE_KEM_efrodokem_1344_aes
    DECODER_w_structure("efrodo1344aes", der, PrivateKeyInfo, efrodo1344aes),
    DECODER_w_structure("efrodo1344aes", der, SubjectPublicKeyInfo,
                        efrodo1344aes),
    DECODER_w_structure("p521_efrodo1344aes", der, PrivateKeyInfo,
                        p521_efrodo1344aes),
    DECODER_w_structure("p521_efrodo1344aes", der, SubjectPublicKeyInfo,
                        p521_efrodo1344aes),
#endif
#ifdef OQS_ENABLE_KEM_efrodokem_1344_shake
    DECODER_w_structure("efrodo1344shake", der, PrivateKeyInfo,
                        efrodo1344shake),
    DECODER_w_structure("efrodo1344shake", der, SubjectPublicKeyInfo,
                        efrodo1344shake),
    DECODER_w_structure("p521_efrodo1344shake", der, PrivateKeyInfo,
                        p521_efrodo1344shake),
    DECODER_w_structure("p521_efrodo1344shake", der, SubjectPublicKeyInfo,
                        p521_efrodo1344shake),
#endif
#ifdef OQS_ENABLE_KEM_frodokem_640_aes
    DECODER_w_structure("frodo640aes", der, PrivateKeyInfo, frodo640aes),
    DECODER_w_structure("frodo640aes", der, SubjectPublicKeyInfo, frodo640aes),
    DECODER_w_structure("p256_frodo640aes", der, PrivateKeyInfo,
                        p256_frodo640aes),
    DECODER_w_structure("p256_frodo640aes", der, SubjectPublicKeyInfo,
                        p256_frodo640aes),
    DECODER_w_structure("x25519_frodo640aes", der, PrivateKeyInfo,
                        x25519_frodo640aes),
    DECODER_w_structure("x25519_frodo640aes", der, SubjectPublicKeyInfo,
                        x25519_frodo640aes),
#endif
#ifdef OQS_ENABLE_KEM_frodokem_640_shake
    DECODER_w_structure("frodo640shake", der, PrivateKeyInfo, frodo640shake),
    DECODER_w_structure("frodo640shake", der, SubjectPublicKeyInfo,
                        frodo640shake),
    DECODER_w_structure("p256_frodo640shake", der, PrivateKeyInfo,
                        p256_frodo640shake),
    DECODER_w_structure("p256_frodo640shake", der, SubjectPublicKeyInfo,
                        p256_frodo640shake),
    DECODER_w_structure("x25519_frodo640shake", der, PrivateKeyInfo,
                        x25519_frodo640shake),
    DECODER_w_structure("x25519_frodo640shake", der, SubjectPublicKeyInfo,
                        x25519_frodo640shake),
#endif
#ifdef OQS_ENABLE_KEM_frodokem_976_aes
    DECODER_w_structure("frodo976aes", der, PrivateKeyInfo, frodo976aes),
    DECODER_w_structure("frodo976aes", der, SubjectPublicKeyInfo, frodo976aes),
    DECODER_w_structure("p384_frodo976aes", der, PrivateKeyInfo,
                        p384_frodo976aes),
    DECODER_w_structure("p384_frodo976aes", der, SubjectPublicKeyInfo,
                        p384_frodo976aes),
    DECODER_w_structure("x448_frodo976aes", der, PrivateKeyInfo,
                        x448_frodo976aes),
    DECODER_w_structure("x448_frodo976aes", der, SubjectPublicKeyInfo,
                        x448_frodo976aes),
#endif
#ifdef OQS_ENABLE_KEM_frodokem_976_shake
    DECODER_w_structure("frodo976shake", der, PrivateKeyInfo, frodo976shake),
    DECODER_w_structure("frodo976shake", der, SubjectPublicKeyInfo,
                        frodo976shake),
    DECODER_w_structure("p384_frodo976shake", der, PrivateKeyInfo,
                        p384_frodo976shake),
    DECODER_w_structure("p384_frodo976shake", der, SubjectPublicKeyInfo,
                        p384_frodo976shake),
    DECODER_w_structure("x448_frodo976shake", der, PrivateKeyInfo,
                        x448_frodo976shake),
    DECODER_w_structure("x448_frodo976shake", der, SubjectPublicKeyInfo,
                        x448_frodo976shake),
#endif
#ifdef OQS_ENABLE_KEM_frodokem_1344_aes
    DECODER_w_structure("frodo1344aes", der, PrivateKeyInfo, frodo1344aes),
    DECODER_w_structure("frodo1344aes", der, SubjectPublicKeyInfo,
                        frodo1344aes),
    DECODER_w_structure("p521_frodo1344aes", der, PrivateKeyInfo,
                        p521_frodo1344aes),
    DECODER_w_structure("p521_frodo1344aes", der, SubjectPublicKeyInfo,
                        p521_frodo1344aes),
#endif
#ifdef OQS_ENABLE_KEM_frodokem_1344_shake
    DECODER_w_structure("frodo1344shake", der, PrivateKeyInfo, frodo1344shake),
    DECODER_w_structure("frodo1344shake", der, SubjectPublicKeyInfo,
                        frodo1344shake),
    DECODER_w_structure("p521_frodo1344shake", der, PrivateKeyInfo,
                        p521_frodo1344shake),
    DECODER_w_structure("p521_frodo1344shake", der, SubjectPublicKeyInfo,
                        p521_frodo1344shake),
#endif
#ifdef OQS_ENABLE_KEM_ml_kem_512
    DECODER_w_structure("mlkem512", der, PrivateKeyInfo, mlkem512),
    DECODER_w_structure("mlkem512", der, SubjectPublicKeyInfo, mlkem512),
    DECODER_w_structure("p256_mlkem512", der, PrivateKeyInfo, p256_mlkem512),
    DECODER_w_structure("p256_mlkem512", der, SubjectPublicKeyInfo,
                        p256_mlkem512),
    DECODER_w_structure("x25519_mlkem512", der, PrivateKeyInfo,
                        x25519_mlkem512),
    DECODER_w_structure("x25519_mlkem512", der, SubjectPublicKeyInfo,
                        x25519_mlkem512),
    DECODER_w_structure("bp256_mlkem512", der, PrivateKeyInfo, bp256_mlkem512),
    DECODER_w_structure("bp256_mlkem512", der, SubjectPublicKeyInfo,
                        bp256_mlkem512),
#endif
#ifdef OQS_ENABLE_KEM_ml_kem_768
    DECODER_w_structure("mlkem768", der, PrivateKeyInfo, mlkem768),
    DECODER_w_structure("mlkem768", der, SubjectPublicKeyInfo, mlkem768),
    DECODER_w_structure("p384_mlkem768", der, PrivateKeyInfo, p384_mlkem768),
    DECODER_w_structure("p384_mlkem768", der, SubjectPublicKeyInfo,
                        p384_mlkem768),
    DECODER_w_structure("x448_mlkem768", der, PrivateKeyInfo, x448_mlkem768),
    DECODER_w_structure("x448_mlkem768", der, SubjectPublicKeyInfo,
                        x448_mlkem768),
    DECODER_w_structure("bp384_mlkem768", der, PrivateKeyInfo, bp384_mlkem768),
    DECODER_w_structure("bp384_mlkem768", der, SubjectPublicKeyInfo,
                        bp384_mlkem768),
    DECODER_w_structure("X25519MLKEM768", der, PrivateKeyInfo, X25519MLKEM768),
    DECODER_w_structure("X25519MLKEM768", der, SubjectPublicKeyInfo,
                        X25519MLKEM768),
    DECODER_w_structure("SecP256r1MLKEM768", der, PrivateKeyInfo,
                        SecP256r1MLKEM768),
    DECODER_w_structure("SecP256r1MLKEM768", der, SubjectPublicKeyInfo,
                        SecP256r1MLKEM768),
#endif
#ifdef OQS_ENABLE_KEM_ml_kem_1024
    DECODER_w_structure("mlkem1024", der, PrivateKeyInfo, mlkem1024),
    DECODER_w_structure("mlkem1024", der, SubjectPublicKeyInfo, mlkem1024),
    DECODER_w_structure("p521_mlkem1024", der, PrivateKeyInfo, p521_mlkem1024),
    DECODER_w_structure("p521_mlkem1024", der, SubjectPublicKeyInfo,
                        p521_mlkem1024),
    DECODER_w_structure("SecP384r1MLKEM1024", der, PrivateKeyInfo,
                        SecP384r1MLKEM1024),
    DECODER_w_structure("SecP384r1MLKEM1024", der, SubjectPublicKeyInfo,
                        SecP384r1MLKEM1024),
    DECODER_w_structure("bp512_mlkem1024", der, PrivateKeyInfo,
                        bp512_mlkem1024),
    DECODER_w_structure("bp512_mlkem1024", der, SubjectPublicKeyInfo,
                        bp512_mlkem1024),
#endif
#ifdef OQS_ENABLE_KEM_bike_l1
    DECODER_w_structure("bikel1", der, PrivateKeyInfo, bikel1),
    DECODER_w_structure("bikel1", der, SubjectPublicKeyInfo, bikel1),
    DECODER_w_structure("p256_bikel1", der, PrivateKeyInfo, p256_bikel1),
    DECODER_w_structure("p256_bikel1", der, SubjectPublicKeyInfo, p256_bikel1),
    DECODER_w_structure("x25519_bikel1", der, PrivateKeyInfo, x25519_bikel1),
    DECODER_w_structure("x25519_bikel1", der, SubjectPublicKeyInfo,
                        x25519_bikel1),
#endif
#ifdef OQS_ENABLE_KEM_bike_l3
    DECODER_w_structure("bikel3", der, PrivateKeyInfo, bikel3),
    DECODER_w_structure("bikel3", der, SubjectPublicKeyInfo, bikel3),
    DECODER_w_structure("p384_bikel3", der, PrivateKeyInfo, p384_bikel3),
    DECODER_w_structure("p384_bikel3", der, SubjectPublicKeyInfo, p384_bikel3),
    DECODER_w_structure("x448_bikel3", der, PrivateKeyInfo, x448_bikel3),
    DECODER_w_structure("x448_bikel3", der, SubjectPublicKeyInfo, x448_bikel3),
#endif
#ifdef OQS_ENABLE_KEM_bike_l5
    DECODER_w_structure("bikel5", der, PrivateKeyInfo, bikel5),
    DECODER_w_structure("bikel5", der, SubjectPublicKeyInfo, bikel5),
    DECODER_w_structure("p521_bikel5", der, PrivateKeyInfo, p521_bikel5),
    DECODER_w_structure("p521_bikel5", der, SubjectPublicKeyInfo, p521_bikel5),
#endif

#endif /* OQS_KEM_ENCODERS */

#ifdef OQS_ENABLE_SIG_ml_dsa_44
    DECODER_w_structure("mldsa44", der, PrivateKeyInfo, mldsa44),
    DECODER_w_structure("mldsa44", der, SubjectPublicKeyInfo, mldsa44),
    DECODER_w_structure("p256_mldsa44", der, PrivateKeyInfo, p256_mldsa44),
    DECODER_w_structure("p256_mldsa44", der, SubjectPublicKeyInfo,
                        p256_mldsa44),
    DECODER_w_structure("rsa3072_mldsa44", der, PrivateKeyInfo,
                        rsa3072_mldsa44),
    DECODER_w_structure("rsa3072_mldsa44", der, SubjectPublicKeyInfo,
                        rsa3072_mldsa44),
#endif
#ifdef OQS_ENABLE_SIG_ml_dsa_65
    DECODER_w_structure("mldsa65", der, PrivateKeyInfo, mldsa65),
    DECODER_w_structure("mldsa65", der, SubjectPublicKeyInfo, mldsa65),
    DECODER_w_structure("p384_mldsa65", der, PrivateKeyInfo, p384_mldsa65),
    DECODER_w_structure("p384_mldsa65", der, SubjectPublicKeyInfo,
                        p384_mldsa65),
#endif
#ifdef OQS_ENABLE_SIG_ml_dsa_87
    DECODER_w_structure("mldsa87", der, PrivateKeyInfo, mldsa87),
    DECODER_w_structure("mldsa87", der, SubjectPublicKeyInfo, mldsa87),
    DECODER_w_structure("p521_mldsa87", der, PrivateKeyInfo, p521_mldsa87),
    DECODER_w_structure("p521_mldsa87", der, SubjectPublicKeyInfo,
                        p521_mldsa87),
#endif
#ifdef OQS_ENABLE_SIG_falcon_512
    DECODER_w_structure("falcon512", der, PrivateKeyInfo, falcon512),
    DECODER_w_structure("falcon512", der, SubjectPublicKeyInfo, falcon512),
    DECODER_w_structure("p256_falcon512", der, PrivateKeyInfo, p256_falcon512),
    DECODER_w_structure("p256_falcon512", der, SubjectPublicKeyInfo,
                        p256_falcon512),
    DECODER_w_structure("rsa3072_falcon512", der, PrivateKeyInfo,
                        rsa3072_falcon512),
    DECODER_w_structure("rsa3072_falcon512", der, SubjectPublicKeyInfo,
                        rsa3072_falcon512),
#endif
#ifdef OQS_ENABLE_SIG_falcon_padded_512
    DECODER_w_structure("falconpadded512", der, PrivateKeyInfo,
                        falconpadded512),
    DECODER_w_structure("falconpadded512", der, SubjectPublicKeyInfo,
                        falconpadded512),
    DECODER_w_structure("p256_falconpadded512", der, PrivateKeyInfo,
                        p256_falconpadded512),
    DECODER_w_structure("p256_falconpadded512", der, SubjectPublicKeyInfo,
                        p256_falconpadded512),
    DECODER_w_structure("rsa3072_falconpadded512", der, PrivateKeyInfo,
                        rsa3072_falconpadded512),
    DECODER_w_structure("rsa3072_falconpadded512", der, SubjectPublicKeyInfo,
                        rsa3072_falconpadded512),
#endif
#ifdef OQS_ENABLE_SIG_falcon_1024
    DECODER_w_structure("falcon1024", der, PrivateKeyInfo, falcon1024),
    DECODER_w_structure("falcon1024", der, SubjectPublicKeyInfo, falcon1024),
    DECODER_w_structure("p521_falcon1024", der, PrivateKeyInfo,
                        p521_falcon1024),
    DECODER_w_structure("p521_falcon1024", der, SubjectPublicKeyInfo,
                        p521_falcon1024),
#endif
#ifdef OQS_ENABLE_SIG_falcon_padded_1024
    DECODER_w_structure("falconpadded1024", der, PrivateKeyInfo,
                        falconpadded1024),
    DECODER_w_structure("falconpadded1024", der, SubjectPublicKeyInfo,
                        falconpadded1024),
    DECODER_w_structure("p521_falconpadded1024", der, PrivateKeyInfo,
                        p521_falconpadded1024),
    DECODER_w_structure("p521_falconpadded1024", der, SubjectPublicKeyInfo,
                        p521_falconpadded1024),
#endif
#ifdef OQS_ENABLE_SIG_mayo_1
    DECODER_w_structure("mayo1", der, PrivateKeyInfo, mayo1),
    DECODER_w_structure("mayo1", der, SubjectPublicKeyInfo, mayo1),
    DECODER_w_structure("p256_mayo1", der, PrivateKeyInfo, p256_mayo1),
    DECODER_w_structure("p256_mayo1", der, SubjectPublicKeyInfo, p256_mayo1),
#endif
#ifdef OQS_ENABLE_SIG_mayo_2
    DECODER_w_structure("mayo2", der, PrivateKeyInfo, mayo2),
    DECODER_w_structure("mayo2", der, SubjectPublicKeyInfo, mayo2),
    DECODER_w_structure("p256_mayo2", der, PrivateKeyInfo, p256_mayo2),
    DECODER_w_structure("p256_mayo2", der, SubjectPublicKeyInfo, p256_mayo2),
#endif
#ifdef OQS_ENABLE_SIG_mayo_3
    DECODER_w_structure("mayo3", der, PrivateKeyInfo, mayo3),
    DECODER_w_structure("mayo3", der, SubjectPublicKeyInfo, mayo3),
    DECODER_w_structure("p384_mayo3", der, PrivateKeyInfo, p384_mayo3),
    DECODER_w_structure("p384_mayo3", der, SubjectPublicKeyInfo, p384_mayo3),
#endif
#ifdef OQS_ENABLE_SIG_mayo_5
    DECODER_w_structure("mayo5", der, PrivateKeyInfo, mayo5),
    DECODER_w_structure("mayo5", der, SubjectPublicKeyInfo, mayo5),
    DECODER_w_structure("p521_mayo5", der, PrivateKeyInfo, p521_mayo5),
    DECODER_w_structure("p521_mayo5", der, SubjectPublicKeyInfo, p521_mayo5),
#endif
#ifdef OQS_ENABLE_SIG_cross_rsdp_128_balanced
    DECODER_w_structure("CROSSrsdp128balanced", der, PrivateKeyInfo,
                        CROSSrsdp128balanced),
    DECODER_w_structure("CROSSrsdp128balanced", der, SubjectPublicKeyInfo,
                        CROSSrsdp128balanced),
#endif
#ifdef OQS_ENABLE_SIG_uov_ov_Is_pkc
    DECODER_w_structure("OV_Is_pkc", der, PrivateKeyInfo, OV_Is_pkc),
    DECODER_w_structure("OV_Is_pkc", der, SubjectPublicKeyInfo, OV_Is_pkc),
    DECODER_w_structure("p256_OV_Is_pkc", der, PrivateKeyInfo, p256_OV_Is_pkc),
    DECODER_w_structure("p256_OV_Is_pkc", der, SubjectPublicKeyInfo,
                        p256_OV_Is_pkc),
#endif
#ifdef OQS_ENABLE_SIG_uov_ov_Ip_pkc
    DECODER_w_structure("OV_Ip_pkc", der, PrivateKeyInfo, OV_Ip_pkc),
    DECODER_w_structure("OV_Ip_pkc", der, SubjectPublicKeyInfo, OV_Ip_pkc),
    DECODER_w_structure("p256_OV_Ip_pkc", der, PrivateKeyInfo, p256_OV_Ip_pkc),
    DECODER_w_structure("p256_OV_Ip_pkc", der, SubjectPublicKeyInfo,
                        p256_OV_Ip_pkc),
#endif
#ifdef OQS_ENABLE_SIG_uov_ov_Is_pkc_skc
    DECODER_w_structure("OV_Is_pkc_skc", der, PrivateKeyInfo, OV_Is_pkc_skc),
    DECODER_w_structure("OV_Is_pkc_skc", der, SubjectPublicKeyInfo,
                        OV_Is_pkc_skc),
    DECODER_w_structure("p256_OV_Is_pkc_skc", der, PrivateKeyInfo,
                        p256_OV_Is_pkc_skc),
    DECODER_w_structure("p256_OV_Is_pkc_skc", der, SubjectPublicKeyInfo,
                        p256_OV_Is_pkc_skc),
#endif
#ifdef OQS_ENABLE_SIG_uov_ov_Ip_pkc_skc
    DECODER_w_structure("OV_Ip_pkc_skc", der, PrivateKeyInfo, OV_Ip_pkc_skc),
    DECODER_w_structure("OV_Ip_pkc_skc", der, SubjectPublicKeyInfo,
                        OV_Ip_pkc_skc),
    DECODER_w_structure("p256_OV_Ip_pkc_skc", der, PrivateKeyInfo,
                        p256_OV_Ip_pkc_skc),
    DECODER_w_structure("p256_OV_Ip_pkc_skc", der, SubjectPublicKeyInfo,
                        p256_OV_Ip_pkc_skc),
#endif
#ifdef OQS_ENABLE_SIG_snova_SNOVA_24_5_16_4
    DECODER_w_structure("snova5o", der, PrivateKeyInfo, snova5o),
    DECODER_w_structure("snova5o", der, SubjectPublicKeyInfo, snova5o),
    DECODER_w_structure("p256_snova5o", der, PrivateKeyInfo, p256_snova5o),
    DECODER_w_structure("p256_snova5o", der, SubjectPublicKeyInfo,
                        p256_snova5o),
#endif
#ifdef OQS_ENABLE_SIG_snova_SNOVA_24_5_16_4_AES
    DECODER_w_structure("snova5oa", der, PrivateKeyInfo, snova5oa),
    DECODER_w_structure("snova5oa", der, SubjectPublicKeyInfo, snova5oa),
    DECODER_w_structure("p256_snova5oa", der, PrivateKeyInfo, p256_snova5oa),
    DECODER_w_structure("p256_snova5oa", der, SubjectPublicKeyInfo,
                        p256_snova5oa),
#endif
#ifdef OQS_ENABLE_SIG_snova_SNOVA_28_5_19_4
    DECODER_w_structure("snova5", der, PrivateKeyInfo, snova5),
    DECODER_w_structure("snova5", der, SubjectPublicKeyInfo, snova5),
    DECODER_w_structure("p256_snova5", der, PrivateKeyInfo, p256_snova5),
    DECODER_w_structure("p256_snova5", der, SubjectPublicKeyInfo, p256_snova5),
#endif
#ifdef OQS_ENABLE_SIG_snova_SNOVA_28_5_19_4_AES
    DECODER_w_structure("snova5a", der, PrivateKeyInfo, snova5a),
    DECODER_w_structure("snova5a", der, SubjectPublicKeyInfo, snova5a),
    DECODER_w_structure("p256_snova5a", der, PrivateKeyInfo, p256_snova5a),
    DECODER_w_structure("p256_snova5a", der, SubjectPublicKeyInfo,
                        p256_snova5a),
#endif
#ifdef OQS_ENABLE_SIG_snova_SNOVA_40_7_19_4
    DECODER_w_structure("snova7", der, PrivateKeyInfo, snova7),
    DECODER_w_structure("snova7", der, SubjectPublicKeyInfo, snova7),
    DECODER_w_structure("p384_snova7", der, PrivateKeyInfo, p384_snova7),
    DECODER_w_structure("p384_snova7", der, SubjectPublicKeyInfo, p384_snova7),
#endif
#ifdef OQS_ENABLE_SIG_snova_SNOVA_50_9_19_4
    DECODER_w_structure("snova9", der, PrivateKeyInfo, snova9),
    DECODER_w_structure("snova9", der, SubjectPublicKeyInfo, snova9),
    DECODER_w_structure("p521_snova9", der, PrivateKeyInfo, p521_snova9),
    DECODER_w_structure("p521_snova9", der, SubjectPublicKeyInfo, p521_snova9),
#endif
#ifdef OQS_ENABLE_SIG_snova_SNOVA_48_17_16_2
    DECODER_w_structure("snova17", der, PrivateKeyInfo, snova17),
    DECODER_w_structure("snova17", der, SubjectPublicKeyInfo, snova17),
    DECODER_w_structure("p521_snova17", der, PrivateKeyInfo, p521_snova17),
    DECODER_w_structure("p521_snova17", der, SubjectPublicKeyInfo,
                        p521_snova17),
#endif
#ifdef OQS_ENABLE_SIG_snova_SNOVA_48_16_19_2
    DECODER_w_structure("snova16", der, PrivateKeyInfo, snova16),
    DECODER_w_structure("snova16", der, SubjectPublicKeyInfo, snova16),
    DECODER_w_structure("p521_snova16", der, PrivateKeyInfo, p521_snova16),
    DECODER_w_structure("p521_snova16", der, SubjectPublicKeyInfo,
                        p521_snova16),
#endif
#ifdef OQS_ENABLE_SIG_snova_SNOVA_28_4_19_4x5
    DECODER_w_structure("snova4", der, PrivateKeyInfo, snova4),
    DECODER_w_structure("snova4", der, SubjectPublicKeyInfo, snova4),
    DECODER_w_structure("p256_snova4", der, PrivateKeyInfo, p256_snova4),
    DECODER_w_structure("p256_snova4", der, SubjectPublicKeyInfo, p256_snova4),
#endif
    ///// OQS_TEMPLATE_FRAGMENT_MAKE_END
