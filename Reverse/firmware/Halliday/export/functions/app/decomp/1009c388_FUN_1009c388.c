/* FUN_1009c388 @ 0x1009c388 */

void FUN_1009c388(int *param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_3c = *param_1;
  local_38 = param_1[1];
  local_34 = param_1[2];
  FUN_1009c220(&local_3c);
  if (*param_1 == 0x5a) {
    param_1[3] = (int)local_30;
    param_1[5] = (int)local_28;
    param_1[7] = (int)local_20;
    param_1[9] = (int)local_18;
    param_1[4] = (int)local_2c;
    param_1[6] = (int)local_24;
    param_1[8] = (int)local_1c;
    param_1[1] = local_38;
    param_1[2] = local_34;
    *param_1 = local_3c;
  }
  else {
    fVar11 = (float)VectorUnsignedToFloat
                              ((uint)*(ushort *)(DAT_1009c4e4 + *param_1 * 2),
                               (byte)(in_fpscr >> 0x16) & 3);
    fVar10 = DAT_1009c4e8 - fVar11;
    fVar4 = (fVar11 * local_24 + local_2c * fVar10) * DAT_1009c4ec;
    fVar6 = (fVar11 * local_1c + local_24 * fVar10) * DAT_1009c4ec;
    fVar8 = (fVar11 * local_20 + local_28 * fVar10) * DAT_1009c4ec;
    fVar2 = (fVar11 * local_14 + local_1c * fVar10) * DAT_1009c4ec;
    fVar1 = (fVar11 * local_18 + local_20 * fVar10) * DAT_1009c4ec;
    fVar3 = (local_28 * fVar11 + local_30 * fVar10) * DAT_1009c4ec;
    fVar5 = (fVar4 * fVar10 + fVar11 * fVar6) * DAT_1009c4ec;
    fVar9 = (fVar8 * fVar10 + fVar11 * fVar1) * DAT_1009c4ec;
    fVar6 = (fVar11 * fVar2 + fVar6 * fVar10) * DAT_1009c4ec;
    fVar8 = (fVar11 * fVar8 + fVar10 * fVar3) * DAT_1009c4ec;
    fVar7 = (fVar5 * fVar10 + fVar11 * fVar6) * DAT_1009c4ec;
    fVar10 = (fVar11 * fVar9 + fVar8 * fVar10) * DAT_1009c4ec;
    if (param_2 == 0) {
      param_1[3] = (int)local_30;
      param_1[4] = (int)local_2c;
      param_1[5] = (int)fVar3;
      param_1[6] = (int)fVar4;
      param_1[7] = (int)fVar8;
      param_1[8] = (int)fVar5;
      param_1[9] = (int)fVar10;
      param_1[10] = (int)fVar7;
      return;
    }
    param_1[3] = (int)fVar10;
    param_1[4] = (int)fVar7;
    param_1[5] = (int)fVar9;
    param_1[6] = (int)fVar6;
    param_1[7] = (int)fVar1;
    param_1[8] = (int)fVar2;
    param_1[9] = (int)local_18;
  }
  param_1[10] = (int)local_14;
  return;
}

