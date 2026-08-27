/* FUN_2c614fc0 @ 0x2c614fc0 */

uint FUN_2c614fc0(short param_1,short param_2,short param_3,uint param_4,ushort param_5,
                 short param_6,byte param_7,short *param_8)

{
  longlong lVar1;
  short sVar2;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  short sVar3;
  
  uVar10 = (uint)param_5;
  uVar4 = (uint)param_7;
  iVar7 = (int)param_6;
  if (uVar10 == param_4 + 0x168) {
LAB_2c6150e8:
    *param_8 = param_1 - param_3;
    param_8[2] = param_1 + param_3;
    param_8[1] = param_2 - param_3;
    param_8[3] = param_2 + param_3;
  }
  else {
    iVar12 = (int)param_3;
    if (0x168 < param_4) {
      param_4 = param_4 - 0x168 & 0xffff;
    }
    if (0x168 < uVar10) {
      uVar10 = uVar10 - 0x168 & 0xffff;
    }
    iVar11 = (int)(short)(param_3 - param_6);
    if (uVar4 == 0) {
      sVar13 = 0;
    }
    else {
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      sVar13 = (short)(iVar7 >> 1) + 1;
    }
    uVar9 = ((uint)((ulonglong)DAT_2c615320 * (ulonglong)(param_4 >> 1) >> 0x20) & 0x1fff) >> 5;
    lVar1 = (ulonglong)DAT_2c615320 * (ulonglong)(uVar10 >> 1);
    uVar4 = (uint)lVar1;
    uVar8 = ((uint)((ulonglong)lVar1 >> 0x20) & 0x1fff) >> 5;
    sVar2 = (short)param_4;
    sVar3 = (short)uVar10;
    if (uVar9 == 4) {
      if (uVar8 == 4) {
        if (uVar10 < param_4) {
          uVar8 = 3;
          uVar9 = 3;
          goto LAB_2c6150de;
        }
      }
      else if ((uVar10 < param_4) || (uVar8 != 3)) {
        uVar9 = 3;
        goto LAB_2c615312;
      }
    }
    else if (uVar8 == 4) {
      if ((uVar9 != 3) || (uVar10 < param_4)) {
        uVar4 = 1;
        uVar8 = 3;
        goto LAB_2c615286;
      }
    }
    else {
      if ((uVar9 != uVar8) || (uVar10 < param_4)) {
        if ((uVar9 == 0) && (uVar8 == 1)) {
          iVar5 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
          iVar7 = (int)sVar3;
          *param_8 = (param_1 - sVar13) + (short)(iVar5 * iVar12 >> 0xf);
          iVar5 = FUN_2c62e208(iVar7);
          iVar6 = FUN_2c62e208((int)sVar2);
          if (iVar6 <= iVar5) {
            iVar7 = (int)sVar2;
          }
          iVar7 = FUN_2c62e208(iVar7);
          param_8[1] = (param_2 - sVar13) + (short)(iVar7 * iVar11 >> 0xf);
          iVar7 = FUN_2c62e208((int)(short)(sVar2 + 0x5a));
          param_8[2] = param_1 + sVar13 + (short)(iVar12 * iVar7 >> 0xf);
          param_8[3] = sVar13 + param_2 + param_3;
          return iVar12 * iVar7;
        }
        if ((uVar9 == 1) && (uVar8 == 2)) {
          *param_8 = (param_1 - param_3) - sVar13;
          iVar7 = FUN_2c62e208((int)sVar3);
          param_8[1] = (param_2 - sVar13) + (short)(iVar7 * iVar12 >> 0xf);
          iVar7 = FUN_2c62e208((int)(short)(sVar2 + 0x5a));
          iVar5 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
          if (iVar5 < iVar7) {
            iVar7 = FUN_2c62e208((int)(short)(sVar2 + 0x5a));
          }
          else {
            iVar7 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
          }
          param_8[2] = param_1 + sVar13 + (short)(iVar7 * iVar11 >> 0xf);
          iVar7 = FUN_2c62e208((int)sVar2);
          param_8[3] = param_2 + sVar13 + (short)(iVar12 * iVar7 >> 0xf);
          return iVar12 * iVar7;
        }
LAB_2c615312:
        uVar4 = (uint)(uVar8 == 3);
LAB_2c615286:
        if ((uVar9 == 2) && (uVar4 != 0)) {
          iVar5 = FUN_2c62e208((int)(short)(sVar2 + 0x5a));
          iVar7 = (int)sVar3;
          *param_8 = (param_1 - sVar13) + (short)(iVar5 * iVar12 >> 0xf);
          param_8[1] = (param_2 - param_3) - sVar13;
          iVar5 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
          param_8[2] = param_1 + sVar13 + (short)(iVar12 * iVar5 >> 0xf);
          iVar12 = FUN_2c62e208(iVar7);
          iVar5 = FUN_2c62e208((int)sVar2);
          if (iVar12 * iVar11 - iVar11 * iVar5 == 0 || iVar12 * iVar11 < iVar11 * iVar5) {
            iVar7 = (int)sVar2;
          }
          uVar4 = FUN_2c62e208(iVar7);
          param_8[3] = param_2 + sVar13 + (short)(iVar11 * uVar4 * 2 >> 0x10);
          return uVar4;
        }
LAB_2c6150de:
        if ((uVar9 == 3) && (uVar8 == 0)) {
          iVar7 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
          iVar5 = FUN_2c62e208((int)(short)(sVar2 + 0x5a));
          if (iVar7 < iVar5) {
            iVar7 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
          }
          else {
            iVar7 = FUN_2c62e208((int)(short)(sVar2 + 0x5a));
          }
          *param_8 = (param_1 - sVar13) + (short)(iVar7 * iVar11 >> 0xf);
          iVar7 = FUN_2c62e208((int)sVar2);
          param_8[2] = param_1 + param_3 + sVar13;
          param_8[1] = (param_2 - sVar13) + (short)(iVar7 * iVar12 >> 0xf);
          iVar7 = FUN_2c62e208((int)sVar3);
          param_8[3] = sVar13 + param_2 + (short)(iVar12 * iVar7 >> 0xf);
          return iVar12 * iVar7;
        }
        goto LAB_2c6150e8;
      }
      if (uVar9 == 0) {
        iVar7 = FUN_2c62e208((int)sVar2);
        param_8[1] = (param_2 - sVar13) + (short)(iVar7 * iVar11 >> 0xf);
        iVar7 = FUN_2c62e208((int)(short)(sVar2 + 0x5a));
        param_8[2] = sVar13 + param_1 + (short)(iVar7 * iVar12 >> 0xf);
        iVar7 = FUN_2c62e208((int)sVar3);
        param_8[3] = param_2 + sVar13 + (short)(iVar12 * iVar7 >> 0xf);
        iVar7 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
        *param_8 = (param_1 - sVar13) + (short)(iVar11 * iVar7 >> 0xf);
        return iVar11 * iVar7;
      }
      if (uVar9 == 1) {
        iVar7 = FUN_2c62e208((int)sVar2);
        param_8[3] = param_2 + sVar13 + (short)(iVar7 * iVar12 >> 0xf);
        iVar7 = FUN_2c62e208((int)(short)(sVar2 + 0x5a));
        param_8[2] = sVar13 + param_1 + (short)(iVar7 * iVar11 >> 0xf);
        iVar7 = FUN_2c62e208((int)sVar3);
        param_8[1] = (param_2 - sVar13) + (short)(iVar11 * iVar7 >> 0xf);
        iVar7 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
        *param_8 = (param_1 - sVar13) + (short)(iVar12 * iVar7 >> 0xf);
        return iVar12 * iVar7;
      }
      if (uVar9 == 2) {
        iVar7 = FUN_2c62e208((int)(short)(sVar2 + 0x5a));
        *param_8 = (param_1 - sVar13) + (short)(iVar7 * iVar12 >> 0xf);
        iVar7 = FUN_2c62e208((int)sVar2);
        param_8[3] = sVar13 + param_2 + (short)(iVar7 * iVar11 >> 0xf);
        iVar7 = FUN_2c62e208((int)sVar3);
        param_8[1] = (param_2 - sVar13) + (short)(iVar12 * iVar7 >> 0xf);
        iVar7 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
        param_8[2] = param_1 + sVar13 + (short)(iVar11 * iVar7 >> 0xf);
        return iVar11 * iVar7;
      }
      if (uVar9 != 3) {
        return uVar4;
      }
    }
    iVar7 = FUN_2c62e208((int)(short)(sVar2 + 0x5a));
    *param_8 = (param_1 - sVar13) + (short)(iVar7 * iVar11 >> 0xf);
    iVar7 = FUN_2c62e208((int)sVar2);
    param_8[1] = (param_2 - sVar13) + (short)(iVar7 * iVar12 >> 0xf);
    iVar7 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
    param_8[2] = param_1 + sVar13 + (short)(iVar12 * iVar7 >> 0xf);
    iVar7 = FUN_2c62e208((int)sVar3);
    uVar4 = iVar11 * iVar7;
    param_8[3] = sVar13 + param_2 + (short)((int)uVar4 >> 0xf);
  }
  return uVar4;
}

