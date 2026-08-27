/* FUN_1405086c @ 0x1405086c */

void FUN_1405086c(void)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  undefined4 unaff_lr;
  bool bVar15;
  int local_38;
  uint local_34;
  undefined4 local_2c;
  
  local_2c = *DAT_14050a04;
  FUN_1402a6e8(4,0x10e,DAT_14050a0c,DAT_14050a08,DAT_140509fc,DAT_14050a00);
  iVar7 = DAT_14050a3c;
  puVar3 = DAT_14050a14;
  FUN_140a4a58(DAT_14050a10);
LAB_140508a2:
  do {
    do {
      FUN_140e53d8(&local_38,0,0xffffffff);
      uVar8 = local_34;
    } while (local_38 != 8);
    if ((int)(local_34 << 0x1e) < 0) {
      FUN_14050868();
    }
  } while ((uVar8 & 1) == 0);
  uVar9 = *puVar3;
  iVar12 = 2;
  pcVar13 = (char *)(iVar7 + uVar9 * 0x400);
  cVar1 = pcVar13[1];
  pcVar11 = DAT_14050a18;
  do {
    DAT_14050a18 = pcVar11;
    if (cVar1 == '\x01') {
      iVar14 = *(int *)(pcVar13 + 2);
      if (iVar14 - 0x100000U < 0xf00000) {
        uVar10 = 0;
        do {
          FUN_140e5148(*(undefined4 *)(pcVar11 + 4),0xffffffff);
          pcVar4 = DAT_14050a18;
          if (((pcVar11[1] != '\0') && (iVar14 == *(int *)(pcVar11 + 0xc))) &&
             (*pcVar11 == *pcVar13)) {
            FUN_140e52d8(*(undefined4 *)(DAT_14050a18 + uVar10 * 0x14 + 4));
            *(undefined4 *)(pcVar4 + uVar10 * 0x14 + 0x10) =
                 *(undefined4 *)(uVar9 * 0x400 + iVar7 + 6);
            FUN_140e51b8(*(undefined4 *)(pcVar4 + uVar10 * 0x14 + 8));
            goto LAB_14050948;
          }
          FUN_140e52d8(*(undefined4 *)(pcVar11 + 4));
          pcVar11 = pcVar11 + 0x14;
          bVar15 = uVar10 == 0;
          uVar10 = uVar8 & 1;
        } while (bVar15);
        FUN_1402a6e8(4,0xe7,DAT_14050a0c,DAT_14050a08,DAT_14050a20,DAT_14050a1c,
                     *(undefined1 *)(iVar7 + uVar9 * 0x400),iVar14);
      }
      else {
        FUN_14046450(pcVar13);
      }
LAB_14050948:
      pbVar6 = DAT_14050a28;
      puVar5 = DAT_14050a24;
      iVar14 = 0;
      bVar15 = (bool)isCurrentModePrivileged();
      if (bVar15) {
        iVar14 = getBasePriority();
      }
      if (iVar14 != 0x40) {
        *DAT_14050a24 = 0x14050954;
        puVar5[1] = unaff_lr;
        uVar9 = (uint)*pbVar6;
        *(undefined4 *)(DAT_14050a2c + uVar9 * 4) = unaff_lr;
        uVar9 = uVar9 + 1;
        *pbVar6 = (char)uVar9 +
                  (char)(uint)((ulonglong)DAT_14050a30 * (ulonglong)uVar9 >> 0x23) * -10;
      }
      bVar15 = (bool)isCurrentModePrivileged();
      if (bVar15) {
        setBasePriority(0x40);
      }
      *(undefined1 *)(iVar7 + *puVar3 * 0x400 + 1) = 0;
      if (iVar14 == 0) {
        *DAT_14050a24 = 0xffffffff;
      }
      pbVar6 = DAT_14050a34;
      bVar2 = *DAT_14050a34;
      *(undefined4 *)(DAT_14050a38 + (uint)bVar2 * 4) = unaff_lr;
      uVar9 = bVar2 + 1;
      *pbVar6 = (char)uVar9 + (char)(uint)((ulonglong)DAT_14050a30 * (ulonglong)uVar9 >> 0x23) * -10
      ;
      bVar15 = (bool)isCurrentModePrivileged();
      if (bVar15) {
        setBasePriority(iVar14);
      }
      uVar9 = *puVar3;
    }
    uVar10 = uVar9 + 1;
    uVar9 = uVar10 & 1;
    if ((int)uVar10 < 0) {
      uVar9 = -uVar9;
    }
    *puVar3 = uVar9;
    if (iVar12 == 1) goto LAB_140508a2;
    pcVar13 = (char *)(iVar7 + uVar9 * 0x400);
    cVar1 = pcVar13[1];
    iVar12 = 1;
    pcVar11 = DAT_14050a18;
  } while( true );
}

