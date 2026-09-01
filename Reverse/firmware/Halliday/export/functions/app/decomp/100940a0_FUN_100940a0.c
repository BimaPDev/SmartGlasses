/* FUN_100940a0 @ 0x100940a0 */

int FUN_100940a0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    if (param_2 == param_1[1]) {
      iVar1 = FUN_10094064();
      return iVar1;
    }
    iVar1 = FUN_10094254(*param_1 + 8,DAT_100940f8);
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(param_2 + *param_1);
      uVar2 = FUN_1012affe(param_1,uVar3,iVar1);
      uVar2 = FUN_1012aff6(uVar2,iVar1,uVar3);
      uVar2 = FUN_1012aff6(uVar2,param_2,iVar1);
      FUN_1012affe(uVar2,iVar1,param_2);
    }
  }
  return iVar1;
}

