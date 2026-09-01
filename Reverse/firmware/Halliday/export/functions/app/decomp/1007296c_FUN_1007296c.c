/* FUN_1007296c @ 0x1007296c */

uint FUN_1007296c(byte *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + param_2;
  for (; param_1 != pbVar1; param_1 = param_1 + 1) {
    param_3 = (uint)(*(byte *)(DAT_10072990 + ((param_3 ^ *param_1) >> 4) + 0x10) ^
                    *(byte *)(DAT_10072990 + ((param_3 ^ *param_1) & 0xf)));
  }
  return param_3;
}

