/* FUN_140bb9b4 @ 0x140bb9b4 */

void FUN_140bb9b4(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  
  iVar11 = (int)param_4;
  *param_6 = param_4;
  param_6[2] = param_1;
  param_6[3] = param_2;
  param_6[4] = param_3;
  param_6[1] = param_5;
  uVar8 = DAT_140bbb84;
  if ((iVar11 == 0) && (in_fpscr = in_fpscr & 0xfffffff, param_4 < 0.0)) {
    uVar8 = DAT_140bbb80;
  }
  uVar7 = in_fpscr & 0xfffffff;
  uVar6 = uVar7 | (uint)(param_4 < 0.0) << 0x1f | (uint)(param_4 == 0.0) << 0x1e;
  bVar1 = (byte)(uVar6 >> 0x18);
  fVar12 = (float)VectorSignedToFloat(iVar11,(byte)(uVar6 >> 0x16) & 3);
  if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != NAN(param_4)) {
    param_4 = fVar12 - param_4;
  }
  else {
    param_4 = param_4 - fVar12;
  }
  iVar13 = (int)param_5;
  uVar2 = DAT_140bbb84;
  if ((iVar13 == 0) && (uVar2 = DAT_140bbb80, uVar6 = uVar7, 0.0 <= param_5)) {
    uVar2 = DAT_140bbb84;
  }
  uVar6 = uVar6 & 0xfffffff;
  uVar7 = uVar6 | (uint)(param_5 < 0.0) << 0x1f | (uint)(param_5 == 0.0) << 0x1e;
  bVar1 = (byte)(uVar7 >> 0x18);
  fVar12 = (float)VectorSignedToFloat(iVar13,(byte)(uVar7 >> 0x16) & 3);
  if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != NAN(param_5)) {
    param_5 = fVar12 - param_5;
  }
  else {
    param_5 = param_5 - fVar12;
  }
  iVar14 = (int)param_1;
  uVar3 = DAT_140bbb84;
  if ((iVar14 == 0) && (uVar7 = uVar6, param_1 < 0.0)) {
    uVar3 = DAT_140bbb80;
  }
  uVar7 = uVar7 & 0xfffffff;
  uVar6 = uVar7 | (uint)(param_1 < 0.0) << 0x1f | (uint)(param_1 == 0.0) << 0x1e;
  bVar1 = (byte)(uVar6 >> 0x18);
  fVar12 = (float)VectorSignedToFloat(iVar14,(byte)(uVar6 >> 0x16) & 3);
  if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != NAN(param_1)) {
    param_1 = fVar12 - param_1;
  }
  else {
    param_1 = param_1 - fVar12;
  }
  iVar10 = (int)param_2;
  uVar4 = DAT_140bbb84;
  if ((iVar10 == 0) && (uVar6 = uVar7, param_2 < 0.0)) {
    uVar4 = DAT_140bbb80;
  }
  uVar6 = uVar6 & 0xfffffff;
  uVar7 = uVar6 | (uint)(param_2 < 0.0) << 0x1f | (uint)(param_2 == 0.0) << 0x1e;
  fVar12 = (float)VectorSignedToFloat(iVar10,(byte)(uVar7 >> 0x16) & 3);
  bVar1 = (byte)(uVar7 >> 0x18);
  if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != NAN(param_2)) {
    param_2 = fVar12 - param_2;
  }
  else {
    param_2 = param_2 - fVar12;
  }
  iVar9 = (int)param_3;
  uVar5 = DAT_140bbb84;
  if ((iVar9 == 0) && (uVar7 = uVar6, param_3 < 0.0)) {
    uVar5 = DAT_140bbb80;
  }
  uVar7 = uVar7 & 0xfffffff | (uint)(param_3 < 0.0) << 0x1f | (uint)(param_3 == 0.0) << 0x1e;
  fVar12 = (float)VectorSignedToFloat(iVar9,(byte)(uVar7 >> 0x16) & 3);
  bVar1 = (byte)(uVar7 >> 0x18);
  if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != NAN(param_3)) {
    param_3 = fVar12 - param_3;
  }
  else {
    param_3 = param_3 - fVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x40,DAT_140bbb8c,DAT_140bbb90,uVar8,iVar11,(int)(param_4 * DAT_140bbb88),uVar2,
               iVar13,(int)(param_5 * DAT_140bbb88),uVar3,iVar14,(int)(param_1 * DAT_140bbb88),uVar4
               ,iVar10,(int)(param_2 * DAT_140bbb88),uVar5,iVar9,(int)(param_3 * DAT_140bbb88));
}

