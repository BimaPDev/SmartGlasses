/* FUN_101376f0 @ 0x101376f0 */

void FUN_101376f0(int param_1)

{
  code *pcVar1;
  
  FUN_10137686(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x90),*(undefined1 *)(param_1 + 0x40));
  FUN_1013cb84();
  if ((*(int *)(param_1 + 0x34) != 0) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x34) + 4), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

