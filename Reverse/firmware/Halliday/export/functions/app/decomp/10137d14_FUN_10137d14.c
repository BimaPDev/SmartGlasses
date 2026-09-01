/* FUN_10137d14 @ 0x10137d14 */

undefined4 FUN_10137d14(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    if (*(char *)(param_1 + 0x41) != '\x04') {
      uVar1 = FUN_10137b70();
      return uVar1;
    }
    *(undefined1 *)(param_1 + 0x41) = 7;
    FUN_101378f0();
    uVar1 = 0;
  }
  return uVar1;
}

