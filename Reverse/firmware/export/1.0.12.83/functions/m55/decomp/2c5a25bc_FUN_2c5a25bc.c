/* FUN_2c5a25bc @ 0x2c5a25bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a25bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int iVar3;
  
  piVar1 = _LAB_2c5a25ec;
  if (*(int *)(param_1 + 0x68) != 0) {
    return;
  }
  iVar3 = *_LAB_2c5a25ec;
  if (iVar3 == 0) {
    FUN_2c4723c4();
    iVar3 = 1;
    *piVar1 = 1;
    param_3 = extraout_r2;
  }
  uVar2 = FUN_2c47245c(0,0x1b4,param_3,iVar3,param_4);
  FUN_2c5a8e80();
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  return;
}

