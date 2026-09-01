/* FUN_100940fc @ 0x100940fc */

int FUN_100940fc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10094254(*param_1 + 8,DAT_10094138,param_3,param_4,param_4);
  if (iVar1 != 0) {
    uVar2 = FUN_1012affe(param_1,iVar1,0);
    uVar2 = FUN_1012aff6(uVar2,iVar1,param_1[2]);
    if (param_1[2] != 0) {
      FUN_1012affe(uVar2,param_1[2],iVar1);
    }
    param_1[2] = iVar1;
    if (param_1[1] == 0) {
      param_1[1] = iVar1;
    }
  }
  return iVar1;
}

