/* FUN_140931fc @ 0x140931fc */

void FUN_140931fc(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  if (*DAT_14093270 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1409328c,DAT_14093288,0x3a2);
  }
  iVar3 = FUN_14049c88();
  if (iVar3 != 0) {
    *DAT_14093274 = DAT_14093278;
  }
  uVar2 = DAT_1409327c;
  if (*DAT_1407b178 != '\x01') {
    *DAT_1407b178 = '\x01';
    iVar3 = FUN_1408aaa0();
    if (iVar3 != 1) {
      iVar3 = FUN_1408aac4(0x19,5,DAT_1407b180,DAT_1407b17c);
      if (iVar3 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x40,DAT_1407b19c);
      }
      *DAT_1407b184 = uVar2;
    }
  }
  iVar3 = DAT_1407b18c;
  pcVar1 = DAT_1407b188;
  if (*DAT_1407b188 == '\0') {
    *DAT_1407b188 = '\x01';
    if (*(char *)(iVar3 + 0x12) != '\0') {
      FUN_14090744(DAT_1407b194,5,*(char *)(iVar3 + 0x12),pcVar1,unaff_r4,unaff_lr);
    }
  }
  iVar3 = DAT_1407b18c;
  if (*DAT_1407b190 == '\0') {
    *DAT_1407b190 = '\x01';
    if ((*(char *)(iVar3 + 0x14) != '\0') && (*(char *)(iVar3 + 0x15) != '\0')) {
      FUN_14090744(DAT_1407b198,5);
      return;
    }
  }
  return;
}

