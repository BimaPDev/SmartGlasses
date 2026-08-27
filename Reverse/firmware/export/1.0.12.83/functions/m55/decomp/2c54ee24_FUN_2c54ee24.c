/* FUN_2c54ee24 @ 0x2c54ee24 */

undefined4 FUN_2c54ee24(undefined4 param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c48e42c();
  if ((iVar1 == 0) || (iVar2 = FUN_2c48e82c(), iVar2 != 0)) {
    if (param_4 != 0) {
LAB_2c54ee3e:
      *param_3 = 0;
      return 0;
    }
  }
  else {
    iVar2 = FUN_2c48e81c(iVar1);
    if (iVar2 != 0) {
      iVar1 = FUN_2c48e80c(iVar1);
      *param_3 = iVar1 != 0;
      return 0;
    }
    iVar2 = FUN_2c48e84c(iVar1);
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 0x10);
      iVar1 = FUN_2c66b624(DAT_2c54ee90);
      if (iVar1 == 0) {
        *param_3 = 1;
        return 0;
      }
      iVar1 = FUN_2c66b624(DAT_2c54ee94,uVar3);
      if (iVar1 == 0) goto LAB_2c54ee3e;
    }
  }
  return 0xffffffff;
}

