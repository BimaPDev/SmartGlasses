/* FUN_10094064 @ 0x10094064 */

int FUN_10094064(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10094254(*param_1 + 8,DAT_1009409c,param_3,param_4,param_4);
  if (iVar1 != 0) {
    uVar3 = FUN_1012aff6(param_1,iVar1,0);
    uVar2 = FUN_1012affe((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_1[1]);
    if (param_1[1] != 0) {
      FUN_1012aff6(uVar2,param_1[1],iVar1);
    }
    param_1[1] = iVar1;
    if (param_1[2] == 0) {
      param_1[2] = iVar1;
    }
  }
  return iVar1;
}

