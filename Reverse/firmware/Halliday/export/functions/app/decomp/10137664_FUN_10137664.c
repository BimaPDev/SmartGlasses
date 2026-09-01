/* FUN_10137664 @ 0x10137664 */

undefined4 FUN_10137664(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    return 6;
  }
  if (*(char *)(param_1 + 1) == '\x02') {
    uVar1 = 8;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

