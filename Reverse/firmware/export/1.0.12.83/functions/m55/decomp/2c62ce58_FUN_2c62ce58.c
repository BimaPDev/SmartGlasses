/* FUN_2c62ce58 @ 0x2c62ce58 */

int FUN_2c62ce58(code *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                uint param_6,uint param_7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  double in_d0;
  double dVar5;
  double dVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  int iVar11;
  double dVar10;
  uint local_3c;
  
  uVar3 = in_fpscr & 0xfffffff;
  local_3c = param_6;
  if ((DAT_2c62d150 < in_d0) || (in_d0 < DAT_2c62d158)) {
LAB_2c62d00c:
    iVar11 = FUN_2c62d190(param_1,param_2,param_3);
    return iVar11;
  }
  dVar6 = in_d0;
  if (in_d0 < 0.0) {
    dVar6 = -in_d0;
  }
  uVar8 = (uint)((ulonglong)dVar6 >> 0x20);
  fVar7 = (float)VectorSignedToFloat(((uVar8 & 0x7fffffff) >> 0x14) - 0x3ff,
                                     (byte)(uVar3 >> 0x16) & 3);
  if ((param_7 & 0x400) == 0) {
    param_5 = 6;
  }
  uVar8 = VectorFloatToSigned((double)(DAT_2c62d17c + fVar7 * DAT_2c62d178) +
                              ((double)(((ulonglong)(uVar8 & 0xfffff | 0x3ff00000) << 0x20) +
                                       ((ulonglong)dVar6 & 0xffffffff)) - 1.5) * DAT_2c62d160,3);
  fVar9 = (float)VectorSignedToFloat(uVar8,(byte)(uVar3 >> 0x16) & 3);
  iVar11 = (int)(fVar9 * DAT_2c62d180 + 0.5);
  fVar7 = (float)VectorSignedToFloat(iVar11,(byte)(uVar3 >> 0x16) & 3);
  dVar10 = (double)(-(DAT_2c62d184 * fVar7) + fVar9 * DAT_2c62d188);
  dVar5 = dVar10 * dVar10;
  dVar5 = ((dVar10 + dVar10) / (dVar5 / (dVar5 / (dVar5 / 14.0 + 10.0) + 6.0) + (2.0 - dVar10)) +
          1.0) * (double)((ulonglong)(uint)((iVar11 + 0x3ff) * 0x100000) << 0x20);
  if (dVar6 < dVar5) {
    dVar5 = dVar5 / 10.0;
    uVar8 = uVar8 - 1;
  }
  if (uVar8 + 99 < 199) {
    uVar3 = 4;
  }
  else {
    uVar3 = 5;
  }
  if ((int)(param_7 << 0x14) < 0) {
    if ((dVar6 < DAT_2c62d168) || (-1 < (int)((uint)(dVar6 < DAT_2c62d170) << 0x1f))) {
      if ((param_5 != 0) && ((param_7 & 0x400) != 0)) {
        param_5 = param_5 + -1;
      }
      goto LAB_2c62d02a;
    }
    if ((int)uVar8 < param_5) {
      param_5 = (param_5 - uVar8) + -1;
    }
    else {
      param_5 = 0;
    }
    param_7 = param_7 | 0x400;
    uVar2 = param_6;
    if (param_6 != 0) {
      uVar8 = 0;
      uVar3 = 0;
      local_3c = 0;
      uVar4 = uVar3;
      goto joined_r0x2c62d112;
    }
    if (-1 < (int)((uint)(in_d0 < 0.0) << 0x1f)) goto LAB_2c62d00c;
    uVar3 = 0;
    uVar4 = 0;
    uVar8 = 0;
  }
  else {
LAB_2c62d02a:
    if (uVar3 < param_6) {
      uVar4 = -((int)(param_7 << 0x1e) >> 0x1f);
      uVar2 = param_6 - uVar3;
      if (uVar4 != 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar4 = -((int)(param_7 << 0x1e) >> 0x1f);
      uVar2 = 0;
    }
    if (uVar8 == 0) {
      local_3c = 1;
    }
    else {
      dVar6 = dVar6 / dVar5;
      local_3c = 1;
    }
joined_r0x2c62d112:
    if (-1 < (int)((uint)(in_d0 < 0.0) << 0x1f)) goto LAB_2c62d054;
  }
  dVar6 = -dVar6;
LAB_2c62d054:
  iVar11 = FUN_2c62d190(SUB84(dVar6,0),param_1,param_2,param_3,param_4,param_5,uVar2,
                        param_7 & 0xfffff7ff);
  if (local_3c != 0) {
    if ((param_7 & 0x20) == 0) {
      uVar1 = 0x65;
    }
    else {
      uVar1 = 0x45;
    }
    (*param_1)(uVar1,param_2,iVar11,param_4);
    iVar11 = FUN_2c62ccc0(param_1,param_2,iVar11 + 1,param_4,
                          (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f),uVar8 >> 0x1f,10,0,
                          uVar3 - 1,5);
    if (uVar4 != 0) {
      uVar3 = iVar11 - param_3;
      for (; uVar3 < param_6; uVar3 = uVar3 + 1) {
        (*param_1)(0x20,param_2,iVar11,param_4);
        iVar11 = iVar11 + 1;
      }
    }
  }
  return iVar11;
}

