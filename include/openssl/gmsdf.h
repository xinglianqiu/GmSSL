/* ====================================================================
 * Copyright (c) 2015 - 2016 The GmSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the GmSSL Project.
 *    (http://gmssl.org/)"
 *
 * 4. The name "GmSSL Project" must not be used to endorse or promote
 *    products derived from this software without prior written
 *    permission. For written permission, please contact
 *    guanzhi1980@gmail.com.
 *
 * 5. Products derived from this software may not be called "GmSSL"
 *    nor may "GmSSL" appear in their names without prior written
 *    permission of the GmSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the GmSSL Project
 *    (http://gmssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE GmSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE GmSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 */

#ifndef HEADER_GMSDF_H
#define HEADER_GMSDF_H

#include <stdio.h>
#include <openssl/sgd.h>
#include <openssl/sdf.h>

#define SDF_MIN_KEY_INDEX	1 /* defined by GM/T 0018 */
#define SDF_MAX_KEY_INDEX	32 /* defined by GmSSL as vendor */
#define SDF_MIN_PASSWORD_LENGTH	8 /* defined by GM/T 0018 */
#define SDF_MAX_PASSWORD_LENGTH	255 /* defined by GmSSL as vendor */

#define ECCref_MAX_CIPHER_LEN 255


#ifdef __cplusplus
extern "C" {
#endif

int SDF_PrintDeviceInfo(FILE *fp, DEVICEINFO *devInfo);
int SDF_PrintRSAPublicKey(FILE *fp, RSArefPublicKey *pk);
int SDF_PrintRSAPrivateKey(FILE *fp, RSArefPrivateKey *pk);
int SDF_PrintECCPublicKey(FILE *fp, ECCrefPublicKey *pk);
int SDF_PrintECCPrivateKey(FILE *fp, ECCrefPrivateKey *pk);
/*
int SDF_PrintECCCipher(FILE *fp, ECCCipher *cipher);
int SDF_PrintECCSignature(FILE *fp, ECCSignature *sig);
*/
const char *SDF_GetErrorString(int err);

//FIXME: implement this in a standalone file in sdf module
/*
int SDF_ImportKey(
	void *hSessionHandle,
	unsigned char *pucKey,
	unsigned int uiKeyLength,
	void **phKeyHandle);
*/

/* BEGIN ERROR CODES */
/*
 * The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */

int ERR_load_SDF_strings(void);

/* Error codes for the SDF functions. */

/* Function codes. */
# define SDF_F_SDF_CALCULATEMAC                           100
# define SDF_F_SDF_CLOSEDEVICE                            101
# define SDF_F_SDF_CLOSESESSION                           102
# define SDF_F_SDF_CREATEFILE                             103
# define SDF_F_SDF_DECRYPT                                104
# define SDF_F_SDF_DELETEFILE                             105
# define SDF_F_SDF_DESTROYKEY                             106
# define SDF_F_SDF_ENCRYPT                                107
# define SDF_F_SDF_EXCHANGEDIGITENVELOPEBASEONECC         108
# define SDF_F_SDF_EXCHANGEDIGITENVELOPEBASEONRSA         109
# define SDF_F_SDF_EXPORTENCPUBLICKEY_ECC                 110
# define SDF_F_SDF_EXPORTENCPUBLICKEY_RSA                 111
# define SDF_F_SDF_EXPORTSIGNPUBLICKEY_ECC                112
# define SDF_F_SDF_EXPORTSIGNPUBLICKEY_RSA                113
# define SDF_F_SDF_EXTERNALENCRYPT_ECC                    114
# define SDF_F_SDF_EXTERNALPRIVATEKEYOPERATION_RSA        115
# define SDF_F_SDF_EXTERNALPUBLICKEYOPERATION_RSA         116
# define SDF_F_SDF_EXTERNALVERIFY_ECC                     117
# define SDF_F_SDF_GENERATEAGREEMENTDATAANDKEYWITHECC     118
# define SDF_F_SDF_GENERATEAGREEMENTDATAWITHECC           119
# define SDF_F_SDF_GENERATEKEYPAIR_ECC                    120
# define SDF_F_SDF_GENERATEKEYPAIR_RSA                    121
# define SDF_F_SDF_GENERATEKEYWITHECC                     122
# define SDF_F_SDF_GENERATEKEYWITHEPK_ECC                 123
# define SDF_F_SDF_GENERATEKEYWITHEPK_RSA                 124
# define SDF_F_SDF_GENERATEKEYWITHIPK_ECC                 125
# define SDF_F_SDF_GENERATEKEYWITHIPK_RSA                 126
# define SDF_F_SDF_GENERATEKEYWITHKEK                     127
# define SDF_F_SDF_GENERATERANDOM                         128
# define SDF_F_SDF_GETDEVICEINFO                          129
# define SDF_F_SDF_GETPRIVATEKEYACCESSRIGHT               130
# define SDF_F_SDF_HASHFINAL                              131
# define SDF_F_SDF_HASHINIT                               132
# define SDF_F_SDF_HASHUPDATE                             133
# define SDF_F_SDF_IMPORTKEY                              134
# define SDF_F_SDF_IMPORTKEYWITHISK_ECC                   135
# define SDF_F_SDF_IMPORTKEYWITHISK_RSA                   136
# define SDF_F_SDF_IMPORTKEYWITHKEK                       137
# define SDF_F_SDF_INTERNALPRIVATEKEYOPERATION_RSA        138
# define SDF_F_SDF_INTERNALPUBLICKEYOPERATION_RSA         147
# define SDF_F_SDF_INTERNALSIGN_ECC                       139
# define SDF_F_SDF_INTERNALVERIFY_ECC                     140
# define SDF_F_SDF_METHOD_LOAD_LIBRARY                    141
# define SDF_F_SDF_OPENDEVICE                             142
# define SDF_F_SDF_OPENSESSION                            143
# define SDF_F_SDF_READFILE                               144
# define SDF_F_SDF_RELEASEPRIVATEKEYACCESSRIGHT           145
# define SDF_F_SDF_WRITEFILE                              146

/* Reason codes. */
# define SDF_R_INVALID_KEY_LENGTH                         100
# define SDF_R_INVALID_SDF_LIBRARY                        101
# define SDF_R_INVALID_SESSION_HANDLE                     102
# define SDF_R_LOAD_LIBRARY_FAILURE                       107
# define SDF_R_METHOD_OPERATION_FAILURE                   108
# define SDF_R_NOT_INITIALIZED                            109
# define SDF_R_NOT_SUPPORTED                              103
# define SDF_R_OPERATION_FAILED                           104
# define SDF_R_SDF_METHOD_RETURN_FAILURE                  105
# define SDF_R_SDF_OPERATION_FAILED                       106

# ifdef  __cplusplus
}
# endif
#endif
