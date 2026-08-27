/* FUN_2c4bc9b4 @ 0x2c4bc9b4 */

int FUN_2c4bc9b4(uint param_1,char *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 unaff_lr;
  bool bVar18;
  uint local_40;
  int local_3c;
  ushort *local_38;
  ushort *local_34;
  ushort local_30;
  ushort local_2e;
  int local_2c;
  
  puVar12 = DAT_2c4bcc8c;
  local_2c = *DAT_2c4bcc88;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bce5c,param_1,param_3,0);
  }
  iVar8 = 0;
  bVar18 = (bool)isCurrentModePrivileged();
  if (bVar18) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    *DAT_2c4bcc8c = 0x2c4bc9da;
    puVar12[1] = unaff_lr;
  }
  iVar10 = DAT_2c4bccb0;
  bVar18 = (bool)isCurrentModePrivileged();
  if (bVar18) {
    setBasePriority(0x40);
  }
  iVar11 = DAT_2c4bccb0 + param_1 * 0x70;
  if (*(char *)(iVar11 + 0xc) == '\0') {
    *(undefined1 *)(iVar11 + 0xc) = 1;
    iVar11 = 0;
  }
  else {
    iVar11 = 0x40000000;
  }
  if (iVar8 == 0) {
    *DAT_2c4bcc8c = 0xffffffff;
  }
  bVar18 = (bool)isCurrentModePrivileged();
  if (bVar18) {
    setBasePriority(iVar8);
  }
  if (iVar11 != 0) goto LAB_2c4bcc4c;
  uVar5 = *(undefined4 *)(param_2 + 4);
  uVar9 = *(undefined4 *)(param_2 + 8);
  puVar12 = (undefined4 *)(iVar10 + param_1 * 0x70);
  *puVar12 = *(undefined4 *)param_2;
  puVar12[1] = uVar5;
  puVar12[2] = uVar9;
  iVar8 = DAT_2c4bcc90;
  *(undefined1 *)(puVar12 + 0xc) = 0;
  *(undefined1 *)((int)puVar12 + 0xd) = 0;
  *(undefined2 *)((int)puVar12 + 0xe) = 0;
  pcVar6 = *(code **)(iVar8 + param_1 * 0xc + 4);
  *(undefined1 *)(puVar12 + 0x18) = 0;
  *(byte *)((int)puVar12 + 1) = *(byte *)((int)puVar12 + 1) & 0xfd;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)();
  }
  iVar8 = DAT_2c4bcc90 + param_1 * 0xc;
  uVar1 = *(undefined1 *)(iVar8 + 8);
  FUN_2c673e48(uVar1);
  uVar2 = *(undefined1 *)(iVar8 + 9);
  FUN_2c673e48(uVar2);
  FUN_2c674438(uVar1);
  FUN_2c674438(uVar2);
  puVar15 = *(uint **)(DAT_2c4bcc90 + param_1 * 0xc);
  puVar15[0xc] = 0;
  puVar15[0x1b] = puVar15[0x1b] & 0xfffffffe;
  *puVar15 = 0;
  puVar15[1] = DAT_2c4bcc94 & puVar15[1] | 0x18;
  iVar8 = iVar10 + param_1 * 0x70;
  if ((int)((uint)*(byte *)(iVar8 + 1) << 0x1d) < 0) {
    *puVar15 = *puVar15 | 0x40;
    *puVar15 = *puVar15 | 1;
  }
  else {
    *puVar15 = *puVar15 & 0xffffffbf;
    *puVar15 = *puVar15 & 0xfffffffe;
    puVar15[2] = *(uint *)(iVar8 + 8);
  }
  iVar8 = iVar10 + param_1 * 0x70;
  uVar16 = *(uint *)(iVar8 + 4);
  uVar13 = (uint)*(ushort *)(iVar8 + 2);
  if (DAT_2c4bcc98 < uVar16) {
    local_40 = uVar16 * 0x32;
    local_3c = 3;
  }
  else {
    if (DAT_2c4bce58 < uVar16) {
      local_3c = 2;
    }
    else {
      local_3c = 1;
    }
    local_40 = uVar16 * 0x28;
  }
  uVar4 = FUN_2c674348();
  bVar18 = uVar4 < local_40;
  if (bVar18) {
    uVar4 = uVar4 << 1;
  }
  FUN_2c673e58(bVar18);
  puVar15[0x2a] = puVar15[0x2a] & 0xffffff3f;
  uVar16 = ((uVar16 - 1) + uVar4) / uVar16;
  uVar17 = (uint)((ulonglong)DAT_2c4bcc9c * (ulonglong)uVar4 >> 0x32);
  if (local_3c == 2) {
    if (uVar13 == 0) goto LAB_2c4bcdb2;
LAB_2c4bccc4:
    iVar8 = uVar13 + 0x1e;
LAB_2c4bccc8:
    local_34 = &local_2e;
    local_38 = &local_30;
    uVar4 = (uint)((ulonglong)DAT_2c4bce3c * (ulonglong)(uVar17 * 0x32) >> 0x26);
    uVar13 = ((uint)((ulonglong)DAT_2c4bce3c * (ulonglong)(uVar17 * iVar8) >> 0x20) & 0x3fffff) >> 6
    ;
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    bVar18 = uVar13 < uVar16;
    if (bVar18) {
      uVar16 = uVar16 - uVar13;
    }
    puVar15[0x28] = uVar4;
    if (!bVar18) {
      uVar16 = 0;
    }
    FUN_2c4bbedc(param_1,uVar16,0x514,600,uVar4,uVar17,local_38,local_34);
    puVar15[7] = (uint)local_2e;
    puVar15[8] = (uint)local_30;
    if (local_3c == 2) {
      *puVar15 = *puVar15 & 0xfffffff9 | 4;
      iVar8 = 600;
    }
    else {
      iVar8 = 0x1e;
    }
  }
  else {
    if (local_3c == 3) {
      if (uVar13 == 0) {
        iVar8 = 0x3c;
      }
      else {
        iVar8 = uVar13 + 0x1e;
      }
      uVar14 = (uint)((ulonglong)DAT_2c4bce3c * (ulonglong)(uVar17 * 10) >> 0x26);
      uVar7 = ((uint)((ulonglong)DAT_2c4bce3c * (ulonglong)(iVar8 * uVar17) >> 0x20) & 0x3fffff) >>
              6;
      if (uVar14 == 0) {
        uVar14 = 1;
      }
      puVar15[0x29] = uVar14;
      if (uVar7 < uVar16) {
        iVar8 = uVar16 - uVar7;
      }
      else {
        iVar8 = 0;
      }
      FUN_2c4bbedc(param_1,iVar8,0xa0,0x3c,uVar14,uVar17,&local_30,&local_2e);
      iVar8 = DAT_2c4bce40;
      puVar15[9] = (uint)local_2e;
      puVar15[10] = (uint)local_30;
      *puVar15 = *puVar15 | 6;
      uVar16 = (uint)((ulonglong)DAT_2c4bce44 * (ulonglong)(iVar8 + uVar4 >> 7) >> 0x24);
      puVar15[0x2a] = puVar15[0x2a] | 0xc0;
      if (uVar13 != 0) goto LAB_2c4bccc4;
LAB_2c4bcdb2:
      iVar8 = 0x50;
      goto LAB_2c4bccc8;
    }
    if (uVar13 == 0) {
      iVar8 = 0x14a;
    }
    else {
      iVar8 = uVar13 + 0x1e;
    }
    uVar13 = (uint)((ulonglong)DAT_2c4bcca0 * (ulonglong)(uVar17 * 0x32) >> 0x26);
    uVar4 = ((uint)((ulonglong)DAT_2c4bcca0 * (ulonglong)(iVar8 * uVar17) >> 0x20) & 0x3fffff) >> 6;
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    uVar7 = uVar16;
    if (uVar4 < uVar16) {
      uVar7 = uVar16 - uVar4;
    }
    puVar15[0x28] = uVar13;
    if (uVar16 <= uVar4) {
      uVar7 = 0;
    }
    FUN_2c4bbedc(param_1,uVar7,0x125c,4000,uVar13,uVar17,&local_30,&local_2e);
    puVar15[5] = (uint)local_2e;
    puVar15[6] = (uint)local_30;
    *puVar15 = *puVar15 & 0xfffffff9 | 2;
    iVar8 = 0x708;
  }
  puVar15[0x1f] = (uint)((ulonglong)DAT_2c4bcca0 * (ulonglong)(iVar8 * uVar17 + 999) >> 0x26);
  if (*(char *)(iVar10 + param_1 * 0x70) == '\x01') {
    puVar15[0xe] = 0;
    puVar15[0xf] = 1;
    *puVar15 = *puVar15 | 0x20;
    puVar15[0x1b] = puVar15[0x1b] | 1;
  }
  uVar5 = DAT_2c4bce50;
  iVar8 = DAT_2c4bcca8;
  if (*param_2 == '\x01') {
    uVar16 = (uint)*(char *)(DAT_2c4bce48 + param_1 * 0xc + 10);
    *(undefined4 *)(DAT_2c4bce4c + param_1 * 4) = 0;
    iVar8 = DAT_2c4bce54;
    *(undefined4 *)(*(int *)(DAT_2c4bce54 + 8) + (uVar16 + 0x10) * 4) = uVar5;
    DataSynchronizationBarrier(0xf);
    if (-1 < (int)uVar16) goto LAB_2c4bcc10;
LAB_2c4bcde4:
    *(undefined1 *)((uVar16 & 0xf) + iVar8 + 0x14) = 0xa0;
  }
  else {
    if (*param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4bce64,DAT_2c4bce60,param_1);
    }
    if ((int)((uint)(byte)param_2[1] << 0x1e) < 0) {
      iVar11 = -0x80000000;
      goto LAB_2c4bcc4c;
    }
    uVar16 = (uint)*(char *)(DAT_2c4bcc90 + param_1 * 0xc + 10);
    *(undefined4 *)(*(int *)(DAT_2c4bcca8 + 8) + (uVar16 + 0x10) * 4) = DAT_2c4bcca4;
    DataSynchronizationBarrier(0xf);
    if ((int)uVar16 < 0) goto LAB_2c4bcde4;
LAB_2c4bcc10:
    *(undefined1 *)(iVar8 + uVar16 + -0x900) = 0xa0;
  }
  iVar8 = DAT_2c4bccac;
  bVar3 = *(byte *)(DAT_2c4bcc90 + param_1 * 0xc + 10);
  if (bVar3 < 0x48) {
    iVar10 = 1 << (bVar3 & 0x1f);
    *(int *)(DAT_2c4bccac + ((uint)(int)(char)bVar3 >> 5) * 4 + 0x180) = iVar10;
    *(int *)(iVar8 + ((uint)(int)(char)bVar3 >> 5) * 4) = iVar10;
  }
LAB_2c4bcc4c:
  if (*DAT_2c4bcc88 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar11;
}

