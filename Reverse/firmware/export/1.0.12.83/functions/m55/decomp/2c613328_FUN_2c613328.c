/* FUN_2c613328 @ 0x2c613328 */

undefined4 FUN_2c613328(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  byte bVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  uint local_2c;
  
  bVar8 = *(byte *)(param_5 + 0x12);
  sVar3 = *(short *)(param_5 + 10);
  iVar11 = (int)sVar3;
  local_2c = bVar8 & 1;
  iVar17 = (int)*(short *)(param_5 + 0xe);
  if ((bVar8 & 1) == 0) {
    if (iVar17 < param_3) {
      return 0;
    }
    if (param_3 < iVar11) {
      return 0;
    }
  }
  else {
    if (param_3 < iVar11) {
      return 1;
    }
    if (iVar17 < param_3) {
      return 1;
    }
  }
  sVar4 = *(short *)(param_5 + 0x10);
  iVar18 = (int)sVar4;
  sVar5 = *(short *)(param_5 + 8);
  iVar15 = (int)sVar5;
  iVar13 = (int)*(short *)(param_5 + 0xc);
  if (((iVar15 + iVar18 <= param_2) && ((int)(param_2 + param_4) <= iVar13 - iVar18)) ||
     ((iVar11 + iVar18 <= param_3 && (param_3 <= iVar17 - iVar18)))) {
    if ((bVar8 & 1) != 0) {
      uVar12 = iVar15 - param_2 & ~(iVar15 - param_2 >> 0x1f);
      if ((int)param_4 < (int)uVar12) {
        return 2;
      }
      iVar11 = ((iVar13 - param_2) - uVar12) + 1;
      if ((int)param_4 < (int)(uVar12 + iVar11)) {
        iVar11 = param_4 - uVar12;
      }
      if (iVar11 < 0) {
        return 2;
      }
      FUN_2c62c3b0(uVar12 + param_1);
      return 2;
    }
    iVar15 = iVar15 - param_2;
    if (iVar15 <= (int)param_4) {
      if (-1 < iVar15) {
        FUN_2c62c3b0(param_1,iVar15);
      }
      uVar12 = (iVar13 - param_2) + 1;
      if (0 < (int)uVar12) {
        if ((int)uVar12 < (int)param_4) {
          FUN_2c62c3b0(param_1 + uVar12,param_4 - uVar12);
          return 2;
        }
        if (iVar15 == 0) {
          if (uVar12 == param_4) {
            return 1;
          }
          return 2;
        }
        return 2;
      }
    }
    return 0;
  }
  sVar7 = sVar5 - (short)param_2;
  sVar6 = (ushort)param_3 - sVar3;
  if (sVar6 < iVar18) {
    sVar3 = sVar3 + sVar4 + ~(ushort)param_3;
  }
  else {
    sVar3 = (sVar3 + sVar6 + sVar4 + -1) - *(short *)(param_5 + 0xe);
  }
  iVar17 = (int)sVar3;
  iVar11 = *(int *)(param_5 + 0x14);
  uVar2 = *(ushort *)(*(int *)(iVar11 + 0xc) + iVar17 * 2);
  sVar6 = *(short *)(*(int *)(iVar11 + 0xc) + (iVar17 + 1) * 2) - uVar2;
  sVar3 = *(short *)(*(int *)(iVar11 + 8) + iVar17 * 2);
  sVar5 = ((sVar7 + ((*(short *)(param_5 + 0xc) + 1) - sVar5)) - sVar4) + sVar3;
  iVar11 = (uint)uVar2 + *(int *)(iVar11 + 4);
  uVar12 = (uint)sVar6;
  iVar15 = (int)(short)((sVar7 + sVar4 + -1) - sVar3);
  iVar17 = (int)sVar5;
  if ((bVar8 & 1) == 0) {
    if (0 < (int)uVar12) {
      pbVar14 = (byte *)(param_1 + iVar15);
      pbVar19 = (byte *)(param_1 + iVar17);
      pbVar9 = (byte *)(iVar11 + uVar12);
      iVar13 = iVar15;
      iVar18 = iVar17;
      do {
        pbVar9 = pbVar9 + -1;
        bVar8 = *pbVar9;
        if ((-1 < iVar18) && (iVar18 < (int)param_4)) {
          bVar1 = *pbVar19;
          bVar16 = bVar8;
          if (bVar1 < 0xfd) {
            if (bVar1 < 3) {
              bVar16 = 0;
            }
            else {
              bVar16 = (byte)((uint)((int)(short)(ushort)bVar8 * (int)(short)(ushort)bVar1) / 0xff);
            }
          }
          *pbVar19 = bVar16;
        }
        if ((-1 < iVar13) && (iVar13 < (int)param_4)) {
          bVar1 = *pbVar14;
          if (bVar1 < 0xfd) {
            if (bVar1 < 3) {
              bVar8 = 0;
            }
            else {
              bVar8 = (byte)((uint)((int)(short)(ushort)bVar8 * (int)(short)(ushort)bVar1) / 0xff);
            }
          }
          *pbVar14 = bVar8;
        }
        iVar18 = iVar18 + 1;
        pbVar14 = pbVar14 + -1;
        iVar13 = iVar13 + -1;
        pbVar19 = pbVar19 + 1;
        local_2c = uVar12;
      } while (pbVar9 != (byte *)((iVar11 + -1 + uVar12) - (uint)(ushort)(sVar6 - 1)));
    }
    uVar10 = local_2c + iVar17;
    if ((int)param_4 <= (int)(local_2c + iVar17)) {
      uVar10 = param_4;
    }
    uVar10 = uVar10 & ~((int)uVar10 >> 0x1f);
    FUN_2c62c3b0(param_1 + uVar10,param_4 - uVar10);
    uVar12 = (iVar15 - uVar12) + 1;
    if ((int)param_4 <= (int)uVar12) {
      uVar12 = param_4;
    }
    FUN_2c62c3b0(param_1,uVar12 & ~((int)uVar12 >> 0x1f));
    return 2;
  }
  if (0 < (int)uVar12) {
    pbVar14 = (byte *)(param_1 + iVar15);
    pbVar19 = (byte *)(param_1 + iVar17);
    pbVar9 = (byte *)((short)(sVar6 + -1) + iVar11);
    iVar11 = iVar15;
    iVar13 = iVar17;
    do {
      bVar8 = ~*pbVar9;
      if ((-1 < iVar13) && (iVar13 < (int)param_4)) {
        bVar1 = *pbVar19;
        bVar16 = bVar8;
        if (bVar1 < 0xfd) {
          if (bVar1 < 3) {
            bVar16 = 0;
          }
          else {
            bVar16 = (byte)((uint)((int)(short)(ushort)bVar8 * (int)(short)(ushort)bVar1) / 0xff);
          }
        }
        *pbVar19 = bVar16;
      }
      if ((-1 < iVar11) && (iVar11 < (int)param_4)) {
        bVar1 = *pbVar14;
        if (bVar1 < 0xfd) {
          if (bVar1 < 3) {
            bVar8 = 0;
          }
          else {
            bVar8 = (byte)((uint)((int)(short)(ushort)bVar8 * (int)(short)(ushort)bVar1) / 0xff);
          }
        }
        *pbVar14 = bVar8;
      }
      iVar11 = iVar11 + -1;
      iVar13 = iVar13 + 1;
      pbVar14 = pbVar14 + -1;
      pbVar19 = pbVar19 + 1;
      pbVar9 = pbVar9 + -1;
    } while (iVar11 != (iVar15 + -1) - (uint)(ushort)(sVar6 - 1));
  }
  uVar12 = iVar15 + 1U;
  if ((int)param_4 <= (int)(iVar15 + 1U)) {
    uVar12 = param_4;
  }
  uVar12 = uVar12 & ~((int)uVar12 >> 0x1f);
  if (iVar17 < (int)param_4) {
    if (-1 < (int)(iVar17 - uVar12)) {
      iVar11 = (int)(short)(sVar5 - (short)uVar12);
      goto LAB_2c613500;
    }
  }
  else if (-1 < (int)(param_4 - uVar12)) {
    iVar11 = (int)(short)(param_4 - uVar12);
    goto LAB_2c613500;
  }
  iVar11 = 0;
LAB_2c613500:
  FUN_2c62c3b0(param_1 + uVar12,iVar11);
  return 2;
}

