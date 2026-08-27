/* FUN_140a68c0 @ 0x140a68c0 */

int FUN_140a68c0(void)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_140a6964;
  local_18 = 0x80;
  FUN_1402a6e8(4,0x3d8,DAT_140a696c,DAT_140a6968,DAT_140a695c,DAT_140a6960);
  FUN_14028e48(3);
  FUN_1402a6e8(4,0x3da,DAT_140a696c,DAT_140a6968,DAT_140a6970,local_18);
  FUN_140315d4();
  FUN_14032660();
  FUN_14031630();
  local_18 = 0x80;
  FUN_140312ec();
  iVar1 = FUN_14030e44(&local_18);
  FUN_14031364();
  FUN_1402a6e8(4,0x3e2,DAT_140a696c,DAT_140a6968,DAT_140a6974,iVar1,local_18);
  if (iVar1 == 0) {
    FUN_140a1ac8(local_18);
  }
  if (*DAT_140a6964 == local_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

