/* FUN_140362f0 @ 0x140362f0 */

void FUN_140362f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short extraout_r2;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  ushort local_18;
  ushort local_16;
  int local_14;
  
  local_14 = *DAT_14036444;
  FUN_140e5338(0xd,&local_18,param_3,0);
  uVar3 = (uint)local_18;
  bVar10 = -1 < (int)(uVar3 << 0x1c);
  uVar6 = uVar3 & 7;
  sVar5 = extraout_r2;
  if (bVar10) {
    sVar5 = -(short)uVar6;
  }
  uVar7 = (uVar3 & 0x7f) >> 4;
  if (bVar10) {
    uVar6 = (uint)sVar5;
  }
  bVar10 = -1 < (int)(uVar3 << 0x18);
  if (bVar10) {
    uVar7 = -uVar7;
  }
  uVar2 = (uVar3 & 0x7ff) >> 8;
  if (bVar10) {
    uVar7 = (uint)(short)uVar7;
  }
  if (-1 < (int)(uVar3 << 0x14)) {
    uVar2 = (uint)(short)-(short)((uVar3 & 0x7ff) >> 8);
  }
  fVar11 = (float)VectorSignedToFloat(uVar6 + uVar7 + uVar2 + 1,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = fVar11 / 3.0;
  if (0.0 < fVar11) {
    fVar11 = fVar11 + 0.5;
  }
  else {
    fVar11 = fVar11 - 0.5;
  }
  iVar8 = (int)(short)(int)fVar11;
  sVar5 = (short)(iVar8 << 1);
  iVar9 = (int)sVar5;
  FUN_1402a6e8(4,0x47d,DAT_14036454,DAT_14036450,DAT_1403644c,DAT_14036448,uVar3,iVar8);
  if (iVar9 != 0) {
    if (5 < iVar9) {
      iVar9 = (int)(short)(sVar5 + -3);
    }
    FUN_1402a6e8(4,0x485,DAT_14036454,DAT_14036450,DAT_14036458,iVar9,uVar3,iVar8);
    FUN_1402e1fc(0x20b3,&local_16);
    uVar6 = local_16 & 0x1f;
    FUN_1402a6e8(4,0x488,DAT_14036454,DAT_14036450,DAT_1403645c,uVar6);
    if (uVar6 == 0x10) {
      iVar4 = 2;
      iVar1 = iVar9 << 1;
    }
    else {
      iVar4 = 1;
      iVar1 = iVar9;
    }
    if ((int)uVar6 < iVar1) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 - iVar9 * iVar4 & 0xffff;
      if (0x1e < uVar6) {
        uVar6 = 0x1f;
      }
    }
    FUN_1402a6e8(4,0x497,DAT_14036454,DAT_14036450,DAT_14036460,uVar6,uVar3,iVar8);
    FUN_1402e1fc(0x20b3,&local_16);
    local_16 = local_16 & 0xffe0 | (ushort)uVar6;
    FUN_1402e37c(0x20b3);
  }
  if (*DAT_14036444 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

