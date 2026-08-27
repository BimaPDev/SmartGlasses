/* FUN_2c556e34 @ 0x2c556e34 */

undefined4 FUN_2c556e34(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c48e42c();
  if ((iVar1 == 0) || (iVar2 = FUN_2c48e82c(), iVar2 != 0)) {
    uVar3 = DAT_2c556e74;
    if (param_4 != 0) {
      *param_3 = 0;
      param_3[1] = uVar3;
      return 0;
    }
  }
  else {
    iVar2 = FUN_2c48e83c(iVar1);
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 0x1c);
      *param_3 = *(undefined4 *)(iVar1 + 0x18);
      param_3[1] = uVar3;
      return 0;
    }
  }
  return 0xffffffff;
}

