/* FUN_1407b560 @ 0x1407b560 */

undefined1 FUN_1407b560(int param_1,int param_2,undefined4 *param_3,undefined2 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined2 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  ushort uVar20;
  byte bVar21;
  int iVar22;
  char cVar23;
  uint unaff_r11;
  bool bVar24;
  ushort local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  bVar21 = 0;
  if (param_2 == 0) {
    return 1;
  }
  iVar22 = *(int *)(param_1 + 0x6c);
  iVar17 = *(int *)(param_2 + 8);
  iVar11 = *(int *)(*(int *)(iVar22 + 8) + 2);
  bVar1 = *(byte *)(iVar17 + 7);
  bVar2 = *(byte *)(iVar11 + 3);
  bVar8 = *(byte *)(iVar17 + 6) >> 4;
  bVar3 = *(byte *)(iVar17 + 8);
  bVar4 = *(byte *)(iVar17 + 9);
  bVar5 = *(byte *)(iVar11 + 4);
  bVar6 = *(byte *)(iVar11 + 5);
  if ((bVar8 & 8) == 0) {
    bVar21 = *(byte *)(iVar17 + 5);
    if ((bVar21 & 1) == 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x14) = 0xac44;
LAB_1407b5be:
    uVar20 = bVar8 & 8;
    bVar21 = bVar21 & 1;
    uVar16 = (uint)*(byte *)(iVar17 + 6);
    if (-1 < (int)(uVar16 << 0x1d)) goto LAB_1407b60e;
LAB_1407b5c8:
    if (-1 < (int)((uint)*(byte *)(iVar11 + 2) << 0x1d)) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
      if (-1 < (int)((uint)*(byte *)(iVar17 + 6) << 0x1c)) {
        return 1;
      }
      goto LAB_1407b618;
    }
    *(undefined1 *)(param_1 + 0x1e) = 2;
    local_34 = 4;
  }
  else {
    bVar8 = *(byte *)(iVar11 + 2) >> 4;
    if ((bVar8 & 8) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0xac44;
      bVar21 = *(byte *)(iVar17 + 5);
      if ((bVar21 & 1) == 0) {
        return 1;
      }
      goto LAB_1407b5be;
    }
    *(undefined4 *)(param_1 + 0x14) = 48000;
    uVar16 = (uint)*(byte *)(iVar17 + 6);
    uVar20 = 8;
    if ((int)(uVar16 << 0x1d) < 0) goto LAB_1407b5c8;
LAB_1407b60e:
    if ((uVar16 & 8) == 0) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x1e) = 1;
LAB_1407b618:
    local_34 = 8;
  }
  iVar9 = DAT_1407b73c;
  bVar24 = *(char *)(iVar17 + 7) < '\0';
  if (bVar24) {
    unaff_r11 = (uint)*(byte *)(iVar11 + 3);
  }
  uVar10 = 0xc;
  *param_4 = 0xc;
  cVar23 = *(char *)(iVar9 + 0x11);
  if (bVar24) {
    uVar16 = unaff_r11 >> 7;
  }
  else {
    uVar16 = 0;
  }
  if (cVar23 == '\0') {
    uVar15 = 0xe;
  }
  else {
    if (*(short *)(param_2 + 4) != 2) {
      cVar7 = *(char *)(param_2 + 3);
      uVar15 = 0xe;
      cVar23 = '\0';
      goto joined_r0x1407b70c;
    }
    uVar10 = 0x10;
    uVar15 = 0x12;
    *param_4 = 0x10;
  }
  cVar7 = *(char *)(param_2 + 3);
joined_r0x1407b70c:
  if ((cVar7 != '\0') && (*(char *)(iVar22 + 0x10) != '\0')) {
    *param_4 = uVar15;
    uVar10 = uVar15;
  }
  puVar12 = (undefined4 *)FUN_140759b8(uVar10);
  if (puVar12 == (undefined4 *)0x0) {
    return 1;
  }
  *param_3 = puVar12;
  uVar13 = (uint)bVar4 | (uint)bVar3 << 8 | (bVar1 & 0x7f) << 0x10;
  uVar18 = (uint)bVar6 | (uint)bVar5 << 8 | (bVar2 & 0x7f) << 0x10;
  if (uVar13 <= uVar18) {
    uVar18 = uVar13;
  }
  *puVar12 = DAT_1407b740;
  local_30 = CONCAT13(bVar21,0x800200);
  local_2c = CONCAT22((ushort)((uVar18 & 0xff) << 8) | (ushort)(uVar18 >> 8) & 0xff,
                      local_34 | uVar20 << 4 | (ushort)(((uVar18 & 0x3fffff) >> 0x10) << 8) |
                      (ushort)(uVar16 << 0xf));
  puVar12[1] = local_30;
  puVar12[2] = local_2c;
  puVar14 = *(undefined1 **)(param_1 + 0x74);
  *puVar14 = 2;
  puVar14[1] = *(undefined1 *)((int)puVar12 + 3);
  FUN_140e5278(puVar14 + 2,puVar12 + 1);
  if (cVar23 == '\0') {
    puVar19 = puVar12 + 3;
  }
  else {
    puVar19 = puVar12 + 4;
    puVar12[3] = DAT_1407b744;
  }
  if (*(char *)(param_2 + 3) != '\0') {
    if (*(char *)(iVar22 + 0x10) != '\0') {
      *(undefined2 *)puVar19 = 8;
      return 0;
    }
    return 0;
  }
  return 0;
}

