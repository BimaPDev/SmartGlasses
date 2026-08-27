/* FUN_140bbb94 @ 0x140bbb94 */

void FUN_140bbb94(float param_1,float param_2,float *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  switch(param_6) {
  case 2:
    fVar12 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (fVar12 * DAT_140bbf74) / fVar18;
    fVar12 = (float)FUN_140d9204(fVar18);
    param_2 = (fVar12 * 0.5) / param_2;
    fVar18 = (float)FUN_140d917c(fVar18);
    fVar8 = 1.0 - fVar18;
    fVar13 = 1.0 / (param_2 + 1.0);
    fVar15 = (1.0 - param_2) * fVar13;
    fVar12 = fVar8 * fVar13;
    goto LAB_140bbeb6;
  case 3:
    fVar12 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (fVar12 * DAT_140bbf74) / fVar18;
    fVar12 = (float)FUN_140d9204(fVar18);
    param_2 = (fVar12 * 0.5) / param_2;
    fVar18 = (float)FUN_140d917c(fVar18);
    fVar8 = fVar18 + 1.0;
    fVar13 = 1.0 / (param_2 + 1.0);
    fVar15 = (1.0 - param_2) * fVar13;
    fVar12 = -(fVar13 * fVar8);
LAB_140bbeb6:
    fVar17 = fVar18 * -2.0 * fVar13;
    iVar14 = (int)fVar15;
    fVar13 = fVar8 * 0.5 * fVar13;
    iVar2 = (int)fVar13;
    fVar8 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
    fVar19 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    param_3[3] = fVar12;
    *param_3 = fVar17;
    param_3[1] = fVar15;
    param_3[2] = fVar13;
    param_3[4] = fVar13;
    iVar1 = iVar2;
    fVar20 = fVar19;
    fVar16 = fVar13;
    break;
  case 4:
    fVar18 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (fVar18 * DAT_140bbf74) / fVar12;
    fVar18 = (float)FUN_140d9204(fVar12);
    fVar8 = (float)FUN_140d917c(fVar12);
    fVar12 = DAT_140bbf70;
    param_2 = (fVar18 * 0.5) / param_2;
    fVar17 = 1.0 / (param_2 + 1.0);
    fVar16 = fVar18 * 0.5 * fVar17;
    fVar13 = fVar18 * -0.5 * fVar17;
    fVar15 = (1.0 - param_2) * fVar17;
    param_3[3] = DAT_140bbf70;
    fVar17 = fVar8 * -2.0 * fVar17;
    param_3[2] = fVar16;
    goto LAB_140bbcd2;
  case 5:
    fVar12 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (fVar12 * DAT_140bbf74) / fVar18;
    fVar12 = (float)FUN_140d9204(fVar18);
    param_2 = (fVar12 * 0.5) / param_2;
    fVar18 = (float)FUN_140d917c(fVar18);
    fVar12 = DAT_140bbf70;
    fVar17 = 1.0 / (param_2 + 1.0);
    fVar13 = param_2 * fVar17;
    fVar15 = (1.0 - param_2) * fVar17;
    iVar2 = (int)fVar13;
    iVar14 = (int)fVar15;
    fVar17 = fVar18 * -2.0 * fVar17;
    fVar19 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
    param_3[3] = DAT_140bbf70;
    param_3[2] = fVar13;
    param_3[4] = fVar13;
    *param_3 = fVar17;
    param_3[1] = fVar15;
    iVar1 = iVar2;
    fVar20 = fVar19;
    fVar16 = fVar13;
    break;
  case 6:
    fVar12 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (fVar12 * DAT_140bbf74) / fVar18;
    fVar12 = (float)FUN_140d9204(fVar18);
    param_2 = (fVar12 * 0.5) / param_2;
    fVar12 = (float)FUN_140d917c(fVar18);
    fVar13 = 1.0 / (param_2 + 1.0);
    fVar15 = (1.0 - param_2) * fVar13;
    iVar2 = (int)fVar13;
    iVar14 = (int)fVar15;
    fVar12 = fVar12 * -2.0 * fVar13;
    fVar19 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
    param_3[2] = fVar13;
    param_3[4] = fVar13;
    param_3[3] = fVar12;
    *param_3 = fVar12;
    param_3[1] = fVar15;
    iVar1 = iVar2;
    fVar20 = fVar19;
    fVar16 = fVar13;
    fVar17 = fVar12;
    break;
  case 7:
    fVar12 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (fVar12 * DAT_140bbf74) / fVar18;
    fVar12 = (float)FUN_140d9204(fVar18);
    param_2 = (fVar12 * 0.5) / param_2;
    fVar18 = (float)FUN_140d917c(fVar18);
    fVar12 = param_2 + 1.0;
    fVar15 = (1.0 - param_2) / fVar12;
    fVar13 = 1.0;
    param_3[4] = 1.0;
    fVar12 = (fVar18 * -2.0) / fVar12;
    iVar2 = (int)fVar15;
    fVar8 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    param_3[2] = fVar15;
    param_3[3] = fVar12;
    *param_3 = fVar12;
    param_3[1] = fVar15;
    iVar1 = 1;
    iVar14 = iVar2;
    fVar19 = fVar8;
    fVar20 = 1.0;
    fVar16 = fVar15;
    fVar17 = fVar12;
    break;
  case 8:
    fVar12 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (fVar12 * DAT_140bbf74) / fVar13;
    fVar12 = (float)FUN_140d9204(fVar13);
    param_2 = (fVar12 * 0.5) / param_2;
    fVar18 = (float)FUN_140d9294(0x41200000,param_1 * DAT_140bbf78);
    fVar8 = (float)FUN_140d917c(fVar13);
    fVar12 = 1.0 / (param_2 / fVar18 + 1.0);
    fVar16 = (param_2 * fVar18 + 1.0) * fVar12;
    fVar13 = (-param_2 * fVar18 + 1.0) * fVar12;
    fVar15 = (1.0 - param_2 / fVar18) * fVar12;
    fVar12 = fVar8 * -2.0 * fVar12;
    param_3[2] = fVar16;
    param_3[3] = fVar12;
    param_3[4] = fVar13;
    *param_3 = fVar12;
    param_3[1] = fVar15;
    fVar17 = fVar12;
    goto LAB_140bbcde;
  case 9:
    fVar12 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (fVar12 * DAT_140bbf74) / fVar18;
    fVar12 = (float)FUN_140d9204(fVar18);
    param_1 = param_1 * DAT_140bbf78;
    param_2 = (fVar12 * 0.5) / param_2;
    fVar12 = (float)FUN_140d9294(0x41200000,param_1);
    fVar18 = (float)FUN_140d917c(fVar18);
    fVar20 = fVar12 + (1.0 - fVar12) * fVar18;
    fVar13 = (float)FUN_140d9294(0x41200000,param_1 * 0.5);
    fVar10 = fVar12 + 1.0;
    fVar19 = fVar12 - 1.0;
    fVar8 = fVar10 + fVar18 * fVar19;
    fVar13 = fVar13 + fVar13;
    fVar17 = 1.0 / (fVar8 + param_2 * fVar13);
    fVar15 = (fVar8 + -param_2 * fVar13) * fVar17;
    fVar16 = (fVar20 + param_2 * fVar13 + 1.0) * fVar17 * fVar12;
    fVar13 = (fVar20 + -param_2 * fVar13 + 1.0) * fVar17 * fVar12;
    iVar2 = (int)fVar16;
    fVar8 = (float)VectorSignedToFloat((int)fVar15,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (fVar12 + fVar12) * (fVar19 + -fVar18 * fVar10) * fVar17;
    fVar17 = (fVar19 + fVar18 * fVar10) * -2.0 * fVar17;
    fVar19 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    param_3[3] = fVar12;
    *param_3 = fVar17;
    param_3[1] = fVar15;
    param_3[2] = fVar16;
    param_3[4] = fVar13;
    fVar20 = (float)VectorSignedToFloat((int)fVar13,(byte)(in_fpscr >> 0x16) & 3);
    iVar1 = (int)fVar13;
    iVar14 = (int)fVar15;
    break;
  case 10:
    fVar12 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (fVar12 * DAT_140bbf74) / fVar18;
    fVar12 = (float)FUN_140d9204(fVar18);
    param_1 = param_1 * DAT_140bbf78;
    param_2 = (fVar12 * 0.5) / param_2;
    fVar12 = (float)FUN_140d9294(0x41200000,param_1);
    fVar18 = (float)FUN_140d917c(fVar18);
    fVar20 = fVar12 + 1.0;
    fVar19 = fVar12 - 1.0;
    fVar8 = (float)FUN_140d9294(0x41200000,param_1 * 0.5);
    fVar8 = fVar8 + fVar8;
    fVar13 = fVar20 + fVar19 * fVar18;
    fVar10 = fVar12 + fVar18 * (1.0 - fVar12);
    fVar17 = 1.0 / (param_2 * fVar8 + 1.0 + fVar10);
    fVar16 = fVar12 * (fVar13 + param_2 * fVar8) * fVar17;
    fVar13 = fVar12 * (fVar13 + -param_2 * fVar8) * fVar17;
    fVar15 = (fVar10 + -param_2 * fVar8 + 1.0) * fVar17;
    fVar8 = fVar19 + -fVar20 * fVar18;
    fVar12 = fVar12 * -2.0 * (fVar19 + fVar20 * fVar18) * fVar17;
    fVar17 = (fVar8 + fVar8) * fVar17;
    param_3[2] = fVar16;
    param_3[3] = fVar12;
LAB_140bbcd2:
    param_3[4] = fVar13;
    *param_3 = fVar17;
    param_3[1] = fVar15;
LAB_140bbcde:
    iVar2 = (int)fVar16;
    fVar19 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat((int)fVar15,(byte)(in_fpscr >> 0x16) & 3);
    fVar20 = (float)VectorSignedToFloat((int)fVar13,(byte)(in_fpscr >> 0x16) & 3);
    iVar1 = (int)fVar13;
    iVar14 = (int)fVar15;
    break;
  default:
    fVar18 = 1.0;
    iVar2 = 1;
    param_3[2] = 1.0;
    param_3[3] = 1.0;
    param_3[4] = 1.0;
    *param_3 = 1.0;
    param_3[1] = 1.0;
    iVar1 = iVar2;
    uVar4 = DAT_140bc42c;
    iVar11 = iVar2;
    iVar14 = iVar2;
    iVar9 = iVar2;
    fVar12 = fVar18;
    fVar13 = fVar18;
    fVar8 = fVar18;
    fVar10 = fVar18;
    fVar19 = fVar18;
    fVar20 = fVar18;
    fVar15 = fVar18;
    fVar16 = fVar18;
    fVar17 = fVar18;
    goto LAB_140bbd2a;
  }
  iVar11 = (int)fVar17;
  if ((iVar11 != 0) || (in_fpscr = in_fpscr & 0xfffffff, 0.0 <= fVar17)) {
    fVar18 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x16) & 3);
    fVar10 = (float)VectorSignedToFloat((int)fVar12,(byte)(in_fpscr >> 0x16) & 3);
    uVar4 = DAT_140bbf5c;
  }
  else {
    fVar10 = (float)VectorSignedToFloat((int)fVar12,(byte)(in_fpscr >> 0x16) & 3);
    uVar4 = DAT_140bc438;
    fVar18 = DAT_140bc434;
  }
  iVar9 = (int)fVar12;
  if (fVar17 <= 0.0) {
    fVar18 = (fVar18 - fVar17) * DAT_140bc430;
  }
  else {
LAB_140bbd2a:
    fVar18 = (fVar17 - fVar18) * DAT_140bbf60;
  }
  uVar5 = DAT_140bc42c;
  if ((iVar14 == 0) && (uVar5 = DAT_140bbf64, -1 < (int)((uint)(fVar15 < 0.0) << 0x1f))) {
    uVar5 = DAT_140bbf5c;
  }
  if (0.0 < fVar15) {
    fVar15 = fVar15 - fVar8;
  }
  else {
    fVar15 = fVar8 - fVar15;
  }
  uVar6 = DAT_140bc42c;
  if ((iVar2 == 0) && (uVar6 = DAT_140bbf64, -1 < (int)((uint)(fVar16 < 0.0) << 0x1f))) {
    uVar6 = DAT_140bbf5c;
  }
  if (0.0 < fVar16) {
    fVar16 = fVar16 - fVar19;
  }
  else {
    fVar16 = fVar19 - fVar16;
  }
  uVar7 = DAT_140bc42c;
  if ((iVar9 == 0) && (uVar7 = DAT_140bbf64, -1 < (int)((uint)(fVar12 < 0.0) << 0x1f))) {
    uVar7 = DAT_140bbf5c;
  }
  if (0.0 < fVar12) {
    fVar12 = fVar12 - fVar10;
  }
  else {
    fVar12 = fVar10 - fVar12;
  }
  uVar3 = DAT_140bc42c;
  if ((iVar1 == 0) && (uVar3 = DAT_140bbf5c, (int)((uint)(fVar13 < 0.0) << 0x1f) < 0)) {
    uVar3 = DAT_140bbf64;
  }
  if (0.0 < fVar13) {
    fVar13 = fVar13 - fVar20;
  }
  else {
    fVar13 = fVar20 - fVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x40,DAT_140bbf68,DAT_140bbf6c,uVar4,iVar11,(int)fVar18,uVar5,iVar14,
               (int)(fVar15 * DAT_140bbf60),uVar6,iVar2,(int)(fVar16 * DAT_140bbf60),uVar7,iVar9,
               (int)(fVar12 * DAT_140bbf60),uVar3,iVar1,(int)(fVar13 * DAT_140bbf60));
}

