/* FUN_2c6656d8 @ 0x2c6656d8 */

void FUN_2c6656d8(undefined4 param_1,double *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_2c669494(0);
  iVar2 = FUN_2c66c4ec();
  uVar3 = thunk_FUN_2c64ca5c(iVar2 + 1);
  FUN_2c674668(uVar3,uVar1,iVar2 + 1);
  FUN_2c669494(0,DAT_2c665780);
  iVar2 = FUN_2c66b4f8(param_1,DAT_2c665784,param_2);
  if (iVar2 + 1U < 2) {
    uVar1 = 0;
    uVar4 = 0;
  }
  else if (*param_2 == DAT_2c665770) {
    uVar1 = 0xffffffff;
    uVar4 = DAT_2c665788;
  }
  else {
    if (*param_2 != DAT_2c665778) goto LAB_2c665726;
    uVar1 = 0xffffffff;
    uVar4 = 0xffefffff;
  }
  *(undefined4 *)param_2 = uVar1;
  *(undefined4 *)((int)param_2 + 4) = uVar4;
  *param_3 = 4;
LAB_2c665726:
  FUN_2c669494(0,uVar3);
  thunk_FUN_2c669588(uVar3);
  return;
}

