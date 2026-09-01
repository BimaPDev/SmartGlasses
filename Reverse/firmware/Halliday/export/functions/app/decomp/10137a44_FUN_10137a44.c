/* FUN_10137a44 @ 0x10137a44 */

void FUN_10137a44(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x41) = 4;
  FUN_101379fc(param_1,1,0x8d);
  iVar1 = *(int *)(param_1 + 0x30);
  if (*(char *)(iVar1 + 0x98) == '\0') {
    *(undefined1 *)(iVar1 + 0x98) = 1;
  }
  else if (*(char *)(iVar1 + 0x98) != '\x01') goto LAB_10137a76;
  FUN_101379ce(iVar1,1);
  *(undefined1 *)(param_1 + 0x43) = 0;
LAB_10137a76:
  FUN_1013cb84(param_1);
  return;
}

