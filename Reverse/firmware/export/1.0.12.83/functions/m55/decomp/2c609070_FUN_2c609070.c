/* FUN_2c609070 @ 0x2c609070 */

void FUN_2c609070(int param_1)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  ushort uVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  
  iVar18 = *(int *)(param_1 + 0x28);
  if (iVar18 == 0) {
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + *(short *)(param_1 + 0x10);
    *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) + *(short *)(param_1 + 0x12);
    piVar11 = (int *)FUN_2c5ff4d8();
    uVar16 = *(ushort *)(param_1 + 0x14);
    iVar9 = *(int *)(param_1 + 0x20);
    uVar19 = (uint)*(byte *)(*piVar11 + 0x18);
    if ((short)uVar16 < 0) {
      uVar16 = -uVar16;
    }
    uVar2 = (ushort)*(byte *)(*piVar11 + 0x18);
    uVar17 = *(ushort *)(param_1 + 0x16);
    if ((short)uVar17 < 0) {
      uVar17 = -uVar17;
    }
    bVar3 = uVar17 < uVar16;
    bVar4 = !bVar3;
    if (iVar9 == 0) {
      return;
    }
    bVar5 = 0;
LAB_2c6091d0:
    iVar10 = FUN_2c606b94(iVar9,0x10);
    if (iVar10 == 0) {
      cVar6 = FUN_2c606b94(iVar9,0x100);
      if ((cVar6 != '\x01') && (bVar3)) goto LAB_2c609216;
      cVar6 = FUN_2c606b94(iVar9,0x200);
joined_r0x2c609206:
      if (((cVar6 != '\x01') && (bVar4)) || (iVar9 = FUN_2c6041d4(iVar9), iVar9 == 0))
      goto LAB_2c609216;
      goto LAB_2c6091d0;
    }
    uVar8 = FUN_2c604a04(iVar9);
    bVar21 = (uVar8 & 1) == 0;
    bVar22 = (uVar8 & 2) != 0;
    bVar23 = (uVar8 & 4) == 0;
    bVar24 = (uVar8 & 8) != 0;
    iVar10 = FUN_2c604a44(iVar9);
    iVar12 = FUN_2c604a50(iVar9);
    iVar13 = FUN_2c605068(iVar9);
    iVar14 = FUN_2c605090(iVar9);
    if ((iVar10 < 1) && (iVar12 < 1)) {
      if ((0 < iVar14) || (0 < iVar13)) goto LAB_2c6093b0;
LAB_2c609302:
      cVar6 = FUN_2c606b94(iVar9,0x100);
      if ((cVar6 != '\x01') && (bVar3)) goto LAB_2c609216;
      cVar6 = FUN_2c606b94(iVar9,0x200);
      goto joined_r0x2c609206;
    }
    if (((!bVar23 && bVar4) && ((short)uVar2 <= *(short *)(param_1 + 0x16))) ||
       ((bVar24 && bVar4 && ((int)*(short *)(param_1 + 0x16) <= (int)-uVar19)))) {
      bVar5 = 0xc;
      iVar18 = iVar9;
    }
    if ((0 < iVar13) || (0 < iVar14)) {
LAB_2c6093b0:
      if (((!bVar21 && bVar3) && ((short)uVar2 <= *(short *)(param_1 + 0x14))) ||
         ((bVar22 && bVar3 && ((int)*(short *)(param_1 + 0x14) <= (int)-uVar19)))) {
        bVar5 = 3;
        iVar18 = iVar9;
      }
    }
    if (iVar13 < 1) {
      if (0 < iVar14) {
LAB_2c6093ea:
        if ((bVar22 && bVar3) && ((int)*(short *)(param_1 + 0x14) <= (int)-uVar19))
        goto LAB_2c60941a;
      }
LAB_2c6093fa:
      if (((iVar10 < 1 || (bVar23 || !bVar4)) || (*(short *)(param_1 + 0x16) < (short)uVar2)) &&
         ((iVar12 < 1 || (!bVar24 || !bVar4) || ((int)-uVar19 < (int)*(short *)(param_1 + 0x16)))))
      goto LAB_2c609302;
    }
    else if (iVar14 < 1) {
      if ((bVar21 || !bVar3) || (*(short *)(param_1 + 0x14) < (short)uVar2)) goto LAB_2c6093fa;
    }
    else if ((bVar21 || !bVar3) || (*(short *)(param_1 + 0x14) < (short)uVar2)) goto LAB_2c6093ea;
