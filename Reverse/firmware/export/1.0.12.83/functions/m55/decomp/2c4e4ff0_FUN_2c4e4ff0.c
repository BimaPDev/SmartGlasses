/* FUN_2c4e4ff0 @ 0x2c4e4ff0 */

void FUN_2c4e4ff0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float *param_6)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  
  uVar1 = in_fpscr & 0xfffffff;
  iVar12 = (int)param_4;
  param_6[2] = param_1;
  param_6[3] = param_2;
  param_6[4] = param_3;
  *param_6 = param_4;
  param_6[1] = param_5;
  uVar5 = DAT_2c4e5190;
  if ((param_4 < 0.0) && (iVar12 == 0)) {
    uVar5 = DAT_2c4e51a0;
  }
  uVar8 = uVar1 | (uint)(param_4 < 0.0) << 0x1f | (uint)(param_4 == 0.0) << 0x1e;
  fVar13 = (float)VectorSignedToFloat(iVar12,(byte)(uVar8 >> 0x16) & 3);
  bVar2 = (byte)(uVar8 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != NAN(param_4)) {
    param_4 = fVar13 - param_4;
  }
  else {
    param_4 = param_4 - fVar13;
  }
  iVar14 = (int)param_5;
  uVar3 = DAT_2c4e5190;
  if ((iVar14 == 0) && (uVar8 = uVar1, param_5 < 0.0)) {
    uVar3 = DAT_2c4e51a0;
  }
  uVar8 = uVar8 & 0xfffffff;
  uVar1 = uVar8 | (uint)(param_5 < 0.0) << 0x1f | (uint)(param_5 == 0.0) << 0x1e;
  fVar13 = (float)VectorSignedToFloat(iVar14,(byte)(uVar1 >> 0x16) & 3);
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != NAN(param_5)) {
    param_5 = fVar13 - param_5;
  }
  else {
    param_5 = param_5 - fVar13;
  }
  iVar11 = (int)param_1;
  uVar4 = DAT_2c4e5190;
  if ((param_1 < 0.0) && (iVar11 == 0)) {
    uVar4 = DAT_2c4e51a0;
  }
  uVar1 = uVar8 | (uint)(param_1 < 0.0) << 0x1f | (uint)(param_1 == 0.0) << 0x1e;
  fVar13 = (float)VectorSignedToFloat(iVar11,(byte)(uVar1 >> 0x16) & 3);
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != NAN(param_1)) {
    param_1 = fVar13 - param_1;
  }
  else {
    param_1 = param_1 - fVar13;
  }
  iVar10 = (int)param_2;
  uVar6 = DAT_2c4e5190;
  if ((param_2 < 0.0) && (iVar10 == 0)) {
    uVar6 = DAT_2c4e51a0;
  }
  uVar1 = uVar8 | (uint)(param_2 < 0.0) << 0x1f | (uint)(param_2 == 0.0) << 0x1e;
  fVar13 = (float)VectorSignedToFloat(iVar10,(byte)(uVar1 >> 0x16) & 3);
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != NAN(param_2)) {
    param_2 = fVar13 - param_2;
  }
  else {
    param_2 = param_2 - fVar13;
  }
  iVar9 = (int)param_3;
  uVar7 = DAT_2c4e5190;
  if ((param_3 < 0.0) && (iVar9 == 0)) {
    uVar7 = DAT_2c4e51a0;
  }
  uVar1 = uVar8 | (uint)(param_3 < 0.0) << 0x1f | (uint)(param_3 == 0.0) << 0x1e;
  fVar13 = (float)VectorSignedToFloat(iVar9,(byte)(uVar1 >> 0x16) & 3);
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != NAN(param_3)) {
    param_3 = fVar13 - param_3;
  }
  else {
    param_3 = param_3 - fVar13;
  }
  FUN_2c6741e8(0x40,DAT_2c4e5198,DAT_2c4e519c,uVar5,iVar12,(int)(param_4 * DAT_2c4e5194),uVar3,
               iVar14,(int)(param_5 * DAT_2c4e5194),uVar4,iVar11,(int)(param_1 * DAT_2c4e5194),uVar6
               ,iVar10,(int)(param_2 * DAT_2c4e5194),uVar7,iVar9,(int)(param_3 * DAT_2c4e5194));
                    /* WARNING: Could not recover jumptable at 0x2c673e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c673e24)(param_6,1);
  return;
}

