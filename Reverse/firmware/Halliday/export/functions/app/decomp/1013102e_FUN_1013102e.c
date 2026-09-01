/* FUN_1013102e @ 0x1013102e */

int FUN_1013102e(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r2;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_1013101a(param_1,param_2,param_1);
  iVar1 = (int)uVar3;
  if (iVar1 == 0) {
    if ((int)((ulonglong)uVar3 >> 0x20) == 1) {
      return 0;
    }
    iVar1 = FUN_1013101a(extraout_r2,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return iVar2;
}

