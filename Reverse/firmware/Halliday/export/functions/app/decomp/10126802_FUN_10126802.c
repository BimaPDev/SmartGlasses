/* FUN_10126802 @ 0x10126802 */

void FUN_10126802(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  FUN_101261bc(param_1,auStack_28,auStack_18);
  iVar1 = FUN_1012a84e(auStack_28);
  if ((iVar1 != 0) || (iVar1 = FUN_1012a84e(auStack_18), iVar1 != 0)) {
    iVar1 = FUN_1012a84e(auStack_28);
    if (iVar1 != 0) {
      FUN_10125ab8(param_1,auStack_28);
    }
    iVar1 = FUN_1012a84e(auStack_18);
    if (iVar1 != 0) {
      FUN_10125ab8(param_1,auStack_18);
    }
  }
  return;
}

