/* FUN_10133e90 @ 0x10133e90 */

void FUN_10133e90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r3;
  undefined8 uVar2;
  
  uVar2 = FUN_10133e76(param_1 + 100,param_2,param_3,param_1);
  if (((int)uVar2 != 0) &&
     ((iVar1 = *(int *)(extraout_r3 + 0x68), iVar1 != 0 ||
      (iVar1 = *(int *)(extraout_r3 + 0x84), iVar1 != 0)))) {
    FUN_101144f8(extraout_r3 + 0x88,(int)((ulonglong)uVar2 >> 0x20),iVar1,param_4);
    return;
  }
  return;
}

