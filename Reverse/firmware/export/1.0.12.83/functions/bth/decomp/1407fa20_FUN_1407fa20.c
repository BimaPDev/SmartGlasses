/* FUN_1407fa20 @ 0x1407fa20 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1407fa20(undefined4 param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  char *extraout_r1;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  char *local_cc;
  int local_c8;
  undefined4 local_c4 [16];
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_6c [16];
  uint local_2c;
  
  local_2c = *DAT_1407fd18;
  pcVar7 = param_2;
  do {
    uVar14 = (int)(param_2 + param_3) - (int)pcVar7;
    uVar10 = uVar14 & 0xffff;
    uVar17 = FUN_1407ebe8(pcVar7,uVar10);
    pcVar6 = (char *)((ulonglong)uVar17 >> 0x20);
    pcVar11 = (char *)uVar17;
    pcVar15 = pcVar7 + uVar10;
    if (pcVar11 != (char *)0x0) {
      if (*pcVar11 == '\r') {
        pcVar11 = pcVar11 + 2;
      }
      uVar17 = FUN_1407ebe8(pcVar11,(int)pcVar15 - (int)pcVar11);
      pcVar6 = (char *)((ulonglong)uVar17 >> 0x20);
      if ((int)uVar17 != 0) goto LAB_1407fa70;
      if (*pcVar11 == 'O') goto LAB_1407fd76;
LAB_1407fb1e:
      param_3 = param_3 - uVar14 & 0xffff;
      break;
    }
    if ((*pcVar7 != 'O') || (pcVar7[1] != 'K')) goto LAB_1407fb1e;
    uVar17 = FUN_1407ebe8(pcVar7,uVar10);
    pcVar6 = (char *)((ulonglong)uVar17 >> 0x20);
    pcVar11 = pcVar7;
    if ((int)uVar17 == 0) {
LAB_1407fd76:
      if ((pcVar11[1] != 'K') || (pcVar6 = pcVar11 + 2, pcVar15 <= pcVar6)) goto LAB_1407fb1e;
      uVar10 = (uint)pcVar11[2];
      do {
        if (((((uVar10 & 0xffffffdf) - 0x41 & 0xff) < 0x1a) || (uVar10 - 0x30 < 10)) ||
           (pcVar6 == pcVar15 + -1)) goto LAB_1407fb1e;
        pcVar1 = pcVar6 + 1;
        uVar17 = CONCAT44(pcVar1,pcVar6);
        uVar10 = (uint)*pcVar1;
        pcVar6 = pcVar1;
      } while (uVar10 != 10);
    }
LAB_1407fa70:
    pcVar6 = (char *)((ulonglong)uVar17 >> 0x20);
    puVar12 = (undefined1 *)uVar17;
    pcVar15 = puVar12 + 2;
    if (pcVar7 == pcVar15) goto LAB_1407fb1e;
    *puVar12 = 0;
    local_84 = 0;
    uStack_80 = 0;
    local_7c = 0;
    uStack_78 = 0;
    local_c8 = 0;
    local_74 = 0;
    local_70 = 0;
    pcVar7 = pcVar11;
    if (*pcVar11 == ' ') {
      iVar13 = 1;
      do {
        local_c8 = iVar13;
        pcVar7 = pcVar7 + 1;
        iVar13 = local_c8 + 1;
      } while (*pcVar7 == ' ');
    }
    iVar13 = local_c8;
    local_cc = pcVar11;
    bVar3 = FUN_140dc530(pcVar7,DAT_1407fd1c);
    uVar10 = (uint)bVar3;
    if (uVar10 - 2 < 0x14) {
      FUN_140e5278(&local_84,pcVar7,uVar10);
      *(undefined1 *)((int)&local_84 + uVar10) = 0;
      if ((((((local_84 & 0xff) != 0x4f) || (local_84._1_1_ != 'K')) || (local_84._2_1_ != '\0')) &&
          ((iVar4 = FUN_140dc518(&local_84,DAT_1407fd24), iVar4 != 0 &&
           (iVar4 = FUN_140dc518(&local_84,DAT_1407fd28), iVar4 != 0)))) &&
         ((iVar4 = FUN_140dc518(&local_84,DAT_1407fd2c), iVar4 != 0 &&
          (((iVar4 = FUN_140dc518(&local_84,DAT_1407fd30), iVar4 != 0 &&
            (iVar4 = FUN_140dc518(&local_84,DAT_1407fd34), iVar4 != 0)) &&
           (iVar4 = FUN_140dc518(&local_84,DAT_1407fd38), iVar4 != 0)))))) {
        iVar4 = FUN_140dc518(&local_84,DAT_1407fd3c);
        if (iVar4 != 0) {
          iVar13 = local_c8 + 1 + uVar10;
          if (0x3c < (int)(puVar12 + (-iVar13 - (int)pcVar11))) {
            local_6c[0] = 0;
            FUN_140e5658(local_6c + 1,0,0x39);
            pcVar7 = pcVar11 + iVar13;
            puVar2 = local_6c;
            do {
              puVar16 = puVar2;
              pcVar6 = pcVar7;
              uVar9 = *(undefined4 *)(pcVar6 + 0xc);
              uVar5 = *(undefined4 *)(pcVar6 + 4);
              uVar8 = *(undefined4 *)(pcVar6 + 8);
              pcVar7 = pcVar6 + 0x10;
              *puVar16 = *(undefined4 *)pcVar6;
              puVar16[1] = uVar5;
              puVar16[2] = uVar8;
              puVar16[3] = uVar9;
              puVar2 = puVar16 + 4;
            } while (pcVar7 != pcVar11 + iVar13 + 0x30);
            uVar5 = *(undefined4 *)(pcVar6 + 0x14);
            uVar8 = *(undefined4 *)(pcVar6 + 0x18);
            puVar16[4] = *(undefined4 *)pcVar7;
            puVar16[5] = uVar5;
            puVar16[6] = uVar8;
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,DAT_1407fd40,&local_84,local_6c);
          }
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_1408040c,&local_84,pcVar11 + iVar13);
        }
        local_c8 = iVar13 + 10;
        if ((((int)pcVar11[local_c8] - 0x3aU & 0xff) < 2) || (pcVar11[local_c8] == 0x3d)) {
          local_c8 = iVar13 + 0xb;
        }
        FUN_1407f854(&local_cc,local_c4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_1407fd20,pcVar11);
    }
    pcVar6 = extraout_r1;
    pcVar7 = pcVar15;
  } while (pcVar15 < param_2 + param_3);
  if ((*DAT_1407fd18 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(param_3,pcVar6,*DAT_1407fd18 ^ local_2c,0);
}

