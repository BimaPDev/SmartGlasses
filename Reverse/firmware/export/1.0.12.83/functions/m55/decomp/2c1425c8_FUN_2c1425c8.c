/* FUN_2c1425c8 @ 0x2c1425c8 */

uint FUN_2c1425c8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = DAT_2c142604;
  if (*DAT_2c142604 == 0) {
    iVar2 = FUN_2c1426f0();
    *piVar1 = iVar2;
  }
  uVar3 = FUN_2c1426f0(param_1,param_2);
  if ((uVar3 == 0xffffffff) ||
     ((uVar4 = uVar3 + 3 & 0xfffffffc, uVar3 != uVar4 &&
      (iVar2 = FUN_2c1426f0(param_1,uVar4 - uVar3), iVar2 == -1)))) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

