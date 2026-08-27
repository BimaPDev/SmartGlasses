/* FUN_140a0e8c @ 0x140a0e8c */

void FUN_140a0e8c(void)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  uint uVar6;
  undefined4 local_28;
  undefined1 auStack_24 [16];
  int local_14;
  
  iVar4 = FUN_140e5138(DAT_140a0eb0);
  *DAT_140a0eb4 = iVar4;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a0eb8);
  }
  FUN_140a0e48(0);
  pcVar3 = DAT_1409eaf0;
  piVar2 = DAT_1409eae8;
  local_14 = *DAT_1409eaec;
  *DAT_1409eaf0 = '\0';
  FUN_140e5618(piVar2);
  piVar1 = DAT_1409eae8;
  if ((*piVar2 == DAT_1409eaf4) && (*(ushort *)((int)piVar2 + 6) + 8 < 0x1001)) {
    if (*(ushort *)(piVar2 + 2) == 0) {
LAB_1409ea60:
      *pcVar3 = '\x01';
      FUN_140e52c8(piVar1);
      local_28 = 0;
      if ((*pcVar3 != '\0') && (iVar4 = FUN_1409e9ac(0,auStack_24,&local_28), iVar4 != 0)) {
        FUN_1402a6e8(4,0x4b,DAT_1409eafc,DAT_1409eb00,DAT_1409eaf8);
        FUN_1402a9fc(DAT_1409eb04,1,0x10,auStack_24);
      }
      if (*DAT_1409eaec == local_14) {
        return;
      }
    }
    else {
      uVar6 = *(ushort *)(piVar2 + 3) + 0xe;
      iVar4 = extraout_r1;
      if (uVar6 < 0x1001) {
        uVar5 = 0;
        do {
          uVar5 = uVar5 + 1;
          if (uVar5 == *(ushort *)(piVar2 + 2)) goto LAB_1409ea60;
          iVar4 = *(ushort *)((int)piVar2 + uVar6 + 2) + 4;
          uVar6 = uVar6 + iVar4;
        } while (uVar6 < 0x1001);
      }
      if (*DAT_1409eaec == local_14) {
        FUN_140e52c8(DAT_1409eae8,iVar4,0,0);
        return;
      }
    }
  }
  else if (*DAT_1409eaec == local_14) {
    FUN_140e52c8(piVar2,extraout_r1,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

