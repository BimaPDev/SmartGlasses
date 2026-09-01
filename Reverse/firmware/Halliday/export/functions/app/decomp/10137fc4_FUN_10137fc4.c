/* FUN_10137fc4 @ 0x10137fc4 */

void FUN_10137fc4(ushort param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_100e09f8();
  if ((iVar1 == 0) && (iVar1 = FUN_100e0874(param_2,param_3), iVar1 != 0)) {
    *(ushort *)(iVar1 + 0xe) = param_1 | *(ushort *)(iVar1 + 0xe);
  }
  return;
}

