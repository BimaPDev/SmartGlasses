/* FUN_2c613280 @ 0x2c613280 */

void FUN_2c613280(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r2;
  
  FUN_2c6132c0();
  *param_1 = *(undefined4 *)(param_2 + 0x20);
  param_1[1] = *(undefined4 *)(param_2 + 0x1c);
  param_1[2] = *(undefined4 *)(param_2 + 0x18);
  piVar1 = (int *)FUN_2c601b5c();
  uVar2 = (uint)*(byte *)(param_2 + 0x24);
  uVar3 = *(byte *)(*piVar1 + 0x10) & 0xffffffbf | (uVar2 & 1) << 6;
  *(char *)(*piVar1 + 0x10) = (char)uVar3;
  if ((code *)param_1[0x12] != (code *)0x0) {
    (*(code *)param_1[0x12])(param_1,param_2);
    uVar2 = extraout_r1;
    uVar3 = extraout_r2;
  }
  FUN_2c62bea8(param_2,uVar2,uVar3,param_4);
  return;
}

