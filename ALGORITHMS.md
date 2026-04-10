Algorithms supported
====================

This page lists all quantum-safe algorithms supported by oqs-provider.

Some algorithms by default may not be enabled for use in the master code-generator template file.

As standardization for these algorithms within TLS is not done, all TLS code points/IDs can be changed from their default values to values set by environment variables. This facilitates interoperability testing with TLS1.3 implementations that use different IDs.

The following list of algorithms may change when loading oqsprovider (version >= 0.9.0) with OpenSSL (version >= 3.5.0); please see [README.md](README.md#using-with-openssl-3.5.0).

# Code points / algorithm IDs

<!--- OQS_TEMPLATE_FRAGMENT_IDS_START -->
|Algorithm name | default ID | enabled | environment variable |
|---------------|:----------:|:-------:|----------------------|
| efrodo640aes | 65024 | Yes | OQS_CODEPOINT_EFRODO640AES |
| p256_efrodo640aes | 65025 | Yes | OQS_CODEPOINT_P256_EFRODO640AES |
| x25519_efrodo640aes | 65026 | Yes | OQS_CODEPOINT_X25519_EFRODO640AES |
| efrodo640shake | 65027 | Yes | OQS_CODEPOINT_EFRODO640SHAKE |
| p256_efrodo640shake | 65028 | Yes | OQS_CODEPOINT_P256_EFRODO640SHAKE |
| x25519_efrodo640shake | 65029 | Yes | OQS_CODEPOINT_X25519_EFRODO640SHAKE |
| efrodo976aes | 65030 | Yes | OQS_CODEPOINT_EFRODO976AES |
| p384_efrodo976aes | 65031 | Yes | OQS_CODEPOINT_P384_EFRODO976AES |
| x448_efrodo976aes | 65032 | Yes | OQS_CODEPOINT_X448_EFRODO976AES |
| efrodo976shake | 65033 | Yes | OQS_CODEPOINT_EFRODO976SHAKE |
| p384_efrodo976shake | 65034 | Yes | OQS_CODEPOINT_P384_EFRODO976SHAKE |
| x448_efrodo976shake | 65035 | Yes | OQS_CODEPOINT_X448_EFRODO976SHAKE |
| efrodo1344aes | 65036 | Yes | OQS_CODEPOINT_EFRODO1344AES |
| p521_efrodo1344aes | 65037 | Yes | OQS_CODEPOINT_P521_EFRODO1344AES |
| efrodo1344shake | 65038 | Yes | OQS_CODEPOINT_EFRODO1344SHAKE |
| p521_efrodo1344shake | 65039 | Yes | OQS_CODEPOINT_P521_EFRODO1344SHAKE |
| frodo640aes | 65059 | Yes | OQS_CODEPOINT_FRODO640AES |
| p256_frodo640aes | 65060 | Yes | OQS_CODEPOINT_P256_FRODO640AES |
| x25519_frodo640aes | 65061 | Yes | OQS_CODEPOINT_X25519_FRODO640AES |
| frodo640shake | 65062 | Yes | OQS_CODEPOINT_FRODO640SHAKE |
| p256_frodo640shake | 65063 | Yes | OQS_CODEPOINT_P256_FRODO640SHAKE |
| x25519_frodo640shake | 65064 | Yes | OQS_CODEPOINT_X25519_FRODO640SHAKE |
| frodo976aes | 65065 | Yes | OQS_CODEPOINT_FRODO976AES |
| p384_frodo976aes | 65066 | Yes | OQS_CODEPOINT_P384_FRODO976AES |
| x448_frodo976aes | 65067 | Yes | OQS_CODEPOINT_X448_FRODO976AES |
| frodo976shake | 65068 | Yes | OQS_CODEPOINT_FRODO976SHAKE |
| p384_frodo976shake | 65069 | Yes | OQS_CODEPOINT_P384_FRODO976SHAKE |
| x448_frodo976shake | 65070 | Yes | OQS_CODEPOINT_X448_FRODO976SHAKE |
| frodo1344aes | 65071 | Yes | OQS_CODEPOINT_FRODO1344AES |
| p521_frodo1344aes | 65072 | Yes | OQS_CODEPOINT_P521_FRODO1344AES |
| frodo1344shake | 65073 | Yes | OQS_CODEPOINT_FRODO1344SHAKE |
| p521_frodo1344shake | 65074 | Yes | OQS_CODEPOINT_P521_FRODO1344SHAKE |
| mlkem512 | 512 | Yes | OQS_CODEPOINT_MLKEM512 |
| p256_mlkem512 | 0x2F4B | Yes | OQS_CODEPOINT_P256_MLKEM512 |
| x25519_mlkem512 | 0x2FB6 | Yes | OQS_CODEPOINT_X25519_MLKEM512 |
| bp256_mlkem512 | 65056 | Yes | OQS_CODEPOINT_BP256_MLKEM512 |
| mlkem768 | 513 | Yes | OQS_CODEPOINT_MLKEM768 |
| p384_mlkem768 | 0x2F4C | Yes | OQS_CODEPOINT_P384_MLKEM768 |
| x448_mlkem768 | 0x2FB7 | Yes | OQS_CODEPOINT_X448_MLKEM768 |
| bp384_mlkem768 | 65057 | Yes | OQS_CODEPOINT_BP384_MLKEM768 |
| X25519MLKEM768 | 0x11ec | Yes | OQS_CODEPOINT_X25519MLKEM768 |
| SecP256r1MLKEM768 | 0x11eb | Yes | OQS_CODEPOINT_SECP256R1MLKEM768 |
| mlkem1024 | 514 | Yes | OQS_CODEPOINT_MLKEM1024 |
| p521_mlkem1024 | 0x2F4D | Yes | OQS_CODEPOINT_P521_MLKEM1024 |
| SecP384r1MLKEM1024 | 0x11ED | Yes | OQS_CODEPOINT_SECP384R1MLKEM1024 |
| bp512_mlkem1024 | 65058 | Yes | OQS_CODEPOINT_BP512_MLKEM1024 |
| bikel1 | 65040 | Yes | OQS_CODEPOINT_BIKEL1 |
| p256_bikel1 | 65041 | Yes | OQS_CODEPOINT_P256_BIKEL1 |
| x25519_bikel1 | 65042 | Yes | OQS_CODEPOINT_X25519_BIKEL1 |
| bikel3 | 65043 | Yes | OQS_CODEPOINT_BIKEL3 |
| p384_bikel3 | 65044 | Yes | OQS_CODEPOINT_P384_BIKEL3 |
| x448_bikel3 | 65045 | Yes | OQS_CODEPOINT_X448_BIKEL3 |
| bikel5 | 65046 | Yes | OQS_CODEPOINT_BIKEL5 |
| p521_bikel5 | 65047 | Yes | OQS_CODEPOINT_P521_BIKEL5 |
| mldsa44 | 0x0904 |Yes| OQS_CODEPOINT_MLDSA44
| p256_mldsa44 | 0xff06 |Yes| OQS_CODEPOINT_P256_MLDSA44
| rsa3072_mldsa44 | 0xff07 |Yes| OQS_CODEPOINT_RSA3072_MLDSA44
| mldsa65 | 0x0905 |Yes| OQS_CODEPOINT_MLDSA65
| p384_mldsa65 | 0xff08 |Yes| OQS_CODEPOINT_P384_MLDSA65
| mldsa87 | 0x0906 |Yes| OQS_CODEPOINT_MLDSA87
| p521_mldsa87 | 0xff09 |Yes| OQS_CODEPOINT_P521_MLDSA87
| falcon512 | 0xfed7 |Yes| OQS_CODEPOINT_FALCON512
| p256_falcon512 | 0xfed8 |Yes| OQS_CODEPOINT_P256_FALCON512
| rsa3072_falcon512 | 0xfed9 |Yes| OQS_CODEPOINT_RSA3072_FALCON512
| falconpadded512 | 0xfedc |Yes| OQS_CODEPOINT_FALCONPADDED512
| p256_falconpadded512 | 0xfedd |Yes| OQS_CODEPOINT_P256_FALCONPADDED512
| rsa3072_falconpadded512 | 0xfede |Yes| OQS_CODEPOINT_RSA3072_FALCONPADDED512
| falcon1024 | 0xfeda |Yes| OQS_CODEPOINT_FALCON1024
| p521_falcon1024 | 0xfedb |Yes| OQS_CODEPOINT_P521_FALCON1024
| falconpadded1024 | 0xfedf |Yes| OQS_CODEPOINT_FALCONPADDED1024
| p521_falconpadded1024 | 0xfee0 |Yes| OQS_CODEPOINT_P521_FALCONPADDED1024
| mayo1 | 0xff32 |Yes| OQS_CODEPOINT_MAYO1
| p256_mayo1 | 0xff36 |Yes| OQS_CODEPOINT_P256_MAYO1
| mayo2 | 0xff33 |Yes| OQS_CODEPOINT_MAYO2
| p256_mayo2 | 0xff37 |Yes| OQS_CODEPOINT_P256_MAYO2
| mayo3 | 0xff34 |Yes| OQS_CODEPOINT_MAYO3
| p384_mayo3 | 0xff38 |Yes| OQS_CODEPOINT_P384_MAYO3
| mayo5 | 0xff35 |Yes| OQS_CODEPOINT_MAYO5
| p521_mayo5 | 0xff39 |Yes| OQS_CODEPOINT_P521_MAYO5
| CROSSrsdp128balanced | 0xff53 |Yes| OQS_CODEPOINT_CROSSRSDP128BALANCED
| CROSSrsdp128fast | 0xff54 |No| OQS_CODEPOINT_CROSSRSDP128FAST
| CROSSrsdp128small | 0xff55 |No| OQS_CODEPOINT_CROSSRSDP128SMALL
| CROSSrsdp192balanced | 0xff56 |No| OQS_CODEPOINT_CROSSRSDP192BALANCED
| CROSSrsdp192fast | 0xff57 |No| OQS_CODEPOINT_CROSSRSDP192FAST
| CROSSrsdp192small | 0xff58 |No| OQS_CODEPOINT_CROSSRSDP192SMALL
| CROSSrsdp256small | 0xff59 |No| OQS_CODEPOINT_CROSSRSDP256SMALL
| CROSSrsdpg128balanced | 0xff5a |No| OQS_CODEPOINT_CROSSRSDPG128BALANCED
| CROSSrsdpg128fast | 0xff5b |No| OQS_CODEPOINT_CROSSRSDPG128FAST
| CROSSrsdpg128small | 0xff5c |No| OQS_CODEPOINT_CROSSRSDPG128SMALL
| CROSSrsdpg192balanced | 0xff5d |No| OQS_CODEPOINT_CROSSRSDPG192BALANCED
| CROSSrsdpg192fast | 0xff5e |No| OQS_CODEPOINT_CROSSRSDPG192FAST
| CROSSrsdpg192small | 0xff5f |No| OQS_CODEPOINT_CROSSRSDPG192SMALL
| CROSSrsdpg256balanced | 0xff60 |No| OQS_CODEPOINT_CROSSRSDPG256BALANCED
| CROSSrsdpg256fast | 0xff61 |No| OQS_CODEPOINT_CROSSRSDPG256FAST
| CROSSrsdpg256small | 0xff62 |No| OQS_CODEPOINT_CROSSRSDPG256SMALL
| OV_Is | 0xff0a |No| OQS_CODEPOINT_OV_IS
| p256_OV_Is | 0xff16 |No| OQS_CODEPOINT_P256_OV_IS
| OV_Ip | 0xff0b |No| OQS_CODEPOINT_OV_IP
| p256_OV_Ip | 0xff17 |No| OQS_CODEPOINT_P256_OV_IP
| OV_III | 0xff0c |No| OQS_CODEPOINT_OV_III
| p384_OV_III | 0xff18 |No| OQS_CODEPOINT_P384_OV_III
| OV_V | 0xff0d |No| OQS_CODEPOINT_OV_V
| p521_OV_V | 0xff19 |No| OQS_CODEPOINT_P521_OV_V
| OV_Is_pkc | 0xff0e |Yes| OQS_CODEPOINT_OV_IS_PKC
| p256_OV_Is_pkc | 0xff1a |Yes| OQS_CODEPOINT_P256_OV_IS_PKC
| OV_Ip_pkc | 0xff0f |Yes| OQS_CODEPOINT_OV_IP_PKC
| p256_OV_Ip_pkc | 0xff1b |Yes| OQS_CODEPOINT_P256_OV_IP_PKC
| OV_III_pkc | 0xff10 |No| OQS_CODEPOINT_OV_III_PKC
| p384_OV_III_pkc | 0xff1c |No| OQS_CODEPOINT_P384_OV_III_PKC
| OV_V_pkc | 0xff11 |No| OQS_CODEPOINT_OV_V_PKC
| p521_OV_V_pkc | 0xff1d |No| OQS_CODEPOINT_P521_OV_V_PKC
| OV_Is_pkc_skc | 0xff12 |Yes| OQS_CODEPOINT_OV_IS_PKC_SKC
| p256_OV_Is_pkc_skc | 0xff1e |Yes| OQS_CODEPOINT_P256_OV_IS_PKC_SKC
| OV_Ip_pkc_skc | 0xff13 |Yes| OQS_CODEPOINT_OV_IP_PKC_SKC
| p256_OV_Ip_pkc_skc | 0xff1f |Yes| OQS_CODEPOINT_P256_OV_IP_PKC_SKC
| OV_III_pkc_skc | 0xff14 |No| OQS_CODEPOINT_OV_III_PKC_SKC
| p384_OV_III_pkc_skc | 0xff20 |No| OQS_CODEPOINT_P384_OV_III_PKC_SKC
| OV_V_pkc_skc | 0xff15 |No| OQS_CODEPOINT_OV_V_PKC_SKC
| p521_OV_V_pkc_skc | 0xff21 |No| OQS_CODEPOINT_P521_OV_V_PKC_SKC
| snova5o | 0xff3a |Yes| OQS_CODEPOINT_SNOVA5O
| p256_snova5o | 0xff3b |Yes| OQS_CODEPOINT_P256_SNOVA5O
| snova5oa | 0xff3c |Yes| OQS_CODEPOINT_SNOVA5OA
| p256_snova5oa | 0xff3d |Yes| OQS_CODEPOINT_P256_SNOVA5OA
| snova5 | 0xff3e |Yes| OQS_CODEPOINT_SNOVA5
| p256_snova5 | 0xff3f |Yes| OQS_CODEPOINT_P256_SNOVA5
| snova5a | 0xff40 |Yes| OQS_CODEPOINT_SNOVA5A
| p256_snova5a | 0xff41 |Yes| OQS_CODEPOINT_P256_SNOVA5A
| snova7 | 0xff42 |Yes| OQS_CODEPOINT_SNOVA7
| p384_snova7 | 0xff43 |Yes| OQS_CODEPOINT_P384_SNOVA7
| snova9 | 0xff44 |Yes| OQS_CODEPOINT_SNOVA9
| p521_snova9 | 0xff45 |Yes| OQS_CODEPOINT_P521_SNOVA9
| snova17 | 0xff46 |Yes| OQS_CODEPOINT_SNOVA17
| p521_snova17 | 0xff47 |Yes| OQS_CODEPOINT_P521_SNOVA17
| snova16 | 0xff48 |Yes| OQS_CODEPOINT_SNOVA16
| p521_snova16 | 0xff49 |Yes| OQS_CODEPOINT_P521_SNOVA16
| snova4 | 0xff4a |Yes| OQS_CODEPOINT_SNOVA4
| p256_snova4 | 0xff4b |Yes| OQS_CODEPOINT_P256_SNOVA4
<!--- OQS_TEMPLATE_FRAGMENT_IDS_END -->

Changing code points
--------------------

In order to dynamically change the code point of any one algorithm, the respective
environment variable listed above has to be set to the `INT`eger value of the
desired code point. For example, as Cloudflare has chosen `0xfe30` as the code
point for their hybrid X25519_kyber512 implementation, the following command
can be used to successfully confirm interoperability between the oqs-provider
and the Cloudflare infrastructure using this hybrid classic/quantum-safe algorithm:

```
OQS_CODEPOINT_X25519_KYBER512=65072  ./openssl/apps/openssl s_client -groups x25519_kyber512 -connect cloudflare.com:443 -provider-path _build/oqsprov -provider oqsprovider -provider default
```

# OIDs

Along the same lines as the code points, X.509 OIDs may be subject to change
prior to final standardization. The environment variables below permit
adapting the OIDs of all supported signature algorithms as per the table below.
OIDs denoted with NULL are not maintained and may lead to errors in code
execution. Anyone interested in using an algorithm with such designation is
requested to contribute to the maintenance of these OIDs along the lines
discussed in https://github.com/open-quantum-safe/oqs-provider/issues/351.

<!--- OQS_TEMPLATE_FRAGMENT_OIDS_START -->
|Algorithm name |    default OID    | enabled | environment variable |
|---------------|:-----------------:|:-------:|----------------------|
| mldsa44 | 2.16.840.1.101.3.4.3.17 |Yes| OQS_OID_MLDSA44
| p256_mldsa44 | 1.3.9999.7.5 |Yes| OQS_OID_P256_MLDSA44
| rsa3072_mldsa44 | 1.3.9999.7.6 |Yes| OQS_OID_RSA3072_MLDSA44
| mldsa65 | 2.16.840.1.101.3.4.3.18 |Yes| OQS_OID_MLDSA65
| p384_mldsa65 | 1.3.9999.7.7 |Yes| OQS_OID_P384_MLDSA65
| mldsa87 | 2.16.840.1.101.3.4.3.19 |Yes| OQS_OID_MLDSA87
| p521_mldsa87 | 1.3.9999.7.8 |Yes| OQS_OID_P521_MLDSA87
| falcon512 | 1.3.9999.3.11 |Yes| OQS_OID_FALCON512
| p256_falcon512 | 1.3.9999.3.12 |Yes| OQS_OID_P256_FALCON512
| rsa3072_falcon512 | 1.3.9999.3.13 |Yes| OQS_OID_RSA3072_FALCON512
| falconpadded512 | 1.3.9999.3.16 |Yes| OQS_OID_FALCONPADDED512
| p256_falconpadded512 | 1.3.9999.3.17 |Yes| OQS_OID_P256_FALCONPADDED512
| rsa3072_falconpadded512 | 1.3.9999.3.18 |Yes| OQS_OID_RSA3072_FALCONPADDED512
| falcon1024 | 1.3.9999.3.14 |Yes| OQS_OID_FALCON1024
| p521_falcon1024 | 1.3.9999.3.15 |Yes| OQS_OID_P521_FALCON1024
| falconpadded1024 | 1.3.9999.3.19 |Yes| OQS_OID_FALCONPADDED1024
| p521_falconpadded1024 | 1.3.9999.3.20 |Yes| OQS_OID_P521_FALCONPADDED1024
| mayo1 | 1.3.9999.8.1.3 |Yes| OQS_OID_MAYO1
| p256_mayo1 | 1.3.9999.8.1.4 |Yes| OQS_OID_P256_MAYO1
| mayo2 | 1.3.9999.8.2.3 |Yes| OQS_OID_MAYO2
| p256_mayo2 | 1.3.9999.8.2.4 |Yes| OQS_OID_P256_MAYO2
| mayo3 | 1.3.9999.8.3.3 |Yes| OQS_OID_MAYO3
| p384_mayo3 | 1.3.9999.8.3.4 |Yes| OQS_OID_P384_MAYO3
| mayo5 | 1.3.9999.8.5.3 |Yes| OQS_OID_MAYO5
| p521_mayo5 | 1.3.9999.8.5.4 |Yes| OQS_OID_P521_MAYO5
| CROSSrsdp128balanced | 1.3.6.1.4.1.62245.2.1.1.2.2 |Yes| OQS_OID_CROSSRSDP128BALANCED
| CROSSrsdp128fast | 1.3.6.1.4.1.62245.2.1.2.2.2 |No| OQS_OID_CROSSRSDP128FAST
| CROSSrsdp128small | 1.3.6.1.4.1.62245.2.1.3.2.2 |No| OQS_OID_CROSSRSDP128SMALL
| CROSSrsdp192balanced | 1.3.6.1.4.1.62245.2.1.4.2.2 |No| OQS_OID_CROSSRSDP192BALANCED
| CROSSrsdp192fast | 1.3.6.1.4.1.62245.2.1.5.2.2 |No| OQS_OID_CROSSRSDP192FAST
| CROSSrsdp192small | 1.3.6.1.4.1.62245.2.1.6.2.2 |No| OQS_OID_CROSSRSDP192SMALL
| CROSSrsdp256small | 1.3.6.1.4.1.62245.2.1.9.2.2 |No| OQS_OID_CROSSRSDP256SMALL
| CROSSrsdpg128balanced | 1.3.6.1.4.1.62245.2.1.10.2.2 |No| OQS_OID_CROSSRSDPG128BALANCED
| CROSSrsdpg128fast | 1.3.6.1.4.1.62245.2.1.11.2.2 |No| OQS_OID_CROSSRSDPG128FAST
| CROSSrsdpg128small | 1.3.6.1.4.1.62245.2.1.12.2.2 |No| OQS_OID_CROSSRSDPG128SMALL
| CROSSrsdpg192balanced | 1.3.6.1.4.1.62245.2.1.13.2.2 |No| OQS_OID_CROSSRSDPG192BALANCED
| CROSSrsdpg192fast | 1.3.6.1.4.1.62245.2.1.14.2.2 |No| OQS_OID_CROSSRSDPG192FAST
| CROSSrsdpg192small | 1.3.6.1.4.1.62245.2.1.15.2.2 |No| OQS_OID_CROSSRSDPG192SMALL
| CROSSrsdpg256balanced | 1.3.6.1.4.1.62245.2.1.16.2.2 |No| OQS_OID_CROSSRSDPG256BALANCED
| CROSSrsdpg256fast | 1.3.6.1.4.1.62245.2.1.17.2.2 |No| OQS_OID_CROSSRSDPG256FAST
| CROSSrsdpg256small | 1.3.6.1.4.1.62245.2.1.18.2.2 |No| OQS_OID_CROSSRSDPG256SMALL
| OV_Is | 1.3.9999.9.1.1 |No| OQS_OID_OV_IS
| p256_OV_Is | 1.3.9999.9.1.2 |No| OQS_OID_P256_OV_IS
| OV_Ip | 1.3.9999.9.2.1 |No| OQS_OID_OV_IP
| p256_OV_Ip | 1.3.9999.9.2.2 |No| OQS_OID_P256_OV_IP
| OV_III | 1.3.9999.9.3.1 |No| OQS_OID_OV_III
| p384_OV_III | 1.3.9999.9.3.2 |No| OQS_OID_P384_OV_III
| OV_V | 1.3.9999.9.4.1 |No| OQS_OID_OV_V
| p521_OV_V | 1.3.9999.9.4.2 |No| OQS_OID_P521_OV_V
| OV_Is_pkc | 1.3.9999.9.5.1 |Yes| OQS_OID_OV_IS_PKC
| p256_OV_Is_pkc | 1.3.9999.9.5.2 |Yes| OQS_OID_P256_OV_IS_PKC
| OV_Ip_pkc | 1.3.9999.9.6.1 |Yes| OQS_OID_OV_IP_PKC
| p256_OV_Ip_pkc | 1.3.9999.9.6.2 |Yes| OQS_OID_P256_OV_IP_PKC
| OV_III_pkc | 1.3.9999.9.7.1 |No| OQS_OID_OV_III_PKC
| p384_OV_III_pkc | 1.3.9999.9.7.2 |No| OQS_OID_P384_OV_III_PKC
| OV_V_pkc | 1.3.9999.9.8.1 |No| OQS_OID_OV_V_PKC
| p521_OV_V_pkc | 1.3.9999.9.8.2 |No| OQS_OID_P521_OV_V_PKC
| OV_Is_pkc_skc | 1.3.9999.9.9.1 |Yes| OQS_OID_OV_IS_PKC_SKC
| p256_OV_Is_pkc_skc | 1.3.9999.9.9.2 |Yes| OQS_OID_P256_OV_IS_PKC_SKC
| OV_Ip_pkc_skc | 1.3.9999.9.10.1 |Yes| OQS_OID_OV_IP_PKC_SKC
| p256_OV_Ip_pkc_skc | 1.3.9999.9.10.2 |Yes| OQS_OID_P256_OV_IP_PKC_SKC
| OV_III_pkc_skc | 1.3.9999.9.11.1 |No| OQS_OID_OV_III_PKC_SKC
| p384_OV_III_pkc_skc | 1.3.9999.9.11.2 |No| OQS_OID_P384_OV_III_PKC_SKC
| OV_V_pkc_skc | 1.3.9999.9.12.1 |No| OQS_OID_OV_V_PKC_SKC
| p521_OV_V_pkc_skc | 1.3.9999.9.12.2 |No| OQS_OID_P521_OV_V_PKC_SKC
| snova5o | 1.3.9999.10.1.1 |Yes| OQS_OID_SNOVA5O
| p256_snova5o | 1.3.9999.10.1.2 |Yes| OQS_OID_P256_SNOVA5O
| snova5oa | 1.3.9999.10.2.1 |Yes| OQS_OID_SNOVA5OA
| p256_snova5oa | 1.3.9999.10.2.2 |Yes| OQS_OID_P256_SNOVA5OA
| snova5 | 1.3.9999.10.3.1 |Yes| OQS_OID_SNOVA5
| p256_snova5 | 1.3.9999.10.3.2 |Yes| OQS_OID_P256_SNOVA5
| snova5a | 1.3.9999.10.4.1 |Yes| OQS_OID_SNOVA5A
| p256_snova5a | 1.3.9999.10.4.2 |Yes| OQS_OID_P256_SNOVA5A
| snova7 | 1.3.9999.10.5.1 |Yes| OQS_OID_SNOVA7
| p384_snova7 | 1.3.9999.10.5.2 |Yes| OQS_OID_P384_SNOVA7
| snova9 | 1.3.9999.10.6.1 |Yes| OQS_OID_SNOVA9
| p521_snova9 | 1.3.9999.10.6.2 |Yes| OQS_OID_P521_SNOVA9
| snova17 | 1.3.9999.10.7.1 |Yes| OQS_OID_SNOVA17
| p521_snova17 | 1.3.9999.10.7.2 |Yes| OQS_OID_P521_SNOVA17
| snova16 | 1.3.9999.10.8.1 |Yes| OQS_OID_SNOVA16
| p521_snova16 | 1.3.9999.10.8.2 |Yes| OQS_OID_P521_SNOVA16
| snova4 | 1.3.9999.10.9.1 |Yes| OQS_OID_SNOVA4
| p256_snova4 | 1.3.9999.10.9.2 |Yes| OQS_OID_P256_SNOVA4

If [OQS_KEM_ENCODERS](CONFIGURE.md#OQS_KEM_ENCODERS) is enabled the following list is also available:

|Algorithm name |    default OID    | environment variable |
|---------------|:-----------------:|----------------------|
| efrodo640aes | NULL | OQS_OID_EFRODO640AES
| p256_efrodo640aes | NULL | OQS_OID_P256_EFRODO640AES
| x25519_efrodo640aes | NULL | OQS_OID_X25519_EFRODO640AES
| efrodo640shake | NULL | OQS_OID_EFRODO640SHAKE
| p256_efrodo640shake | NULL | OQS_OID_P256_EFRODO640SHAKE
| x25519_efrodo640shake | NULL | OQS_OID_X25519_EFRODO640SHAKE
| efrodo976aes | NULL | OQS_OID_EFRODO976AES
| p384_efrodo976aes | NULL | OQS_OID_P384_EFRODO976AES
| x448_efrodo976aes | NULL | OQS_OID_X448_EFRODO976AES
| efrodo976shake | NULL | OQS_OID_EFRODO976SHAKE
| p384_efrodo976shake | NULL | OQS_OID_P384_EFRODO976SHAKE
| x448_efrodo976shake | NULL | OQS_OID_X448_EFRODO976SHAKE
| efrodo1344aes | NULL | OQS_OID_EFRODO1344AES
| p521_efrodo1344aes | NULL | OQS_OID_P521_EFRODO1344AES
| efrodo1344shake | NULL | OQS_OID_EFRODO1344SHAKE
| p521_efrodo1344shake | NULL | OQS_OID_P521_EFRODO1344SHAKE
| frodo640aes | NULL | OQS_OID_FRODO640AES
| p256_frodo640aes | NULL | OQS_OID_P256_FRODO640AES
| x25519_frodo640aes | NULL | OQS_OID_X25519_FRODO640AES
| frodo640shake | NULL | OQS_OID_FRODO640SHAKE
| p256_frodo640shake | NULL | OQS_OID_P256_FRODO640SHAKE
| x25519_frodo640shake | NULL | OQS_OID_X25519_FRODO640SHAKE
| frodo976aes | NULL | OQS_OID_FRODO976AES
| p384_frodo976aes | NULL | OQS_OID_P384_FRODO976AES
| x448_frodo976aes | NULL | OQS_OID_X448_FRODO976AES
| frodo976shake | NULL | OQS_OID_FRODO976SHAKE
| p384_frodo976shake | NULL | OQS_OID_P384_FRODO976SHAKE
| x448_frodo976shake | NULL | OQS_OID_X448_FRODO976SHAKE
| frodo1344aes | NULL | OQS_OID_FRODO1344AES
| p521_frodo1344aes | NULL | OQS_OID_P521_FRODO1344AES
| frodo1344shake | NULL | OQS_OID_FRODO1344SHAKE
| p521_frodo1344shake | NULL | OQS_OID_P521_FRODO1344SHAKE
| mlkem512 | 2.16.840.1.101.3.4.4.1 | OQS_OID_MLKEM512
| p256_mlkem512 | 1.3.6.1.4.1.22554.5.7.1 | OQS_OID_P256_MLKEM512
| x25519_mlkem512 | 1.3.6.1.4.1.22554.5.8.1 | OQS_OID_X25519_MLKEM512
| bp256_mlkem512 | NULL | OQS_OID_BP256_MLKEM512
| mlkem768 | 2.16.840.1.101.3.4.4.2 | OQS_OID_MLKEM768
| p384_mlkem768 | NULL | OQS_OID_P384_MLKEM768
| x448_mlkem768 | NULL | OQS_OID_X448_MLKEM768
| bp384_mlkem768 | NULL | OQS_OID_BP384_MLKEM768
| X25519MLKEM768 | NULL | OQS_OID_X25519MLKEM768
| SecP256r1MLKEM768 | NULL | OQS_OID_SECP256R1MLKEM768
| mlkem1024 | 2.16.840.1.101.3.4.4.3 | OQS_OID_MLKEM1024
| p521_mlkem1024 | NULL | OQS_OID_P521_MLKEM1024
| SecP384r1MLKEM1024 | 1.3.6.1.4.1.42235.6 | OQS_OID_SECP384R1MLKEM1024
| bp512_mlkem1024 | NULL | OQS_OID_BP512_MLKEM1024
| bikel1 | NULL | OQS_OID_BIKEL1
| p256_bikel1 | NULL | OQS_OID_P256_BIKEL1
| x25519_bikel1 | NULL | OQS_OID_X25519_BIKEL1
| bikel3 | NULL | OQS_OID_BIKEL3
| p384_bikel3 | NULL | OQS_OID_P384_BIKEL3
| x448_bikel3 | NULL | OQS_OID_X448_BIKEL3
| bikel5 | NULL | OQS_OID_BIKEL5
| p521_bikel5 | NULL | OQS_OID_P521_BIKEL5
<!--- OQS_TEMPLATE_FRAGMENT_OIDS_END -->

