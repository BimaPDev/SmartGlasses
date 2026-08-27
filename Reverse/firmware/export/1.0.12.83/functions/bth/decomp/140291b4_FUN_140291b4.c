/* FUN_140291b4 @ 0x140291b4 */

int FUN_140291b4(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_30;
  int local_2c;
  
  local_2c = *DAT_14029314;
  iVar12 = param_1;
  if (param_1 == 0) {
    iVar12 = 10;
  }
  local_30 = 0;
  uVar8 = FUN_140e58f8(param_1,param_2,0);
  uVar9 = FUN_140e5178();
  pbVar7 = DAT_14029338;
  uVar6 = DAT_14029320;
  puVar5 = DAT_1402931c;
  lVar4 = (ulonglong)DAT_14029318 * (ulonglong)(uVar8 * iVar12);
  uVar11 = (uint)lVar4;
  uVar3 = (ulonglong)DAT_14029318;
  uVar14 = (uint)((ulonglong)lVar4 >> 0x26);
  iVar13 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar13 = getBasePriority();
  }
  if (iVar13 != 0x40) {
    bVar1 = *DAT_14029338;
    *DAT_1402931c = 0x14029208;
    puVar5[1] = unaff_lr;
    uVar11 = bVar1 + 1;
    *pbVar7 = (char)uVar11 + (char)(uint)((ulonglong)uVar6 * (ulonglong)uVar11 >> 0x23) * -10;
    *(undefined4 *)(DAT_14029324 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (param_2 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = &local_30;
  }
  iVar12 = FUN_140e5798((uint)(uVar3 * (iVar12 * (uVar9 >> 2)) >> 0x26),piVar10,uVar11,0x40);
  if (iVar13 == 0) {
    *DAT_1402931c = 0xffffffff;
  }
  pbVar7 = DAT_14029328;
  uVar6 = DAT_14029320;
  bVar1 = *DAT_14029328;
  *(undefined4 *)(DAT_1402932c + (uint)bVar1 * 4) = unaff_lr;
  uVar11 = bVar1 + 1;
  *pbVar7 = (char)uVar11 + (char)(uint)((ulonglong)uVar6 * (ulonglong)uVar11 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar13);
  }
  fVar17 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
  fVar15 = (float)VectorUnsignedToFloat(iVar12,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = (float)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x16) & 3);
  fVar16 = (fVar17 / fVar15) * fVar16;
  iVar13 = (uint)(0.0 < fVar16) * (int)fVar16;
  if (param_2 == 0) {
    iVar13 = DAT_14029334 * (uint)((ulonglong)DAT_14029330 * (ulonglong)(iVar13 + 500000) >> 0x32);
  }
  else if (local_30 != 0) {
    lVar4 = (ulonglong)(uint)(local_30 * 100) * (ulonglong)uVar8;
    iVar13 = FUN_140e414c((int)lVar4,(int)((ulonglong)lVar4 >> 0x20),iVar13,0);
    fVar16 = (float)VectorSignedToFloat(uVar14 * 100,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorUnsignedToFloat(iVar12 * 100 - iVar13,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = (fVar17 / fVar15) * fVar16;
    iVar13 = (uint)(0.0 < fVar16) * (int)fVar16;
  }
  if (*DAT_14029314 == local_2c) {
    return iVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

