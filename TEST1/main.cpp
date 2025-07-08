#include"SM4.h"
int main() {
    unsigned char key[16 * 8] = { 0x01, 0x23, 0x45, 0x67, 0x89, 0xab,
                             0xcd, 0xef, 0xfe, 0xdc, 0xba, 0x98,
                             0x76, 0x54, 0x32, 0x10 };
    unsigned char m[16 * 8] = { 0x01, 0x23, 0x45, 0x67, 0x89, 0xab,
                             0xcd, 0xef, 0xfe, 0xdc, 0xba, 0x98,
                             0x76, 0x54, 0x32, 0x10 };
    Keys sm4_roundkeys;
    //¬÷√‹‘ø…˙≥…
    SM4_Key_set(key, &sm4_roundkeys);
    /*
    for (int i = 0; i < 32; i++) {
        printf(" %02X\n", sm4_roundkeys.rk[i]);
    }
    return 0;
    */
    //º”√‹
    uint8_t enc[16] = { 0 };
    SM4_encrypt(m, enc, &sm4_roundkeys);
    for (int i = 0; i < 16; i++) {
        printf(" %02X\n", enc[i]);
    }
    return 0;
}