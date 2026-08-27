/* FUN_1407b908 @ 0x1407b908 */

void FUN_1407b908(int param_1,int param_2,undefined4 *param_3,undefined2 *param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  int iVar13;
  int extraout_r1;
  byte bVar14;
  uint uVar15;
  undefined2 *puVar16;
  byte bVar17;
  ushort uVar18;
  int iVar19;
  ushort uVar20;
  byte bVar21;
  byte bVar22;
  char cVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined2 uStack_36;
  undefined2 uStack_34;
  
  uVar8 = *DAT_1407bba4;
  uStack_36 = (undefined2)*(undefined4 *)(DAT_1407bba8 + 0x10);
  uStack_34 = (undefined2)((uint)*(undefined4 *)(DAT_1407bba8 + 0x10) >> 0x10);
  iVar13 = 0;
  if (param_2 != 0) {
    iVar19 = *(int *)(param_1 + 0x6c);
    iVar13 = *(int *)(param_2 + 8);
    iVar9 = *(int *)(*(int *)(iVar19 + 8) + 2);
    bVar14 = *(byte *)(iVar13 + 8);
    bVar22 = *(byte *)(iVar13 + 10) & *(byte *)(iVar9 + 6);
    uVar15 = (uint)bVar22;
    bVar1 = *(byte *)(iVar9 + 4);
    uVar24 = uVar15 & 1;
    if ((bVar22 & 1) == 0) {
      if ((int)(uVar15 << 0x1d) < 0) {
        *(undefined4 *)(param_1 + 0x14) = 48000;
        if ((int)(uVar15 << 0x1b) < 0) {
          uVar20 = 0x14;
          uVar18 = 0x18;
          uVar4 = 0x14;
        }
        else {
          uVar20 = 0x24;
          uVar18 = 0x28;
          uVar4 = 0x24;
        }
      }
      else {
        if (-1 < (int)(uVar15 << 0x1c)) goto LAB_1407b9ca;
        *(undefined4 *)(param_1 + 0x14) = 0xac44;
        if ((int)(uVar15 << 0x1b) < 0) {
          uVar18 = 0x18;
          uVar24 = 8;
          uVar20 = 0x18;
          uVar4 = 0x14;
        }
        else {
          uVar18 = 0x28;
          uVar24 = 8;
          uVar20 = 0x28;
          uVar4 = 0x24;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = DAT_1407bbc0;
      if ((bVar22 & 0x10) == 0) {
        uVar4 = 0x24;
        uVar20 = 0x21;
        uVar18 = 0x28;
        uVar24 = uVar15 & 0x10;
      }
      else {
        uVar4 = 0x14;
        uVar18 = 0x18;
        uVar20 = 0x11;
        uVar24 = 0;
      }
    }
    iVar5 = DAT_1407bbb4;
    bVar22 = *(byte *)(iVar13 + 0xb);
    bVar3 = *(byte *)(iVar9 + 7);
    bVar17 = bVar3 & 0x30;
    if ((bVar22 & 0x30) == 0) {
      if ((bVar3 & 0x30) != 0) {
LAB_1407ba06:
        if ((bVar3 & 0x10) == 0) goto LAB_1407ba16;
        bVar17 = 0x10;
      }
    }
    else {
      if ((bVar22 & 0x10) != 0) goto LAB_1407ba06;
      if ((bVar22 & 0x20) == 0) goto LAB_1407b990;
LAB_1407ba16:
      if ((bVar3 & 0x20) != 0) {
        bVar17 = 0x20;
      }
    }
LAB_1407b990:
    if (((bVar3 & 0x40) != 0) && ((bVar22 & 0x40) != 0)) {
      bVar17 = bVar17 | 0x40;
    }
    if (((bVar3 & 0x80) == 0) || ((bVar22 & 0x80) == 0)) {
      bVar21 = bVar3 & bVar22 & 0xf;
      if ((bVar3 & 0xf) != bVar21) goto LAB_1407b9b8;
      bVar17 = bVar17 | bVar3 & 0xf;
      bVar22 = *(byte *)(iVar9 + 8) & *(byte *)(iVar13 + 0xc) | 0x80;
    }
    else {
      bVar21 = bVar3 & bVar22 & 0xf;
      if ((bVar3 & 0xf) != bVar21) {
LAB_1407b9b8:
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_1407bbb0,DAT_1407bbac,bVar21,bVar22 & 0xf);
      }
      uVar20 = uVar4;
      if (uVar24 != 0) {
        uVar20 = uVar18;
      }
      bVar17 = bVar17 | 0x80 | bVar3 & 0xf;
      bVar22 = *(byte *)(iVar9 + 8) & *(byte *)(iVar13 + 0xc) & 0x7f;
    }
    uVar7 = 0xf;
    *param_4 = 0xf;
    cVar23 = *(char *)(iVar5 + 0x11);
    if (cVar23 == '\0') {
      uVar12 = 0x11;
LAB_1407bb2c:
      cVar2 = *(char *)(param_2 + 3);
    }
    else {
      if (*(short *)(param_2 + 4) == 2) {
        uVar7 = 0x13;
        uVar12 = 0x15;
        *param_4 = 0x13;
        goto LAB_1407bb2c;
      }
      cVar2 = *(char *)(param_2 + 3);
      uVar12 = 0x11;
      cVar23 = '\0';
    }
    if ((cVar2 != '\0') && (*(char *)(iVar19 + 0x10) != '\0')) {
      *param_4 = uVar12;
      uVar7 = uVar12;
    }
    uVar25 = FUN_140759b8(uVar7);
    iVar13 = (int)((ulonglong)uVar25 >> 0x20);
    puVar10 = (undefined4 *)uVar25;
    if (puVar10 != (undefined4 *)0x0) {
      if (bVar1 <= bVar14) {
        bVar14 = bVar1;
      }
      *param_3 = puVar10;
      *puVar10 = DAT_1407bbb8;
      puVar10[1] = CONCAT22(uStack_36,0xff00);
      puVar10[2] = CONCAT13(0x4c,CONCAT12(bVar14,uStack_34));
      *(byte *)((int)puVar10 + 0xe) = bVar22;
      *(ushort *)(puVar10 + 3) = uVar20 | (ushort)bVar17 << 8;
      puVar11 = *(undefined1 **)(param_1 + 0x74);
      *puVar11 = 0xff;
      puVar11[1] = *(undefined1 *)((int)puVar10 + 3);
      FUN_140e5278(puVar11 + 2,puVar10 + 1);
      iVar13 = DAT_1407bbbc;
      if (cVar23 == '\0') {
        puVar16 = (undefined2 *)((int)puVar10 + 0xf);
        iVar13 = extraout_r1;
      }
      else {
        puVar16 = (undefined2 *)((int)puVar10 + 0x13);
        *(int *)((int)puVar10 + 0xf) = DAT_1407bbbc;
      }
      uVar6 = 0;
      if ((*(char *)(param_2 + 3) != '\0') && (uVar6 = 0, *(char *)(iVar19 + 0x10) != '\0')) {
        uVar6 = 0;
        *puVar16 = 8;
      }
      goto LAB_1407b9cc;
    }
  }
LAB_1407b9ca:
  uVar6 = 1;
LAB_1407b9cc:
  if ((*DAT_1407bba4 ^ uVar8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc(uVar6,iVar13,*DAT_1407bba4 ^ uVar8,0);
  }
  return;
}

