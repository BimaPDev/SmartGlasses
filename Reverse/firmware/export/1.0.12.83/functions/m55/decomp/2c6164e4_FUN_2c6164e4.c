/* FUN_2c6164e4 @ 0x2c6164e4 */

void FUN_2c6164e4(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  int local_24;
  
  local_24 = *DAT_2c616698;
  iVar7 = FUN_2c607404();
  iVar7 = (int)((uint)*(ushort *)(param_1 + 0x84) * iVar7 * 0x100) >> 0x10;
  sVar2 = FUN_2c605068(param_1);
  if ((int)((uint)*(byte *)(param_1 + 0x88) << 0x1c) < 0) {
    uVar8 = *(byte *)(param_1 + 0x88) & 7;
    if (uVar8 == 1) {
      sVar3 = FUN_2c6033b4(param_1,0,0x32);
      sVar6 = FUN_2c6033b4(param_1,0,0x12);
      sVar2 = (sVar6 + sVar3 + *(short *)(param_1 + 0x14)) - sVar2;
      sVar6 = FUN_2c6033b4(param_1,0x50000,0x49);
      sVar3 = FUN_2c6033b4(param_1,0x20000,1);
      sVar3 = sVar3 + sVar6;
      local_28 = *(short *)(param_1 + 0x18);
      local_2a = *(short *)(param_1 + 0x16) - sVar3;
      local_26 = *(short *)(param_1 + 0x1a) + sVar3;
      iVar9 = *(ushort *)(param_1 + 0x82) - 1;
      if (param_2 < iVar9) {
        local_2c = (sVar2 - sVar3) + (short)((iVar7 * param_2) / iVar9);
        local_28 = sVar2 + sVar3 + (short)((iVar7 + iVar7 * param_2) / iVar9);
        FUN_2c6078f0(param_1,&local_2c);
      }
      if (param_2 != 0) {
        iVar10 = iVar7 * (param_2 + -1);
        iVar9 = *(ushort *)(param_1 + 0x82) - 1;
        local_2c = (short)(iVar10 / iVar9) + (sVar2 - sVar3);
        local_28 = sVar2 + sVar3 + (short)((iVar7 + iVar10) / iVar9);
        FUN_2c6078f0(param_1,&local_2c);
      }
    }
    else {
      if (uVar8 != 2) goto LAB_2c616526;
      sVar3 = FUN_2c6033b4(param_1,0,0x15);
      uVar1 = *(ushort *)(param_1 + 0x82);
      iVar9 = (int)sVar3 * (uint)*(ushort *)(param_1 + 0x84);
      sVar4 = FUN_2c6033b4(param_1,0,0x32);
      sVar3 = *(short *)(param_1 + 0x14);
      sVar6 = (short)((iVar7 + (iVar9 >> 8)) / (int)(uint)uVar1);
      sVar5 = FUN_2c6033b4(param_1,0,0x12);
      FUN_2c607338(param_1,&local_2c);
      local_2c = (short)param_2 * sVar6 + ((sVar5 + sVar4 + sVar3) - sVar2);
      local_28 = sVar6 + local_2c;
      local_2c = local_2c - (short)((uint)iVar9 >> 8);
      FUN_2c6078f0(param_1,&local_2c);
    }
    if (*DAT_2c616698 == local_24) {
      return;
    }
  }
  else {
LAB_2c616526:
    if (*DAT_2c616698 == local_24) {
      FUN_2c607df0(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

