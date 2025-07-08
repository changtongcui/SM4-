#pragma once
#include<iostream>
using namespace std;
struct Keys {
	uint32_t rk[32];
};;

void SM4_Key_set(uint8_t* key,Keys* round_keys);//ÃÜÔ¿Éú³É
