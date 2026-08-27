/* FUN_2c667938 @ 0x2c667938 */

int FUN_2c667938(double *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  double in_d0;
  undefined4 extraout_s1;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_28;
  double local_20;
  double local_18;
  
  uVar2 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar3 = uVar2 & 0x7fffffff;
  if ((int)uVar3 <= DAT_2c667bb0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    *param_1 = in_d0;
    return 0;
  }
  if ((int)uVar3 <= DAT_2c667bb4) {
    if (0 < (int)uVar2) {
      dVar9 = in_d0 - DAT_2c667b70;
      dVar10 = DAT_2c667b78;
      if (uVar3 == DAT_2c667bb4 - 0x9b780U) {
        dVar9 = dVar9 - DAT_2c667b88;
        dVar10 = DAT_2c667b90;
      }
      *param_1 = dVar9 - dVar10;
      param_1[1] = (dVar9 - (dVar9 - dVar10)) - dVar10;
      return 1;
    }
    dVar9 = in_d0 + DAT_2c667b70;
    dVar10 = DAT_2c667b78;
    if (uVar3 == DAT_2c667bc8) {
      dVar9 = dVar9 + DAT_2c667b88;
      dVar10 = DAT_2c667b90;
    }
    *param_1 = dVar9 + dVar10;
    param_1[1] = (dVar9 - (dVar9 + dVar10)) + dVar10;
    return -1;
  }
  if (DAT_2c667bb8 < (int)uVar3) {
    if (DAT_2c667bbc < (int)uVar3) {
      param_1[1] = in_d0 - in_d0;
      *param_1 = in_d0 - in_d0;
      return 0;
    }
    dVar10 = (double)(((ulonglong)(uVar3 + (((int)uVar3 >> 0x14) + -0x416) * -0x100000) << 0x20) +
                     ((ulonglong)in_d0 & 0xffffffff));
    uVar7 = VectorFloatToSigned(dVar10,3);
    local_28 = (double)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
    dVar10 = (dVar10 - local_28) * DAT_2c667b80;
    uVar7 = VectorFloatToSigned(dVar10,3);
    local_20 = (double)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
    local_18 = (dVar10 - local_20) * DAT_2c667b80;
    iVar1 = FUN_2c667d00(&local_28,param_1);
    if (-1 < (longlong)in_d0) {
      return iVar1;
    }
    *param_1 = -*param_1;
    param_1[1] = -param_1[1];
    return -iVar1;
  }
  uVar7 = FUN_2c666bc0();
  iVar1 = VectorFloatToSigned((double)CONCAT44(extraout_s1,uVar7) * DAT_2c667b98 + 0.5,3);
  dVar6 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  dVar10 = (double)CONCAT44(extraout_s1,uVar7) + -dVar6 * DAT_2c667b70;
  dVar9 = dVar6 * DAT_2c667b78;
  dVar5 = -dVar6;
  if ((iVar1 < 0x20) && (*(uint *)(DAT_2c667bc4 + (iVar1 + -1) * 4) != uVar3)) {
LAB_2c667a92:
    dVar8 = dVar10 - dVar9;
    dVar4 = dVar10;
  }
  else {
    dVar8 = dVar10 - dVar9;
    dVar4 = dVar10;
    if (0x10 < (int)((uVar3 >> 0x14) - (((uint)((ulonglong)dVar8 >> 0x20) & 0x7fffffff) >> 0x14))) {
      dVar4 = dVar10 + dVar5 * DAT_2c667b88;
      dVar9 = -((dVar10 - dVar4) + dVar5 * DAT_2c667b88) + dVar6 * DAT_2c667b90;
      dVar8 = dVar4 - dVar9;
      if ((int)(((int)uVar3 >> 0x14) - (((uint)((ulonglong)dVar8 >> 0x20) & 0x7fffffff) >> 0x14)) <
          0x32) {
        *param_1 = dVar8;
        goto LAB_2c667a9a;
      }
      dVar10 = dVar4 + dVar5 * DAT_2c667ba0;
      dVar9 = -((dVar4 - dVar10) + dVar5 * DAT_2c667ba0) + dVar6 * DAT_2c667ba8;
      goto LAB_2c667a92;
    }
  }
  *param_1 = dVar8;
LAB_2c667a9a:
  dVar9 = (dVar4 - dVar8) - dVar9;
  param_1[1] = dVar9;
  if ((longlong)in_d0 < 0) {
    iVar1 = -iVar1;
    *param_1 = -dVar8;
    param_1[1] = -dVar9;
  }
  return iVar1;
}

