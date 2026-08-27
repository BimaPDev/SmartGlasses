/* FUN_2c4fa73c @ 0x2c4fa73c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fa73c(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iStack_78;
  undefined1 *puStack_74;
  undefined1 auStack_6c [64];
  undefined4 uStack_2c;
  
  uVar6 = DAT_2c4faa0c;
  uVar5 = DAT_2c4faa08;
  pcVar4 = DAT_2c4faa04;
  pcVar2 = DAT_2c4fa9d0;
  puVar1 = DAT_2c4fa9c0;
  uVar16 = 0xffffffff;
  uStack_2c = *_LAB_2c4fa9bc;
  do {
    while (FUN_2c644324(&iStack_78,*puVar1,uVar16), puVar8 = puStack_74, iStack_78 != 0x20) {
      if ((((*pcVar4 != '\0') && (iVar9 = FUN_2c4f9ad8(), iVar9 == 0)) && (*pcVar2 != '\0')) &&
         (iVar9 = FUN_2c4fb39c(1), iVar9 == 0)) {
        uVar16 = FUN_2c674198();
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x38b,uVar6,uVar5,DAT_2c4fa9cc,DAT_2c4fa9c8,uVar16);
      }
      uVar16 = 0xffffffff;
    }
    iVar9 = FUN_2c490d3c();
    puVar7 = DAT_2c4fab24;
    uVar16 = DAT_2c4fa9ec;
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x33a,uVar6,uVar5,DAT_2c4fa9c4);
    }
    switch(*puVar8) {
    case 0:
      FUN_2c674268(DAT_2c4fa9d0,0,0x30);
      uVar16 = FUN_2c673c88();
      pcVar3 = DAT_2c4fa9d4;
      *(undefined4 *)(pcVar2 + 4) = uVar16;
      if (*pcVar3 == '\0') {
        iVar9 = FUN_2c490398();
        if (iVar9 != 0) {
          FUN_2c6444fc(500);
        }
      }
      else {
        FUN_2c6444fc(300);
      }
      pcVar2 = DAT_2c4fa9d4;
      *pcVar4 = '\x01';
      *pcVar2 = '\0';
      *DAT_2c4fa9d8 = *(undefined4 *)(puVar8 + 9);
      uVar16 = FUN_2c4c34c0();
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x358,uVar6,uVar5,DAT_2c4fa9dc,uVar16);
    case 1:
      uVar16 = 0xffffffff;
      FUN_2c4fa6dc(puVar8[1]);
      FUN_2c48f478(1,puVar8[1]);
      break;
    case 2:
      if (*DAT_2c4fa9e8 != '\0') {
        *DAT_2c4fa9d4 = '\x01';
        *pcVar4 = '\x01';
        *DAT_2c4fa9f0 = 0;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x36e,uVar6,uVar5,uVar16);
      }
      *pcVar4 = '\0';
      *puVar7 = 0;
      FUN_2c493560(1,0,0);
      FUN_2c48f478(1,*DAT_2c4fab28,2);
      iVar9 = *(int *)(pcVar2 + 0x2c);
      iVar14 = *(int *)(pcVar2 + 0x24);
      iVar17 = *(int *)(pcVar2 + 0x1c);
      iVar18 = *(int *)(pcVar2 + 0x20);
      iVar15 = *(int *)(pcVar2 + 0x28);
      if ((((iVar9 == 0 && iVar17 == 0) && iVar18 == 0) && iVar14 == 0) && iVar15 == 0) {
        if (pcVar2[1] != '\0') goto LAB_2c4fa904;
        FUN_2c66b450(auStack_6c,0x40,DAT_2c4fab2c,*DAT_2c4fab40,*DAT_2c4fab3c,*DAT_2c4fab38,
                     *DAT_2c4fab34,*DAT_2c4fab30,*DAT_2c4fab1c,*DAT_2c4fab18);
      }
      else {
        uVar16 = FUN_2c6741d8(*(int *)(pcVar2 + 8) - *(int *)(pcVar2 + 4));
        uVar10 = FUN_2c6741d8(*(int *)(pcVar2 + 0xc) - *(int *)(pcVar2 + 4));
        uVar11 = FUN_2c6741d8(*(int *)(pcVar2 + 0x18) - *(int *)(pcVar2 + 4));
        uVar12 = FUN_2c6741d8(*(int *)(pcVar2 + 0x14) - *(int *)(pcVar2 + 4));
        uVar13 = FUN_2c6741d8(*(int *)(pcVar2 + 0x10) - *(int *)(pcVar2 + 4));
        FUN_2c66b450(auStack_6c,0x40,DAT_2c4fab20,iVar9,iVar17,iVar18,iVar14,iVar15,uVar16,uVar10,
                     uVar11,uVar12,uVar13,*DAT_2c4fab1c,*DAT_2c4fab18);
      }
      uVar16 = FUN_2c66c4ec(auStack_6c);
      FUN_2c487b88(auStack_6c,uVar16);
LAB_2c4fa904:
      uVar16 = FUN_2c6741d8(*(int *)(pcVar2 + 8) - *(int *)(pcVar2 + 4));
      uVar10 = FUN_2c6741d8(*(int *)(pcVar2 + 0xc) - *(int *)(pcVar2 + 4));
      uVar11 = FUN_2c6741d8(*(int *)(pcVar2 + 0x18) - *(int *)(pcVar2 + 4));
      uVar12 = FUN_2c6741d8(*(int *)(pcVar2 + 0x14) - *(int *)(pcVar2 + 4));
      uVar13 = FUN_2c6741d8(*(int *)(pcVar2 + 0x10) - *(int *)(pcVar2 + 4));
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x376,uVar6,uVar5,DAT_2c4fa9f4,uVar16,uVar10,uVar11,uVar12,uVar13,
            *(undefined4 *)(pcVar2 + 0x2c),*(undefined4 *)(pcVar2 + 0x1c),
            *(undefined4 *)(pcVar2 + 0x20),*(undefined4 *)(pcVar2 + 0x24),
            *(undefined4 *)(pcVar2 + 0x28),pcVar2[1],*DAT_2c4faa00,*DAT_2c4fa9fc,*DAT_2c4fa9f8);
    case 3:
      if ((*pcVar4 == '\0') || (iVar9 = FUN_2c4f9ad8(), iVar9 != 0)) goto switchD_2c4fa804_default;
      uVar16 = 7;
      break;
    default:
switchD_2c4fa804_default:
      uVar16 = 0xffffffff;
    }
    FUN_2c644388(*puVar1,puVar8);
  } while( true );
}

