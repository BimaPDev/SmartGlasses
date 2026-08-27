/* FUN_2c5f4e70 @ 0x2c5f4e70 */

int FUN_2c5f4e70(undefined4 param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar6 = DAT_2c5f5038;
  uVar2 = DAT_2c5f5034;
  if (2 < param_3) {
    if (*param_2 == 0x23) {
      if (param_2[1] - 0x30 < 10) {
        iVar10 = 1;
        pbVar4 = param_2;
        iVar8 = 0;
        do {
          pbVar4 = pbVar4 + 1;
          iVar11 = (*pbVar4 - 0x30) + iVar8 * 10;
          if (9 < (*pbVar4 - 0x30 & 0xff)) {
            iVar12 = iVar10 + -1;
            iVar11 = 7;
            goto LAB_2c5f4fda;
          }
          iVar10 = iVar10 + 1;
          if (0x10ffff < iVar11) {
            iVar11 = 0x110000;
          }
          iVar8 = iVar11;
        } while (param_3 != iVar10);
      }
      else if ((param_2[1] & 0xdf) == 0x58) {
        pbVar4 = param_2 + 1;
        iVar8 = 0;
        iVar10 = 2;
        do {
          pbVar4 = pbVar4 + 1;
          bVar1 = *pbVar4;
          iVar11 = FUN_2c66b60a(uVar2,(uint)bVar1);
          if (iVar11 == 0) break;
          uVar7 = bVar1 | 0x20;
          iVar10 = iVar10 + 1;
          iVar11 = (int)((ulonglong)uVar6 * (ulonglong)uVar7 >> 0x20);
          iVar8 = ((uVar7 + (iVar11 + (uVar7 - iVar11 >> 1) >> 5) * -0x27 & 0xff) - 9) +
                  iVar8 * 0x10;
          if (0x10ffff < iVar8) {
            iVar8 = 0x110000;
          }
        } while (param_3 != iVar10);
        iVar12 = iVar10 + -2;
        iVar11 = 6;
LAB_2c5f4fda:
        if (((iVar12 <= iVar11 && 0 < iVar12) && (iVar10 < param_3)) && (param_2[iVar10] == 0x3b)) {
          iVar11 = iVar8;
          if (iVar8 != 0) {
            iVar11 = iVar8 + -0x110000;
          }
          if ((iVar11 < 0 == (iVar8 != 0 && SBORROW4(iVar8,0x110000))) || (iVar8 - 0xd800U < 0x800))
          {
            iVar8 = 0xfffd;
          }
          FUN_2c5fa100(iVar8,param_1);
          return iVar10 + 1;
        }
      }
    }
    else {
      pbVar4 = param_2 + 1;
      uVar6 = 2;
      if (0x1f < param_3) {
        param_3 = 0x20;
      }
      do {
        pbVar4 = pbVar4 + 1;
        if (*pbVar4 == 0x20) {
          return 0;
        }
        if (*pbVar4 == 0x3b) {
          iVar11 = 0x84c;
          iVar10 = 0;
          iVar8 = 0x426;
          uVar7 = DAT_2c5f5028;
          goto LAB_2c5f4ede;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < param_3);
    }
  }
  return 0;
LAB_2c5f4ede:
  uVar9 = (uVar7 & 0xfffff) >> 0xf;
  iVar12 = (uVar7 & 0x7fff) + DAT_2c5f5030;
  uVar5 = uVar9;
  if ((int)uVar6 <= (int)uVar9) {
    uVar5 = uVar6;
  }
  iVar3 = FUN_2c66c540(param_2,iVar12,uVar5);
  if ((iVar3 == 0) && (iVar3 = uVar6 - uVar9, iVar3 == 0)) {
    FUN_2c5f6b40(param_1,iVar12 + uVar9,uVar7 >> 0x14);
    return uVar6 + 1;
  }
  if (iVar3 < 1) {
    if (iVar8 <= iVar10) {
      if (iVar3 < 1) {
        return 0;
      }
      goto LAB_2c5f4f0c;
    }
    iVar11 = iVar8 - iVar10;
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    iVar12 = iVar8 - (iVar11 >> 1);
    if (iVar8 == iVar12) {
      iVar12 = iVar12 + -1;
      iVar11 = iVar12;
    }
    else {
      iVar11 = iVar8 + -1;
    }
  }
  else {
LAB_2c5f4f0c:
    if (iVar11 <= iVar8) {
      return 0;
    }
    iVar12 = iVar8 + (iVar11 - iVar8 >> 1);
    if (iVar8 == iVar12) {
      iVar12 = iVar12 + 1;
      iVar10 = iVar12;
    }
    else {
      iVar10 = iVar8 + 1;
    }
  }
  uVar7 = *(uint *)(DAT_2c5f502c + iVar12 * 4);
  iVar8 = iVar12;
  goto LAB_2c5f4ede;
}

