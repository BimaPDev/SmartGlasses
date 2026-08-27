/* FUN_2c6095f4 @ 0x2c6095f4 */

void FUN_2c6095f4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  undefined8 uVar17;
  
  iVar15 = *(int *)(param_1 + 0x28);
  if (iVar15 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x3c) & 0xf) == 0) {
    return;
  }
  piVar4 = (int *)FUN_2c5ff4d8();
  bVar1 = *(byte *)(*piVar4 + 0x19);
  iVar5 = FUN_2c606b94(iVar15,0x40);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar5 = FUN_2c604a14(iVar15);
  uVar17 = FUN_2c604a20(iVar15);
  uVar10 = (undefined4)((ulonglong)uVar17 >> 0x20);
  bVar16 = *(byte *)(param_1 + 0x3c) & 0xf;
  if (bVar16 == 0xc) {
    *(undefined2 *)(param_1 + 0x18) = 0;
    if ((int)uVar17 == 0) {
      iVar8 = (int)*(short *)(param_1 + 0x1a) * (100 - (uint)bVar1);
      lVar2 = (longlong)DAT_2c60991c * (longlong)iVar8;
      *(short *)(param_1 + 0x1a) = (short)(int)(lVar2 >> 0x25) - (short)(iVar8 >> 0x1f);
      iVar8 = FUN_2c604a50(iVar15,uVar10,(int)lVar2);
      uVar11 = FUN_2c604a44(iVar15);
      uVar13 = (uint)*(short *)(param_1 + 0x1a);
      iVar7 = FUN_2c606b94(iVar15,0x20);
      if (iVar7 == 0) {
        if ((int)(iVar8 + uVar13) < 0) {
          uVar13 = (uint)(short)-(short)iVar8;
        }
        uVar6 = uVar13 & ~((int)(uVar11 - uVar13) >> 0x20);
        if ((int)(uVar11 - uVar13) < 0) {
          uVar6 = uVar11;
        }
      }
      else {
        uVar6 = FUN_2c608f1c(iVar15,uVar13,uVar11,iVar8,0xc);
      }
      *(short *)(param_1 + 0x1a) = (short)uVar6;
      FUN_2c605120(iVar15,0,uVar6);
      if (*(int *)(param_1 + 0x18) != 0) {
        return;
      }
      goto LAB_2c609768;
    }
    iVar8 = (int)*(short *)(param_1 + 0x1a);
    piVar9 = (int *)FUN_2c5ff4d8();
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      do {
        iVar14 = (100 - (uint)*(byte *)(*piVar9 + 0x19)) * iVar8;
        iVar7 = (int)(short)((short)iVar7 + (short)iVar8);
        iVar8 = (int)(short)((short)(int)((longlong)DAT_2c60991c * (longlong)iVar14 >> 0x25) -
                            (short)(iVar14 >> 0x1f));
      } while (iVar8 != 0);
    }
    sVar12 = *(short *)(param_1 + 0x16);
    *(undefined2 *)(param_1 + 0x1a) = 0;
    iVar8 = iVar7 + sVar12;
    if (iVar8 < *(short *)(param_1 + 0x32)) {
      iVar7 = (int)(short)(*(short *)(param_1 + 0x32) - sVar12);
      iVar8 = iVar7 + sVar12;
    }
    if (*(short *)(param_1 + 0x36) < iVar8) {
      sVar12 = *(short *)(param_1 + 0x36) - sVar12;
      iVar7 = (int)sVar12;
    }
    else {
      sVar12 = (short)iVar7;
    }
    sVar3 = FUN_2c608cbc(iVar15,DAT_2c609920,0x1fff,iVar7);
    FUN_2c605120(iVar15,0,(int)(short)(sVar3 + sVar12),1);
    if (*(int *)(param_1 + 0x18) != 0) {
      return;
    }
  }
  else {
    if (bVar16 == 3) {
      *(undefined2 *)(param_1 + 0x1a) = 0;
      if (iVar5 == 0) {
        iVar8 = (int)*(short *)(param_1 + 0x18) * (100 - (uint)bVar1);
        lVar2 = (longlong)DAT_2c60991c * (longlong)iVar8;
        *(short *)(param_1 + 0x18) = (short)(int)(lVar2 >> 0x25) - (short)(iVar8 >> 0x1f);
        uVar11 = FUN_2c605068(iVar15,uVar10,(int)lVar2);
        iVar8 = FUN_2c605090(iVar15);
        uVar13 = (uint)*(short *)(param_1 + 0x18);
        iVar7 = FUN_2c606b94(iVar15,0x20);
        if (iVar7 == 0) {
          if ((int)(iVar8 + uVar13) < 0) {
            uVar13 = (uint)(short)-(short)iVar8;
          }
          uVar6 = uVar13 & ~((int)(uVar11 - uVar13) >> 0x20);
          if ((int)(uVar11 - uVar13) < 0) {
            uVar6 = uVar11;
          }
        }
        else {
          uVar6 = FUN_2c608f1c(iVar15,uVar13,uVar11,iVar8,3);
        }
        *(short *)(param_1 + 0x18) = (short)uVar6;
        FUN_2c605120(iVar15,uVar6,0);
      }
      else {
        iVar8 = (int)*(short *)(param_1 + 0x18);
        piVar9 = (int *)FUN_2c5ff4d8();
        if (iVar8 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = 0;
          do {
            iVar14 = (100 - (uint)*(byte *)(*piVar9 + 0x19)) * iVar8;
            iVar7 = (int)(short)((short)iVar7 + (short)iVar8);
            iVar8 = (int)(short)((short)(int)((longlong)DAT_2c60991c * (longlong)iVar14 >> 0x25) -
                                (short)(iVar14 >> 0x1f));
          } while (iVar8 != 0);
        }
        sVar12 = *(short *)(param_1 + 0x14);
        *(undefined2 *)(param_1 + 0x18) = 0;
        iVar8 = iVar7 + sVar12;
        if (iVar8 < *(short *)(param_1 + 0x30)) {
          iVar7 = (int)(short)(*(short *)(param_1 + 0x30) - sVar12);
          iVar8 = iVar7 + sVar12;
        }
        if (*(short *)(param_1 + 0x34) < iVar8) {
          sVar12 = *(short *)(param_1 + 0x34) - sVar12;
          iVar7 = (int)sVar12;
        }
        else {
          sVar12 = (short)iVar7;
        }
        sVar3 = FUN_2c608dec(iVar15,DAT_2c609920,0x1fff,iVar7);
        FUN_2c605120(iVar15,(int)(short)(sVar3 + sVar12),0,1);
      }
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      return;
    }
    if ((int)uVar17 == 0) {
LAB_2c609768:
      iVar8 = FUN_2c604a44(iVar15);
      iVar7 = FUN_2c604a50(iVar15);
      if (iVar8 < 1) {
        if (0 < iVar7) {
          if (-1 < iVar8) goto LAB_2c6098dc;
          FUN_2c605120(iVar15,0,iVar8,1);
        }
      }
      else {
LAB_2c6098dc:
        if (iVar7 < 0) {
          FUN_2c605120(iVar15,0,(int)(short)-(short)iVar7,1);
        }
      }
    }
  }
  if (iVar5 != 0) goto LAB_2c60965e;
  iVar5 = FUN_2c605068(iVar15);
  iVar8 = FUN_2c605090(iVar15);
  if (iVar5 < 1) {
    if (iVar8 < 1) goto LAB_2c60965e;
    if (iVar5 < 0) {
      FUN_2c605120(iVar15,iVar5,0,1);
      goto LAB_2c60965e;
    }
  }
  if (iVar8 < 0) {
    FUN_2c605120(iVar15,(int)(short)-(short)iVar8,0,1);
  }
LAB_2c60965e:
  FUN_2c602340(iVar15,10,piVar4);
  uVar11 = *(byte *)(param_1 + 1) & 2;
  if ((*(byte *)(param_1 + 1) & 2) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x28) = uVar11;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xf0 | (byte)uVar11;
  return;
}

