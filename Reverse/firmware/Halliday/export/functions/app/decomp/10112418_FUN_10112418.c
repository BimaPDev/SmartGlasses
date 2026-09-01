/* FUN_10112418 @ 0x10112418 */

undefined4
FUN_10112418(float param_1,float param_2,float param_3,int param_4,undefined2 param_5,
            undefined2 param_6,float *param_7,uint param_8,undefined4 param_9)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  undefined2 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined4 uVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  
  if ((param_4 == 0) || (uVar15 = in_fpscr & 0xfffffff, param_1 <= 0.0)) {
    return 1;
  }
  if (param_2 < 1.0) {
    param_2 = 1.0;
  }
  if (*(int *)(param_4 + 0x34) == 0) {
    iVar5 = FUN_100f0524(0xa4);
    *(int *)(param_4 + 0x34) = iVar5;
    if (iVar5 != 0) {
      FUN_1011ea48(iVar5,0,0xa4);
      goto LAB_1011247a;
    }
LAB_10112468:
    uVar6 = 5;
  }
  else {
    if (*(int *)(*(int *)(param_4 + 0x34) + 0x4c) != 0) {
      while (piVar11 = *(int **)(*(int *)(param_4 + 0x34) + 0x4c), piVar11 != (int *)0x0) {
        iVar5 = piVar11[3];
        if (*piVar11 != 0) {
          while (iVar8 = **(int **)(*(int *)(param_4 + 0x34) + 0x4c), iVar8 != 0) {
            uVar6 = *(undefined4 *)(iVar8 + 0x18);
            FUN_10139762();
            **(undefined4 **)(*(int *)(param_4 + 0x34) + 0x4c) = uVar6;
          }
        }
        FUN_10139762(*(undefined4 *)(*(int *)(param_4 + 0x34) + 0x4c));
        *(int *)(*(int *)(param_4 + 0x34) + 0x4c) = iVar5;
      }
    }
    if (*(int *)(*(int *)(param_4 + 0x34) + 0x58) != 0) {
      while (puVar12 = *(undefined4 **)(*(int *)(param_4 + 0x34) + 0x58),
            puVar12 != (undefined4 *)0x0) {
        uVar6 = *puVar12;
        if (puVar12[2] != 0) {
          while (iVar5 = *(int *)(*(int *)(*(int *)(param_4 + 0x34) + 0x58) + 8), iVar5 != 0) {
            uVar14 = *(undefined4 *)(iVar5 + 0x18);
            FUN_10139762();
            *(undefined4 *)(*(int *)(*(int *)(param_4 + 0x34) + 0x58) + 8) = uVar14;
          }
        }
        FUN_10139762(*(undefined4 *)(*(int *)(param_4 + 0x34) + 0x58));
        *(undefined4 *)(*(int *)(param_4 + 0x34) + 0x58) = uVar6;
      }
    }
    if (*(int *)(*(int *)(param_4 + 0x34) + 0xc) != 0) {
      FUN_10139762();
    }
    *(undefined1 *)(param_4 + 0x45) = 0;
    FUN_1011ea48(*(undefined4 *)(param_4 + 0x34),0,0xa4);
    *(undefined4 *)(param_4 + 0x3c) = 0;
LAB_1011247a:
    param_8 = param_8 & 0xfffffffe;
    if (param_8 == 0) {
      pfVar7 = (float *)0x0;
    }
    else {
      pfVar7 = (float *)FUN_100f0524(param_8 * 4);
      fVar17 = DAT_101125dc;
      if (pfVar7 == (float *)0x0) goto LAB_10112468;
      pfVar13 = param_7 + param_8;
      pfVar9 = pfVar7;
      for (; pfVar13 != param_7; param_7 = param_7 + 1) {
        fVar16 = *param_7;
        uVar1 = uVar15 & 0xfffffff | (uint)(fVar16 < 0.0) << 0x1f | (uint)(fVar16 == 0.0) << 0x1e;
        uVar15 = uVar1 | (uint)NAN(fVar16) << 0x1c;
        bVar4 = (byte)(uVar1 >> 0x18);
        bVar2 = !(bool)(bVar4 >> 6 & 1);
        bVar3 = bVar4 >> 7 == ((byte)(uVar15 >> 0x1c) & 1);
        *pfVar9 = (float)((uint)(bVar2 && bVar3) * (int)fVar16 +
                         (uint)(!bVar2 || !bVar3) * (int)fVar17);
        pfVar9 = pfVar9 + 1;
      }
    }
    fVar17 = param_3;
    if (param_3 < 0.0) {
      fVar16 = DAT_101125dc;
      for (pfVar9 = pfVar7; pfVar9 != pfVar7 + param_8; pfVar9 = pfVar9 + 1) {
        fVar16 = fVar16 + *pfVar9;
      }
      uVar15 = uVar15 & 0xfffffff | (uint)(fVar16 < 0.0) << 0x1f | (uint)(fVar16 == 0.0) << 0x1e;
      bVar4 = (byte)(uVar15 >> 0x18);
      fVar17 = DAT_101125dc;
      if (!(bool)(bVar4 >> 6 & 1) && (bool)(bVar4 >> 7) == NAN(fVar16)) {
        fVar17 = (float)VectorSignedToFloat((int)(-param_3 / fVar16 + 1.0),
                                            (byte)(uVar15 >> 0x16) & 3);
        fVar17 = param_3 + fVar17 * fVar16;
      }
    }
    puVar10 = *(undefined2 **)(param_4 + 0x34);
    *(float *)(puVar10 + 2) = param_1;
    *(float *)(puVar10 + 4) = param_2;
    *(float **)(puVar10 + 6) = pfVar7;
    *(uint *)(puVar10 + 8) = param_8;
    *(float *)(puVar10 + 0x10) = param_1 * 0.5;
    *(float *)(puVar10 + 0x14) = param_2 * param_2;
    *(float *)(puVar10 + 10) = fVar17;
    *puVar10 = param_5;
    puVar10[1] = param_6;
    uVar6 = 0;
    *(undefined4 *)(param_4 + 0x40) = param_9;
  }
  return uVar6;
}