LAB_2c60941a:
    if (bVar3) {
      bVar15 = 3;
    }
    else {
      bVar15 = 0xc;
    }
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf0 | bVar15;
LAB_2c609216:
    if (iVar18 == 0) {
      return;
    }
    *(int *)(param_1 + 0x28) = iVar18;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf0 | bVar5;
    iVar9 = FUN_2c606b94(iVar18,0x80);
    if (iVar9 == 0) {
      FUN_2c62a624(param_1 + 0x30,DAT_2c6094d4,DAT_2c6094d4,0x1fff,0x1fff);
      iVar9 = (int)*(short *)(param_1 + 0x34);
LAB_2c609252:
      if (*(short *)(param_1 + 0x30) == 0) {
        *(undefined2 *)(param_1 + 0x30) = 0xe001;
      }
      if (iVar9 == 0) {
        *(undefined2 *)(param_1 + 0x34) = 0x1fff;
      }
    }
    else {
      iVar9 = FUN_2c604a20(iVar18);
      if (iVar9 == 2) {
        uVar7 = FUN_2c608cbc(iVar18,(int)*(short *)(iVar18 + 0x1a),0x1fff,0);
        *(undefined2 *)(param_1 + 0x32) = uVar7;
        uVar7 = FUN_2c608cbc(iVar18,DAT_2c6095f0,(int)*(short *)(iVar18 + 0x1a),0);
        *(undefined2 *)(param_1 + 0x36) = uVar7;
      }
      else if (iVar9 == 3) {
        iVar9 = (int)(short)((*(short *)(iVar18 + 0x1a) + 1) - *(short *)(iVar18 + 0x16));
        if (iVar9 < 0) {
          iVar9 = iVar9 + 1;
        }
        sVar1 = *(short *)(iVar18 + 0x16) + (short)(iVar9 >> 1);
        uVar7 = FUN_2c608cbc(iVar18,(int)(short)(sVar1 + 1),0x1fff,0);
        *(undefined2 *)(param_1 + 0x32) = uVar7;
        uVar7 = FUN_2c608cbc(iVar18,DAT_2c6095f0,(int)(short)(sVar1 + -1),0);
        *(undefined2 *)(param_1 + 0x36) = uVar7;
      }
      else if (iVar9 == 1) {
        uVar7 = FUN_2c608cbc(iVar18,(int)(short)(*(short *)(iVar18 + 0x16) + 1),0x1fff,0);
        *(undefined2 *)(param_1 + 0x32) = uVar7;
        uVar7 = FUN_2c608cbc(iVar18,DAT_2c6095f0,(int)(short)(*(short *)(iVar18 + 0x16) + -1),0);
        *(undefined2 *)(param_1 + 0x36) = uVar7;
      }
      else {
        *(undefined2 *)(param_1 + 0x32) = 0xe001;
        *(undefined2 *)(param_1 + 0x36) = 0x1fff;
      }
      iVar9 = FUN_2c604a14(iVar18);
      if (iVar9 == 2) {
        uVar7 = FUN_2c608dec(iVar18,(int)*(short *)(iVar18 + 0x18),0x1fff,0);
        *(undefined2 *)(param_1 + 0x30) = uVar7;
        iVar9 = FUN_2c608dec(iVar18,DAT_2c6095f0,(int)*(short *)(iVar18 + 0x18),0);
        *(short *)(param_1 + 0x34) = (short)iVar9;
        goto LAB_2c609252;
      }
      if (iVar9 == 3) {
        iVar9 = (int)(short)((*(short *)(iVar18 + 0x18) + 1) - *(short *)(iVar18 + 0x14));
        if (iVar9 < 0) {
          iVar9 = iVar9 + 1;
        }
        sVar1 = *(short *)(iVar18 + 0x14) + (short)(iVar9 >> 1);
        uVar7 = FUN_2c608dec(iVar18,(int)(short)(sVar1 + 1),0x1fff,0);
        *(undefined2 *)(param_1 + 0x30) = uVar7;
        iVar9 = FUN_2c608dec(iVar18,DAT_2c6095f0,(int)(short)(sVar1 + -1),0);
        *(short *)(param_1 + 0x34) = (short)iVar9;
        goto LAB_2c609252;
      }
      if (iVar9 == 1) {
        uVar7 = FUN_2c608dec(iVar18,(int)*(short *)(iVar18 + 0x14),0x1fff,0);
        *(undefined2 *)(param_1 + 0x30) = uVar7;
        iVar9 = FUN_2c608dec(iVar18,DAT_2c6095f0,(int)*(short *)(iVar18 + 0x14),0);
        *(short *)(param_1 + 0x34) = (short)iVar9;
        goto LAB_2c609252;
      }
      *(undefined2 *)(param_1 + 0x30) = 0xe001;
      *(undefined2 *)(param_1 + 0x34) = 0x1fff;
    }
    if (*(short *)(param_1 + 0x32) == 0) {
      *(undefined2 *)(param_1 + 0x32) = 0xe001;
    }
    if (*(short *)(param_1 + 0x36) == 0) {
      *(undefined2 *)(param_1 + 0x36) = 0x1fff;
    }
    FUN_2c602340(iVar18,9,0);
    if ((int)((uint)*(byte *)(param_1 + 1) << 0x1e) < 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x3c) & 0xf) == 3) {
    iVar9 = FUN_2c605090(iVar18);
    uVar19 = FUN_2c605068(iVar18);
    uVar8 = (uint)*(short *)(param_1 + 0x10);
    iVar10 = FUN_2c606b94(iVar18,0x20);
    if (iVar10 == 0) {
      if ((int)(iVar9 + uVar8) < 0) {
        uVar8 = (uint)(short)-(short)iVar9;
      }
      uVar20 = uVar8 & ~((int)(uVar19 - uVar8) >> 0x20);
      if ((int)(uVar19 - uVar8) < 0) {
        uVar20 = uVar19;
      }
    }
    else {
      uVar20 = FUN_2c608f1c(iVar18,uVar8,uVar19,iVar9,3);
    }
    iVar9 = FUN_2c604a04(iVar18);
    if (((int)uVar20 < 1) || (iVar9 << 0x1f < 0)) {
      if (-1 < iVar9 << 0x1e) {
        uVar20 = (uint)(short)((ushort)uVar20 & ~(ushort)((int)uVar20 >> 0x1f));
      }
    }
    else {
      uVar20 = 0;
    }
    uVar19 = 0;
    goto LAB_2c6090de;
  }
  uVar8 = FUN_2c604a44();
  iVar9 = FUN_2c604a50(iVar18);
  uVar19 = (uint)*(short *)(param_1 + 0x12);
  iVar10 = FUN_2c606b94(iVar18,0x20);
  if (iVar10 == 0) {
    if ((int)(iVar9 + uVar19) < 0) {
      uVar19 = (uint)(short)-(short)iVar9;
    }
    if ((int)(uVar8 - uVar19) < 0) {
      uVar19 = uVar8;
    }
    uVar8 = FUN_2c604a04(iVar18);
    if ((uVar8 & 4) != 0) goto LAB_2c609162;
LAB_2c6090d4:
    if ((int)uVar19 < 1) goto LAB_2c609162;
  }
  else {
    uVar19 = FUN_2c608f1c(iVar18,uVar19,uVar8,iVar9,0xc);
    uVar8 = FUN_2c604a04(iVar18);
    if ((uVar8 & 4) == 0) goto LAB_2c6090d4;
LAB_2c609162:
    if (((int)(uVar8 << 0x1c) < 0) || (-1 < (int)(uVar19 << 0x10))) {
      uVar20 = 0;
      goto LAB_2c6090de;
    }
  }
  uVar19 = 0;
  uVar20 = uVar19;
