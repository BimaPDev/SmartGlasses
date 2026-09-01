/* FUN_10137920 @ 0x10137920 */

void FUN_10137920(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x96) != '\b') {
    iVar1 = *(int *)(param_1 + 0x90);
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x38);
      *(undefined4 *)(iVar1 + 0x38) = 0;
      FUN_1013790c();
      iVar1 = iVar2;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x96) = 8;
  }
  return;
}

