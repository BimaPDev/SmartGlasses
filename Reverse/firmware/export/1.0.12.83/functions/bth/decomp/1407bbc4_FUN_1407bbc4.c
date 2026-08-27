/* FUN_1407bbc4 @ 0x1407bbc4 */

void FUN_1407bbc4(int param_1,int param_2,undefined4 *param_3,undefined2 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined2 uVar9;
  int iVar10;
  int extraout_r1;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  uint uVar14;
  int iVar15;
  char cVar16;
  ushort uVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  undefined2 uStack_36;
  undefined2 uVar20;
  ushort uVar21;
  
  uVar14 = *DAT_1407bd1c;
  uVar19 = 0;
  uVar21 = 0;
  uStack_36 = (undefined2)*(undefined4 *)(DAT_1407bd20 + 0x14);
  uVar20 = (undefined2)((uint)*(undefined4 *)(DAT_1407bd20 + 0x14) >> 0x10);
  iVar10 = 0;
  if (param_2 != 0) {
    iVar15 = *(int *)(param_1 + 0x6c);
    iVar6 = *(int *)(param_2 + 8);
    iVar10 = *(int *)(*(int *)(iVar15 + 8) + 2);
    uVar11 = (uint)(*(byte *)(iVar6 + 10) & *(byte *)(iVar10 + 6));
    if ((int)(uVar11 << 0x1d) < 0) {
      uVar17 = 4;
      *(undefined4 *)(param_1 + 0x14) = DAT_1407bd2c;
    }
    else if ((int)(uVar11 << 0x1b) < 0) {
      uVar17 = 0x10;
      *(undefined4 *)(param_1 + 0x14) = 48000;
    }
    else {
      if (-1 < (int)(uVar11 << 0x1a)) goto LAB_1407bcc6;
      uVar17 = 0x20;
      *(undefined4 *)(param_1 + 0x14) = 0xac44;
    }
    iVar2 = DAT_1407bd24;
    bVar1 = *(byte *)(iVar6 + 0xb) & *(byte *)(iVar10 + 7);
    uVar12 = (uint)bVar1;
    uVar11 = uVar12 & 1;
    if ((bVar1 & 1) == 0) {
      iVar10 = uVar12 << 0x1e;
      if (iVar10 < 0) {
        uVar11 = 2;
      }
      else {
        if (-1 < (int)(uVar12 << 0x1d)) goto LAB_1407bcc6;
        uVar11 = 4;
      }
    }
    uVar5 = 0xe;
    *param_4 = 0xe;
    cVar16 = *(char *)(iVar2 + 0x11);
    if (cVar16 == '\0') {
      uVar9 = 0x10;
    }
    else if (*(short *)(param_2 + 4) == 2) {
      uVar5 = 0x12;
      uVar9 = 0x14;
      *param_4 = 0x12;
    }
    else {
      uVar9 = 0x10;
      cVar16 = '\0';
    }
    if ((*(char *)(param_2 + 3) != '\0') && (*(char *)(iVar15 + 0x10) != '\0')) {
      *param_4 = uVar9;
      uVar5 = uVar9;
    }
    uVar18 = FUN_140759b8(uVar5);
    uVar3 = DAT_1407bd28;
    iVar10 = (int)((ulonglong)uVar18 >> 0x20);
    puVar7 = (undefined4 *)uVar18;
    if (puVar7 != (undefined4 *)0x0) {
      uVar21 = uVar17 | (ushort)(uVar11 << 8);
      *param_3 = puVar7;
      *puVar7 = uVar3;
      puVar7[1] = CONCAT22(uStack_36,CONCAT11(0xff,uVar19));
      puVar7[2] = CONCAT22(0xaa,uVar20);
      *(ushort *)(puVar7 + 3) = uVar21;
      puVar8 = *(undefined1 **)(param_1 + 0x74);
      *puVar8 = 0xff;
      puVar8[1] = *(undefined1 *)((int)puVar7 + 3);
      FUN_140e5278(puVar8 + 2,puVar7 + 1);
      if (cVar16 == '\0') {
        puVar13 = (undefined2 *)((int)puVar7 + 0xe);
      }
      else {
        puVar13 = (undefined2 *)((int)puVar7 + 0x12);
        *(undefined4 *)((int)puVar7 + 0xe) = DAT_1407bd30;
      }
      uVar4 = 0;
      iVar10 = extraout_r1;
      if ((*(char *)(param_2 + 3) != '\0') && (uVar4 = 0, *(char *)(iVar15 + 0x10) != '\0')) {
        uVar4 = 0;
        *puVar13 = 8;
      }
      goto LAB_1407bcc8;
    }
  }
LAB_1407bcc6:
  uVar4 = 1;
LAB_1407bcc8:
  if ((*DAT_1407bd1c ^ uVar14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar4,iVar10,*DAT_1407bd1c ^ uVar14,0,uVar19,uVar20,uVar21);
}

