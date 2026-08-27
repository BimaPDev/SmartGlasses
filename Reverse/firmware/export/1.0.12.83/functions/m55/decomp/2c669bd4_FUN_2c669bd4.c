/* FUN_2c669bd4 @ 0x2c669bd4 */

uint FUN_2c669bd4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = DAT_2c669c10;
  if (*DAT_2c669c10 == 0) {
    iVar2 = FUN_2c66b3a8();
    *piVar1 = iVar2;
  }
  uVar3 = FUN_2c66b3a8(param_1,param_2);
  if ((uVar3 == 0xffffffff) ||
     ((uVar4 = uVar3 + 3 & 0xfffffffc, uVar3 != uVar4 &&
      (iVar2 = FUN_2c66b3a8(param_1,uVar4 - uVar3), iVar2 == -1)))) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

