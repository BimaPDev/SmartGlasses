/* FUN_100df30c @ 0x100df30c */

uint FUN_100df30c(int param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = 0xff;
  pbVar1 = param_2 + param_1;
  for (; param_2 != pbVar1; param_2 = param_2 + 1) {
    uVar2 = (uint)*(byte *)(DAT_100df328 + (uVar2 ^ *param_2));
  }
  return ~uVar2 & 0xff;
}

