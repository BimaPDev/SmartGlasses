/* FUN_10068e38 @ 0x10068e38 */

uint FUN_10068e38(uint param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  param_1 = ~param_1;
  pbVar2 = param_2 + param_3;
  for (; param_2 != pbVar2; param_2 = param_2 + 1) {
    uVar1 = *(uint *)(DAT_10068e70 + ((*param_2 ^ param_1) & 0xf) * 4) ^ param_1 >> 4;
    param_1 = *(uint *)(DAT_10068e70 + (uVar1 & 0xf ^ (uint)(*param_2 >> 4)) * 4) ^ uVar1 >> 4;
  }
  return ~param_1;
}

