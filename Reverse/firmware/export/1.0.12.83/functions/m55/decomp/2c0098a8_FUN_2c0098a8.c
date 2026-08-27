/* FUN_2c0098a8 @ 0x2c0098a8 */

int FUN_2c0098a8(int param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_30;
  int local_2c;
  
  iVar9 = param_1;
  if (param_1 == 0) {
    iVar9 = 10;
  }
  local_2c = *DAT_2c0099c4;
  local_30 = 0;
  uVar4 = FUN_2c013694(param_1,param_2,0);
  uVar5 = FUN_2c013ab0();
  puVar3 = DAT_2c0099cc;
  uVar10 = (uint)((ulonglong)DAT_2c0099c8 * (ulonglong)(uVar4 * iVar9) >> 0x26);
  lVar2 = (ulonglong)DAT_2c0099c8 * (ulonglong)(iVar9 * (uVar5 >> 2));
  uVar8 = (undefined4)lVar2;
  iVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    uVar8 = 0x2c0098fe;
    *DAT_2c0099cc = 0x2c0098fe;
    puVar3[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (param_2 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = &local_30;
  }
  iVar6 = FUN_2c016258((uint)((ulonglong)lVar2 >> 0x26),piVar7,uVar8,0x40);
  if (iVar9 == 0) {
    *DAT_2c0099cc = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar9);
  }
  fVar13 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
  iVar9 = VectorFloatToUnsigned((fVar13 / fVar11) * fVar12,3);
  if (param_2 == 0) {
    iVar9 = DAT_2c0099d8 *
            (uint)((ulonglong)DAT_2c0099d4 * (ulonglong)(uint)(DAT_2c0099d0 + iVar9) >> 0x32);
  }
  else if (local_30 != 0) {
    lVar2 = (ulonglong)(uint)(local_30 * 100) * (ulonglong)uVar4;
    iVar9 = FUN_2c013c1c((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),iVar9,0);
    fVar12 = (float)VectorSignedToFloat(uVar10 * 100,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = (float)VectorUnsignedToFloat(iVar6 * 100 - iVar9,(byte)(in_fpscr >> 0x16) & 3);
    iVar9 = VectorFloatToUnsigned((fVar13 / fVar11) * fVar12,3);
  }
  if (*DAT_2c0099c4 == local_2c) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

