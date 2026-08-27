/* FUN_2c5d1948 @ 0x2c5d1948 */

void FUN_2c5d1948(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 auStack_ac [8];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  int iStack_24;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iStack_24 = *DAT_2c5d1afc;
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 8) == '\t') {
      *(undefined1 *)(iVar3 + 0x71) = 1;
      if (*(char *)(iVar3 + 0x72) != '\0') {
        if (*DAT_2c5d1afc == iStack_24) {
          if ((*(int *)(iVar3 + 0x10) != 0) && (*(int *)(iVar3 + 0x14) != 0)) {
            FUN_2c62e838(*(int *)(iVar3 + 0x10),0);
            FUN_2c62e838(*(undefined4 *)(iVar3 + 0x14),0);
            lv_obj_add_flag_invalidate(*(undefined4 *)(iVar3 + 0x10),1);
            lv_obj_add_flag_invalidate(*(undefined4 *)(iVar3 + 0x14),1);
            return;
          }
          return;
        }
        goto LAB_2c5d1af6;
      }
      FUN_2c5cfd9c(auStack_ac,0,0xff,0,0,DAT_2c5d1b00,0,DAT_2c5d1b1c,200);
      iVar1 = FUN_2c606b94(*(undefined4 *)(iVar3 + 0x10),1);
      if (iVar1 == 0) {
        auStack_ac[0] = *(undefined4 *)(iVar3 + 0x10);
        FUN_2c62e8ec(auStack_ac);
      }
      iVar1 = FUN_2c606b94(*(undefined4 *)(iVar3 + 0x14),1);
      if (iVar1 == 0) {
        auStack_ac[0] = *(undefined4 *)(iVar3 + 0x14);
        FUN_2c62e8ec(auStack_ac);
      }
      uStack_7c = 0xffffff38;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0xff;
      iVar1 = 0;
      if (*(int *)(iVar3 + 0x2c) != 0) {
        auStack_ac[0] = *(undefined4 *)(iVar3 + 0x10);
        FUN_2c62e8ec(auStack_ac);
        iVar1 = *(int *)(iVar3 + 0x2c);
      }
      iVar2 = FUN_2c6041fc(*(undefined4 *)(iVar3 + 8));
      if (iVar2 + -1 != iVar1) {
        auStack_ac[0] = *(undefined4 *)(iVar3 + 0x14);
        FUN_2c62e8ec(auStack_ac);
      }
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d1b08,0x46c,DAT_2c5d1b0c,DAT_2c5d1b04,*(undefined4 *)(iVar3 + 0x20),
                     *(undefined4 *)(iVar3 + 0x28));
      }
    }
    else if (*(char *)(param_1 + 8) == '\n') {
      *(undefined1 *)(iVar3 + 0x71) = 0;
      *(undefined1 *)(iVar3 + 0x72) = 0;
      FUN_2c5c685c();
      uVar4 = FUN_2c5c6d5c();
      if ((int)uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5d1b08,0x430,DAT_2c5d1b18,DAT_2c5d1b14);
      }
      if (*DAT_2c5d1afc == iStack_24) {
        FUN_2c5d01a0(iVar3,(int)((ulonglong)uVar4 >> 0x20),0,0);
        return;
      }
      goto LAB_2c5d1af6;
    }
  }
  if (*DAT_2c5d1afc == iStack_24) {
    return;
  }
LAB_2c5d1af6:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

