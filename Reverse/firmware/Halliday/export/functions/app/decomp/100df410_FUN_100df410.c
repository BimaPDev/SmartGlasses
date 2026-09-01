/* FUN_100df410 @ 0x100df410 */

void FUN_100df410(int param_1)

{
  undefined4 extraout_r1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar1;
  undefined4 unaff_lr;
  
  iVar1 = *(int *)(param_1 + 0x30);
  FUN_100a5b78(DAT_100df460 | (DAT_100df45c - DAT_100df458) * 0x20 & 0xff00U,DAT_100df464,param_1,
               *(undefined1 *)(param_1 + 0x41));
  if (*(char *)(param_1 + 0x41) == '\0') {
    return;
  }
  FUN_10137686(*(undefined4 *)(iVar1 + 0x90),*(undefined1 *)(param_1 + 0x40));
  FUN_1013790c(param_1);
  if (*(int *)(iVar1 + 0x90) == 0) {
    *(undefined1 *)(iVar1 + 0x96) = 7;
    FUN_1013cbaa(iVar1 + 0x60,extraout_r1,20000,0,extraout_r3,unaff_r4,unaff_r5,unaff_lr);
    FUN_1013770c(iVar1,0);
    return;
  }
  return;
}

