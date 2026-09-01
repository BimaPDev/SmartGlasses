/* FUN_100832fc @ 0x100832fc */

int FUN_100832fc(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  iVar1 = param_2 + -2;
  if (iVar1 < 1) {
    iVar1 = param_2 + 10;
    param_1 = param_1 - 1;
  }
  return ((((param_1 * 0x16d + param_3 + param_1 / 400 + (param_1 >> 2) +
            (uint)(iVar1 * 0x16f) / 0xc) - param_1 / 100) * 0x18 + param_4) * 0x3c + param_5) * 0x3c
         + DAT_10083354 + param_6;
}

