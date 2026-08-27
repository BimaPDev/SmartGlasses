/* FUN_1407b748 @ 0x1407b748 */

void FUN_1407b748(int param_1,int param_2,undefined4 *param_3,undefined2 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int extraout_r1;
  undefined2 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined2 *puVar13;
  byte bVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  ushort uVar18;
  uint uVar19;
  ushort uVar20;
  int iVar21;
  char cVar22;
  undefined8 uVar23;
  undefined4 local_34;
  
  uVar17 = *DAT_1407b8e4;
  uVar5 = *DAT_1407b8e8;
  iVar8 = DAT_1407b8e8[1];
  uVar11 = DAT_1407b8e8[2];
  uVar15 = DAT_1407b8e8[3];
  iVar9 = iVar8;
  if (param_2 != 0) {
    iVar21 = *(int *)(param_1 + 0x6c);
    iVar12 = *(int *)(param_2 + 8);
    iVar16 = *(int *)(*(int *)(iVar21 + 8) + 2);
    bVar1 = *(byte *)(iVar12 + 10) & *(byte *)(iVar16 + 6);
    uVar19 = (uint)bVar1;
    if ((int)(uVar19 << 0x1b) < 0) {
      uVar18 = 0x10;
      *(undefined4 *)(param_1 + 0x14) = 48000;
    }
    else {
      iVar9 = uVar19 << 0x1a;
      if (iVar9 < 0) {
        uVar18 = 0x20;
        *(undefined4 *)(param_1 + 0x14) = 0xac44;
      }
      else if ((int)(uVar19 << 0x1d) < 0) {
        uVar18 = 4;
        *(undefined4 *)(param_1 + 0x14) = DAT_1407b904;
      }
      else {
        uVar18 = bVar1 & 1;
        if ((bVar1 & 1) == 0) goto LAB_1407b868;
        *(undefined4 *)(param_1 + 0x14) = DAT_1407b8fc;
      }
    }
    iVar9 = DAT_1407b8ec;
    uVar19 = (uint)(*(byte *)(iVar12 + 0xb) & *(byte *)(iVar16 + 7));
    uVar20 = *(byte *)(iVar16 + 7) & 0xf0;
    if ((int)(uVar19 << 0x1e) < 0) {
      uVar20 = uVar20 | 2;
    }
    else if (((int)(uVar19 << 0x1d) < 0) || (-1 < (int)(uVar19 << 0x1f))) {
      uVar20 = uVar20 | 4;
    }
    else {
      uVar20 = uVar20 | 1;
    }
    bVar1 = *(byte *)(iVar16 + 8);
    bVar14 = bVar1 & *(byte *)(iVar12 + 0xc) & 0xf;
    if (bVar14 != (bVar1 & 0xf)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_1407b8f8,DAT_1407b8f4,bVar14,*(byte *)(iVar12 + 0xc) & 0xf);
    }
    uVar4 = 0x11;
    *param_4 = 0x11;
    cVar22 = *(char *)(iVar9 + 0x11);
    if (cVar22 == '\0') {
      uVar10 = 0x13;
    }
    else if (*(short *)(param_2 + 4) == 2) {
      uVar4 = 0x15;
      uVar10 = 0x17;
      *param_4 = 0x15;
    }
    else {
      uVar10 = 0x13;
      cVar22 = '\0';
    }
    if ((*(char *)(param_2 + 3) != '\0') && (*(char *)(iVar21 + 0x10) != '\0')) {
      *param_4 = uVar10;
      uVar4 = uVar10;
    }
    uVar23 = FUN_140759b8(uVar4);
    uVar2 = DAT_1407b8f0;
    iVar9 = (int)((ulonglong)uVar23 >> 0x20);
    puVar6 = (undefined4 *)uVar23;
    if (puVar6 != (undefined4 *)0x0) {
      *param_3 = puVar6;
      local_34._3_1_ = (undefined1)((uint)uVar11 >> 0x18);
      local_34 = CONCAT13(local_34._3_1_,CONCAT12(bVar1,uVar18 | uVar20 << 8)) & 0xff0fffff |
                 0x100000;
      *puVar6 = uVar2;
      puVar6[1] = uVar5;
      puVar6[3] = local_34;
      puVar6[2] = iVar8;
      *(char *)(puVar6 + 4) = (char)uVar15;
      puVar7 = *(undefined1 **)(param_1 + 0x74);
      *puVar7 = 0xff;
      puVar7[1] = *(undefined1 *)((int)puVar6 + 3);
      FUN_140e5278(puVar7 + 2,puVar6 + 1);
      iVar9 = DAT_1407b900;
      if (cVar22 == '\0') {
        puVar13 = (undefined2 *)((int)puVar6 + 0x11);
        iVar9 = extraout_r1;
      }
      else {
        puVar13 = (undefined2 *)((int)puVar6 + 0x15);
        *(int *)((int)puVar6 + 0x11) = DAT_1407b900;
      }
      uVar3 = 0;
      if ((*(char *)(param_2 + 3) != '\0') && (uVar3 = 0, *(char *)(iVar21 + 0x10) != '\0')) {
        uVar3 = 0;
        *puVar13 = 8;
      }
      goto LAB_1407b86a;
    }
  }
LAB_1407b868:
  uVar3 = 1;
LAB_1407b86a:
  if ((*DAT_1407b8e4 ^ uVar17) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar3,iVar9,*DAT_1407b8e4 ^ uVar17,0);
}

