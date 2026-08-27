/* FUN_2c64c9f4 @ 0x2c64c9f4 */

uint FUN_2c64c9f4(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  param_3 = param_3 ^ param_2;
  for (uVar3 = param_2; 3 < uVar3; uVar3 = uVar3 - 4) {
    uVar2 = DAT_2c64ca58 * *(int *)((param_1 + param_2) - uVar3);
    param_3 = DAT_2c64ca58 * param_3 ^ DAT_2c64ca58 * (uVar2 ^ uVar2 >> 0x18);
  }
  uVar3 = param_2 >> 2;
  iVar1 = uVar3 * -4 + param_2;
  iVar4 = param_1 + uVar3 * 4;
  if (iVar1 == 2) {
LAB_2c64ca4e:
    param_3 = param_3 ^ (uint)*(byte *)(iVar4 + 1) << 8;
  }
  else {
    if (iVar1 == 3) {
      param_3 = param_3 ^ (uint)*(byte *)(iVar4 + 2) << 0x10;
      goto LAB_2c64ca4e;
    }
    if (iVar1 != 1) goto LAB_2c64ca3a;
  }
  param_3 = DAT_2c64ca58 * (param_3 ^ *(byte *)(param_1 + uVar3 * 4));
LAB_2c64ca3a:
  uVar3 = DAT_2c64ca58 * (param_3 ^ param_3 >> 0xd);
  return uVar3 ^ uVar3 >> 0xf;
}

