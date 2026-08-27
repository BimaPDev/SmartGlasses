/* FUN_2c651e3c @ 0x2c651e3c */

uint FUN_2c651e3c(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  bool in_ZR;
  bool in_CY;
  
  if ((in_CY && !in_ZR) || (*(char *)(param_4 + 0xc) == '\0')) {
    uVar1 = FUN_2c66eb38();
    if (uVar1 != 0xffffffff) {
      param_3 = uVar1 & 0xff;
    }
  }
  else {
    param_3 = (uint)*(byte *)(param_4 + param_2 + 0xd);
  }
  return param_3;
}

