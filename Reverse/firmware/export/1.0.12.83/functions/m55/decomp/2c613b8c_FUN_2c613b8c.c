/* FUN_2c613b8c @ 0x2c613b8c */

int FUN_2c613b8c(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = (int)*(short *)(param_5 + 10);
  iVar3 = param_2 - *(short *)(param_5 + 8);
  uVar1 = *(ushort *)(param_5 + 0xc);
  iVar6 = param_3 - iVar4;
  uVar5 = *(ushort *)(param_5 + 0xe);
  if ((short)uVar1 < 0xb4) {
    if ((uVar5 != 0 && ((short)uVar5 < 0xb4 && uVar1 != 0)) && ((short)uVar5 < (short)uVar1)) {
      if (param_3 < iVar4) {
        return 1;
      }
      iVar4 = *(int *)(param_5 + 0x54) * iVar6 >> 10;
      iVar6 = iVar6 * *(int *)(param_5 + 0x28) + *(int *)(param_5 + 0x28);
      uVar7 = iVar6 >> 10;
      if ((uVar1 - 1 < 0x5a) && (iVar6 < 0)) {
        uVar7 = 0;
LAB_2c613df2:
        if (uVar5 - 0x5b < 0xb3) {
          uVar7 = uVar7 & (int)uVar7 >> 0x1f;
        }
        iVar4 = iVar4 - uVar7;
      }
      else {
        if (uVar1 - 0x5b < 0xb3) {
          uVar7 = uVar7 & iVar6 >> 0x1f;
        }
        if ((0x59 < uVar5 - 1) || (-1 < iVar6)) goto LAB_2c613df2;
        uVar7 = 0;
      }
      uVar7 = (uVar7 + (iVar4 >> 1)) - iVar3;
      if ((int)param_4 <= (int)uVar7) {
        uVar7 = param_4;
      }
      if ((int)uVar7 < 1) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_2c613670(param_1,param_2,param_3,(int)(short)uVar7,param_5 + 0x10);
        if (iVar3 == 0) {
          FUN_2c62c3b0(param_1,uVar7);
        }
      }
      param_5 = param_5 + 0x3c;
      if ((int)param_4 <= (int)uVar7) {
        uVar7 = param_4;
      }
LAB_2c613d30:
      uVar7 = uVar7 & ~((int)uVar7 >> 0x1f);
      iVar4 = FUN_2c613670(param_1 + uVar7,(int)(short)((short)uVar7 + (short)param_2),param_3,
                           (int)(short)((short)param_4 - (short)uVar7),param_5);
      if (iVar4 == 0) {
        FUN_2c62c3b0(param_1 + uVar7,param_4 - uVar7);
      }
      if (iVar3 != iVar4) {
        return 2;
      }
      return iVar4;
    }
    if (uVar1 == 0) {
      if (iVar4 <= param_3) {
        iVar3 = 1;
        goto LAB_2c613c80;
      }
    }
    else if (iVar4 <= param_3) goto LAB_2c613c4c;
    iVar3 = 3;
    if (uVar5 != 0xb4) goto LAB_2c613bf2;
LAB_2c613ca2:
    iVar4 = 3;
LAB_2c613c26:
    if ((iVar3 == 3) && (iVar4 == 3)) {
      return 0;
    }
    bVar2 = iVar4 == 1;
  }
  else {
    if (uVar1 == 0xb4) {
      if (param_3 < iVar4) {
        iVar3 = 1;
        if (uVar5 == 0xb4) goto LAB_2c613ca2;
LAB_2c613bf2:
        if (uVar5 == 0) {
          if (*(short *)(param_5 + 10) <= param_3) goto LAB_2c613c1a;
          goto joined_r0x2c613c00;
        }
        if ((short)uVar5 < 0xb4) {
          if (param_3 < *(short *)(param_5 + 10)) goto LAB_2c613c1a;
LAB_2c613cb2:
          iVar4 = FUN_2c613670(param_1,param_2,param_3,param_4,param_5 + 0x3c);
          bVar2 = iVar4 == 0;
        }
        else {
          if ((uVar5 == 0xb4) || (param_3 < *(short *)(param_5 + 10))) goto LAB_2c613cb2;
LAB_2c613c1a:
          bVar2 = false;
          iVar4 = 3;
        }
        if (iVar3 == 0) {
          return 0;
        }
        if (bVar2) {
          return 0;
        }
        goto LAB_2c613c26;
      }
LAB_2c613c7c:
      iVar3 = 3;
LAB_2c613c80:
      if (uVar5 != 0xb4) goto LAB_2c613bf2;
    }
    else {
      if ((0xb4 < (short)uVar5) && ((short)uVar5 < (short)uVar1)) {
        if (iVar4 < param_3) {
          return 1;
        }
        iVar4 = *(int *)(param_5 + 0x54) * iVar6 >> 10;
        iVar6 = iVar6 * *(int *)(param_5 + 0x28) + *(int *)(param_5 + 0x28);
        uVar7 = iVar6 >> 10;
        if ((uVar1 - 0x10f < 0x59) && (iVar6 < 0)) {
          uVar7 = 0;
LAB_2c613d04:
          if (uVar5 - 0x5b < 0xb3) {
            uVar7 = uVar7 & (int)uVar7 >> 0x1f;
          }
          iVar4 = iVar4 - uVar7;
        }
        else {
          if (uVar1 - 0x5b < 0xb3) {
            uVar7 = uVar7 & iVar6 >> 0x1f;
          }
          if ((0x58 < uVar5 - 0x10f) || (-1 < iVar6)) goto LAB_2c613d04;
          uVar7 = 0;
        }
        uVar7 = (uVar7 + (iVar4 >> 1)) - iVar3;
        if ((int)param_4 <= (int)uVar7) {
          uVar7 = param_4;
        }
        if ((int)uVar7 < 1) {
          iVar3 = 1;
        }
        else {
          iVar3 = FUN_2c613670(param_1,param_2,param_3,(int)(short)uVar7,param_5 + 0x3c);
          if (iVar3 == 0) {
            FUN_2c62c3b0(param_1,uVar7);
          }
        }
        param_5 = param_5 + 0x10;
        if ((int)param_4 <= (int)uVar7) {
          uVar7 = param_4;
        }
        goto LAB_2c613d30;
      }
      if (iVar4 <= param_3) goto LAB_2c613c7c;
LAB_2c613c4c:
      iVar3 = FUN_2c613670(param_1,param_2,param_3,param_4,param_5 + 0x10);
      uVar5 = *(ushort *)(param_5 + 0xe);
      if (uVar5 != 0xb4) goto LAB_2c613bf2;
      if (param_3 < *(short *)(param_5 + 10)) goto LAB_2c613c1a;
joined_r0x2c613c00:
      if (iVar3 == 0) {
        return 0;
      }
    }
    bVar2 = true;
  }
  if ((iVar3 == 1) && (bVar2)) {
    return 1;
  }
  return 2;
}

