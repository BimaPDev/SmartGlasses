/* FUN_1402e37c @ 0x1402e37c */

undefined4 FUN_1402e37c(uint param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_lr;
  int local_30;
  int local_2c;
  
  uVar7 = DAT_1402e4bc;
  puVar4 = DAT_1402e4b8;
  pbVar3 = DAT_1402e4b4;
  uVar9 = (param_1 & 0xfff) >> 8;
  local_2c = *DAT_1402e4b0;
  if (uVar9 < 5) {
    uVar10 = param_1 >> 0xc;
    iVar8 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      iVar8 = getBasePriority();
    }
    if (iVar8 != 0x40) {
      bVar1 = *DAT_1402e4b4;
      *DAT_1402e4b8 = 0x1402e3b0;
      puVar4[1] = unaff_lr;
      uVar6 = bVar1 + 1;
      *pbVar3 = (char)uVar6 + (char)(uint)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x23) * -10;
      *(undefined4 *)(DAT_1402e4c0 + (uint)bVar1 * 4) = unaff_lr;
    }
    pbVar3 = DAT_1402e4dc;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x40);
    }
    if (*DAT_1402e4dc != uVar10) {
      if (*DAT_1402e4c4 < 2) {
        if (uVar10 == 8) {
          FUN_140278b8(DAT_1402e4d8);
        }
        else if (*DAT_1402e4dc == 8) {
          FUN_140278b8(DAT_1402e4d0);
        }
      }
      FUN_14027890(uVar10);
      *pbVar3 = (byte)uVar10;
    }
    if (uVar9 == 0) {
      local_30 = (param_2 | (param_1 & 0xff) << 0x10) << 2;
      uVar5 = FUN_140278c0(&local_30,4);
    }
    else {
      local_30 = (uint)*(ushort *)(DAT_1402e4d4 + uVar9 * 2) << 2;
      FUN_140278c0(&local_30,4);
      local_30 = (param_2 | (param_1 & 0xff) << 0x10) << 2;
      uVar5 = FUN_140278c0(&local_30,4);
      local_30 = 0x28000;
      FUN_140278c0(&local_30,4);
    }
    if (iVar8 == 0) {
      *DAT_1402e4b8 = 0xffffffff;
    }
    bVar1 = *DAT_1402e4c8;
    uVar7 = bVar1 + 1;
    *DAT_1402e4c8 =
         (char)uVar7 + (char)(uint)((ulonglong)DAT_1402e4bc * (ulonglong)uVar7 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402e4cc + (uint)bVar1 * 4) = unaff_lr;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(iVar8);
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  if (*DAT_1402e4b0 == local_2c) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