LAB_2c6090de:
  sVar1 = *(short *)(param_1 + 0x16);
  iVar9 = uVar19 + (int)sVar1;
  if (iVar9 < *(short *)(param_1 + 0x32)) {
    uVar19 = (uint)(short)(*(short *)(param_1 + 0x32) - sVar1);
    iVar9 = uVar19 + (int)sVar1;
  }
  if (*(short *)(param_1 + 0x36) < iVar9) {
    uVar19 = (uint)(short)(*(short *)(param_1 + 0x36) - sVar1);
  }
  sVar1 = *(short *)(param_1 + 0x14);
  iVar9 = uVar20 + (int)sVar1;
  if (iVar9 < *(short *)(param_1 + 0x30)) {
    uVar20 = (uint)(short)(*(short *)(param_1 + 0x30) - sVar1);
    iVar9 = uVar20 + (int)sVar1;
  }
  if (*(short *)(param_1 + 0x34) < iVar9) {
    uVar20 = (uint)(short)(*(short *)(param_1 + 0x34) - sVar1);
  }
  FUN_2c6052b8(iVar18,uVar20,uVar19);
  if (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1e)) {
    *(short *)(param_1 + 0x14) = (short)uVar20 + *(short *)(param_1 + 0x14);
    *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) + (short)uVar19;
  }
  return;
}

