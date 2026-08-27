/* FUN_14035f6c @ 0x14035f6c */

void FUN_14035f6c(void)

{
  int *piVar1;
  ushort *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_14036048;
  if (*DAT_1403604c == '\0') {
    iVar5 = FUN_140a1dfc(&local_10);
    uVar3 = DAT_14036064;
    puVar2 = DAT_14036060;
    if (iVar5 == 0) {
      uVar4 = *DAT_1403605c & 0xfe00 | (ushort)local_10 & 0x1ff;
      *DAT_1403605c = uVar4;
      *puVar2 = uVar4;
      FUN_14030824();
      FUN_140e5398(0x10);
      FUN_1402a6e8(4,0x3b4,DAT_14036058,DAT_14036054,DAT_1403606c,DAT_14036068,local_10);
    }
    else {
      uVar4 = *DAT_1403605c & 0xfe00 | 200;
      *DAT_1403605c = uVar4;
      *puVar2 = uVar4;
      FUN_14030824();
      FUN_1402a6e8(4,0x3ba,DAT_14036058,DAT_14036054,uVar3,DAT_14036068);
    }
    if (*DAT_14036048 == local_c) {
      return;
    }
  }
  else {
    uVar4 = *(ushort *)(DAT_1403604c + 2);
    FUN_1402a6e8(4,0x3a9,DAT_14036058,DAT_14036054,DAT_14036050,uVar4);
    puVar2 = DAT_14036060;
    uVar4 = *DAT_1403605c & 0xfe00 | uVar4 & 0x1ff;
    *DAT_1403605c = uVar4;
    piVar1 = DAT_14036048;
    *puVar2 = uVar4;
    if (*piVar1 == local_c) {
      FUN_14030824();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

