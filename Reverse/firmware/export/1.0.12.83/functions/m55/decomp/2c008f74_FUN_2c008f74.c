/* FUN_2c008f74 @ 0x2c008f74 */

undefined4 FUN_2c008f74(uint param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  int local_28;
  int local_24;
  
  puVar2 = DAT_2c009064;
  uVar6 = (param_1 & 0xfff) >> 8;
  local_24 = *DAT_2c009060;
  if (uVar6 < 5) {
    uVar7 = param_1 >> 0xc;
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *DAT_2c009064 = 0x2c008fa2;
      puVar2[1] = unaff_lr;
    }
    pbVar3 = DAT_2c009078;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    if (*DAT_2c009078 != uVar7) {
      if (*DAT_2c009068 < 2) {
        if (uVar7 == 8) {
          FUN_2c0095f4(DAT_2c009074);
        }
        else if (*DAT_2c009078 == 8) {
          FUN_2c0095f4(DAT_2c00906c);
        }
      }
      FUN_2c0095cc(uVar7);
      *pbVar3 = (byte)uVar7;
    }
    if (uVar6 == 0) {
      local_28 = (param_2 | (param_1 & 0xff) << 0x10) << 2;
      uVar4 = FUN_2c009600(&local_28,4);
    }
    else {
      local_28 = (uint)*(ushort *)(DAT_2c009070 + uVar6 * 2) << 2;
      FUN_2c009600(&local_28,4);
      local_28 = (param_2 | (param_1 & 0xff) << 0x10) << 2;
      uVar4 = FUN_2c009600(&local_28,4);
      local_28 = 0x28000;
      FUN_2c009600(&local_28,4);
    }
    if (iVar5 == 0) {
      *DAT_2c009064 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar5);
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  if (*DAT_2c009060 == local_24) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

