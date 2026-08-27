/* FUN_2c613670 @ 0x2c613670 */

uint FUN_2c613670(int param_1,short param_2,short param_3,uint param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  iVar11 = (int)(short)(param_3 - *(short *)(param_5 + 0x14));
  iVar2 = (int)(short)(param_2 - *(short *)(param_5 + 0x12));
  if (*(int *)(param_5 + 0x20) == 0) {
    if ((*(byte *)(param_5 + 0x28) & 1) != 0) {
      if (-1 < (int)((uint)*(byte *)(param_5 + 0x10) << 0x1e)) {
        return *(byte *)(param_5 + 0x28) & 1;
      }
      uVar4 = *(byte *)(param_5 + 0x10) & 3;
      if (uVar4 != 2) {
        if (uVar4 == 3) {
          return (uint)(0 < iVar11);
        }
        return 0;
      }
      return (uint)(iVar11 < -1);
    }
    bVar3 = *(byte *)(param_5 + 0x10);
    uVar5 = bVar3 & 2;
    if ((bVar3 & 2) != 0) {
      return 1;
    }
    if ((bVar3 & 3) == 1) {
      if (0 < iVar2) {
        return 1;
      }
      if ((int)(iVar2 + param_4) < 0) {
        return 0;
      }
    }
    else {
      if ((bVar3 & 3) == 0) {
        if ((int)(iVar2 + param_4) < 0) {
          return 1;
        }
        if (iVar2 < 1) {
          if ((int)param_4 <= -iVar2) {
            return 2;
          }
          FUN_2c62c3b0(-iVar2 + param_1,iVar2 + param_4);
          return 2;
        }
        return 0;
      }
      if ((int)(iVar2 + param_4) < 0) {
        return 0;
      }
      if (0 < iVar2) {
        if ((int)param_4 < 1) {
          return 0;
        }
        goto LAB_2c61385e;
      }
    }
    uVar5 = -iVar2;
    if ((int)param_4 <= (int)uVar5) {
      return 0;
    }
    goto LAB_2c61385e;
  }
  uVar4 = (uint)*(byte *)(param_5 + 0x28);
  if ((int)(uVar4 << 0x1f) < 0) {
    iVar6 = *(int *)(param_5 + 0x1c);
    iVar9 = iVar2 * iVar6 >> 10;
    if (iVar6 < 1) {
      if (iVar9 < iVar11) goto LAB_2c613820;
      if (iVar11 < (int)((iVar2 + param_4) * iVar6) >> 10) goto LAB_2c613838;
      iVar11 = iVar11 * *(int *)(param_5 + 0x18) + *(int *)(param_5 + 0x18);
    }
    else {
      if (iVar11 < iVar9) {
LAB_2c613820:
        return (uVar4 & 3) >> 1;
      }
      if ((int)((iVar2 + param_4) * iVar6) >> 10 < iVar11) {
LAB_2c613838:
        return ((uVar4 ^ 2) & 3) >> 1;
      }
      iVar11 = *(int *)(param_5 + 0x18) * iVar11;
    }
    iVar9 = iVar11 * 0x100 >> 0x12;
    uVar5 = iVar11 * 0x100 >> 10 & 0xff;
    if (uVar5 == 0) {
      uVar5 = iVar9 - iVar2;
      iVar11 = *(int *)(param_5 + 0x24);
      iVar2 = 0xff;
      uVar12 = uVar5;
    }
    else {
      iVar6 = 0xff - uVar5;
      iVar11 = *(int *)(param_5 + 0x24);
      uVar5 = iVar9 - iVar2;
      iVar9 = iVar11 * iVar6 >> 8;
      iVar2 = 0xff - iVar9;
      if ((-1 < (int)uVar5) && ((int)uVar5 < (int)param_4)) {
        uVar12 = (iVar9 * iVar6 & 0x1ffffU) >> 9;
        if (-1 < (int)(uVar4 << 0x1e)) {
          uVar12 = ~uVar12 & 0xff;
        }
        bVar3 = *(byte *)(param_1 + uVar5);
        if (uVar12 < 0xfd) {
          if (uVar12 < 3) {
            bVar3 = 0;
          }
          else {
            bVar3 = (byte)((uint)((int)(short)(ushort)bVar3 * (int)(short)uVar12) / 0xff);
          }
        }
        *(byte *)(param_1 + uVar5) = bVar3;
        iVar11 = *(int *)(param_5 + 0x24);
        uVar4 = (uint)*(byte *)(param_5 + 0x28);
      }
      uVar12 = uVar5 + 1;
    }
    pbVar7 = (byte *)(param_1 + uVar12);
    do {
      if (iVar2 <= iVar11) {
        if (((int)uVar12 < (int)param_4) && (-1 < (int)uVar12)) {
          uVar1 = ((iVar2 * *(int *)(param_5 + 0x18) >> 10) * iVar2 & 0x1ffffU) >> 9;
          if (*(int *)(param_5 + 0x1c) < 0) {
            uVar1 = ~uVar1 & 0xff;
          }
          if ((int)(uVar4 << 0x1e) < 0) {
            uVar1 = ~uVar1 & 0xff;
          }
          bVar3 = *(byte *)(param_1 + uVar12);
          if (uVar1 < 0xfd) {
            if (uVar1 < 3) {
              bVar3 = 0;
            }
            else {
              bVar3 = (byte)((uint)((int)(short)(ushort)bVar3 * (int)(short)uVar1) / 0xff);
            }
          }
          *(byte *)(param_1 + uVar12) = bVar3;
          if ((int)((uint)*(byte *)(param_5 + 0x28) << 0x1e) < 0) goto joined_r0x2c613982;
          iVar2 = uVar12 + 1;
          goto LAB_2c6138c0;
        }
        break;
      }
      if (((int)uVar12 < (int)param_4) && (-1 < (int)uVar12)) {
        uVar1 = iVar2 - (iVar11 >> 1) & 0xff;
        if ((int)(uVar4 << 0x1e) < 0) {
          uVar1 = ~uVar1 & 0xff;
        }
        bVar3 = *pbVar7;
        if (uVar1 < 0xfd) {
          if (uVar1 < 3) {
            bVar3 = 0;
          }
          else {
            bVar3 = (byte)((uint)((int)(short)(ushort)bVar3 * (int)(short)uVar1) / 0xff);
          }
        }
        *pbVar7 = bVar3;
        iVar11 = *(int *)(param_5 + 0x24);
        uVar4 = (uint)*(byte *)(param_5 + 0x28);
      }
      uVar12 = uVar12 + 1;
      iVar2 = iVar2 - iVar11;
      pbVar7 = pbVar7 + 1;
    } while ((int)uVar12 < (int)param_4);
    if (-1 < (int)(uVar4 << 0x1e)) {
      iVar2 = uVar12 + 1;
      if (iVar2 < 0) {
        return 0;
      }
LAB_2c6138c0:
      if ((int)param_4 < iVar2) {
        return 2;
      }
      FUN_2c62c3b0(param_1 + iVar2,param_4 - iVar2);
      return 2;
    }
joined_r0x2c613982:
    if ((int)param_4 < (int)uVar5) {
      return 0;
    }
  }
  else {
    iVar6 = *(int *)(param_5 + 0x18);
    uVar5 = iVar6 * iVar11;
    iVar11 = (int)uVar5 >> 10;
    iVar9 = iVar11;
    if (0 < iVar6) {
      iVar9 = iVar11 + 1;
    }
    if (iVar9 < iVar2) goto LAB_2c613820;
    if ((int)(iVar2 + param_4) < iVar11) goto LAB_2c613838;
    iVar9 = (int)(uVar5 * 0x100) >> 0x12;
    uVar12 = (uVar5 & 0x3ff) >> 2;
    iVar11 = (int)((iVar6 + uVar5) * 0x100) >> 0x12;
    uVar1 = iVar9 - iVar2;
    if (iVar9 != iVar11) {
      if (iVar6 < 0) {
        if (uVar12 == 0) {
          uVar12 = 0xff;
          uVar8 = uVar1 - 1;
          uVar10 = uVar1;
          goto LAB_2c613884;
        }
        if (iVar6 < 0) {
          iVar2 = (int)(uVar12 * -*(int *)(param_5 + 0x1c)) >> 10;
          if ((-1 < (int)uVar1) && ((int)uVar1 < (int)param_4)) {
            uVar5 = (iVar2 * uVar12 & 0x1ffff) >> 9;
            if ((int)(uVar4 << 0x1e) < 0) {
              uVar5 = ~uVar5 & 0xff;
            }
            bVar3 = *(byte *)(param_1 + uVar1);
            if (uVar5 < 0xfd) {
              if (uVar5 < 3) {
                bVar3 = 0;
              }
              else {
                bVar3 = (byte)((uint)((int)(short)(ushort)bVar3 * (int)(short)uVar5) / 0xff);
              }
            }
            *(byte *)(param_1 + uVar1) = bVar3;
            iVar6 = *(int *)(param_5 + 0x18);
            uVar4 = (uint)*(byte *)(param_5 + 0x28);
          }
          uVar5 = uVar1 - 1;
          if ((0 < (int)uVar1) && ((int)uVar5 < (int)param_4)) {
            iVar2 = 0xff - iVar2;
            uVar12 = (iVar2 * (iVar2 * -iVar6 >> 10) & 0x1ffffU) >> 9;
            if (-1 < (int)(uVar4 << 0x1e)) {
              uVar12 = ~uVar12 & 0xff;
            }
            bVar3 = *(byte *)(param_1 + uVar5);
            if (uVar12 < 0xfd) {
              if (uVar12 < 3) {
                bVar3 = 0;
              }
              else {
                bVar3 = (byte)((uint)((int)(short)(ushort)bVar3 * (int)(short)uVar12) / 0xff);
              }
            }
            *(byte *)(param_1 + uVar5) = bVar3;
            uVar4 = (uint)*(byte *)(param_5 + 0x28);
          }
          if (-1 < (int)(uVar4 << 0x1e)) {
            iVar2 = uVar1 + 1;
            if ((int)param_4 < iVar2) {
              return 1;
            }
            if (iVar2 < 0) {
              return 2;
            }
            FUN_2c62c3b0(iVar2 + param_1,param_4 - iVar2);
            return 2;
          }
          if ((int)param_4 < (int)uVar5) {
            return 2;
          }
          if ((int)uVar5 < 1) {
            return 2;
          }
          goto LAB_2c61385e;
        }
      }
      iVar2 = (int)(*(int *)(param_5 + 0x1c) * (0xff - uVar12)) >> 10;
      if ((-1 < (int)uVar1) && ((int)uVar1 < (int)param_4)) {
        uVar5 = (iVar2 * (0xff - uVar12) & 0x1ffff) >> 9;
        if (-1 < (int)(uVar4 << 0x1e)) {
          uVar5 = ~uVar5 & 0xff;
        }
        bVar3 = *(byte *)(param_1 + uVar1);
        if (uVar5 < 0xfd) {
          if (uVar5 < 3) {
            bVar3 = 0;
          }
          else {
            bVar3 = (byte)((uint)((int)(short)(ushort)bVar3 * (int)(short)uVar5) / 0xff);
          }
        }
        *(byte *)(param_1 + uVar1) = bVar3;
        iVar6 = *(int *)(param_5 + 0x18);
        uVar4 = (uint)*(byte *)(param_5 + 0x28);
      }
      iVar11 = uVar1 + 1;
      if ((-1 < iVar11) && (iVar11 < (int)param_4)) {
        iVar2 = 0xff - iVar2;
        uVar5 = (iVar2 * (iVar6 * iVar2 >> 10) & 0x1ffffU) >> 9;
        if ((int)(uVar4 << 0x1e) < 0) {
          uVar5 = ~uVar5 & 0xff;
        }
        bVar3 = *(byte *)(param_1 + iVar11);
        if (uVar5 < 0xfd) {
          if (uVar5 < 3) {
            bVar3 = 0;
          }
          else {
            bVar3 = (byte)((uint)((int)(short)(ushort)bVar3 * (int)(short)uVar5) / 0xff);
          }
        }
        *(byte *)(param_1 + iVar11) = bVar3;
        uVar4 = (uint)*(byte *)(param_5 + 0x28);
      }
      uVar5 = uVar1;
      if (-1 < (int)(uVar4 << 0x1e)) {
        uVar4 = uVar1 + 2;
        if ((int)param_4 <= (int)(uVar1 + 2)) {
          uVar4 = param_4;
        }
        if (uVar4 != 0) {
          if ((int)uVar4 < 1) {
            return 2;
          }
          FUN_2c62c3b0(param_1 + uVar4,param_4 - uVar4);
          return 2;
        }
        return 0;
      }
      goto joined_r0x2c613982;
    }
    uVar10 = uVar1 + 1;
    uVar8 = uVar1;
LAB_2c613884:
    if ((-1 < (int)uVar8) && ((int)uVar8 < (int)param_4)) {
      uVar5 = (((iVar6 + uVar5) * 0x100 & 0x3ffff) >> 10) + uVar12 >> 1;
      if ((int)(uVar4 << 0x1e) < 0) {
        uVar5 = ~uVar5 & 0xff;
      }
      bVar3 = *(byte *)(param_1 + uVar8);
      if (uVar5 < 0xfd) {
        if (uVar5 < 3) {
          bVar3 = 0;
        }
        else {
          bVar3 = (byte)((uint)((int)(short)(ushort)bVar3 * (int)(short)uVar5) / 0xff);
        }
      }
      *(byte *)(param_1 + uVar8) = bVar3;
      uVar4 = (uint)*(byte *)(param_5 + 0x28);
    }
    if (-1 < (int)(uVar4 << 0x1e)) {
      if ((int)param_4 <= (int)uVar10) {
        uVar10 = param_4;
      }
      if (uVar10 != 0) {
        if ((int)uVar10 < 1) {
          return 2;
        }
        FUN_2c62c3b0(param_1 + uVar10,param_4 - uVar10);
        return 2;
      }
      return 0;
    }
    uVar5 = iVar11 - iVar2;
    if ((int)param_4 <= (int)uVar5) {
      return 0;
    }
  }
  if ((int)uVar5 < 0) {
    return 2;
  }
LAB_2c61385e:
  FUN_2c62c3b0(param_1,uVar5);
  return 2;
}

