/* FUN_2c008e4c @ 0x2c008e4c */

int FUN_2c008e4c(uint param_1,undefined2 *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_lr;
  uint local_2c;
  uint local_28;
  int local_24;
  
  puVar2 = DAT_2c008f5c;
  uVar6 = (param_1 & 0xfff) >> 8;
  local_24 = *DAT_2c008f58;
  if (uVar6 < 5) {
    uVar7 = param_1 >> 0xc;
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *DAT_2c008f5c = 0x2c008e7a;
      puVar2[1] = unaff_lr;
    }
    pbVar3 = DAT_2c008f70;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    if (*DAT_2c008f70 != uVar7) {
      if (*DAT_2c008f60 < 2) {
        if (uVar7 == 8) {
          FUN_2c0095f4(DAT_2c008f6c);
        }
        else if (*DAT_2c008f70 == 8) {
          FUN_2c0095f4(DAT_2c008f64);
        }
      }
      FUN_2c0095cc(uVar7);
      *pbVar3 = (byte)uVar7;
    }
    if (uVar6 == 0) {
      local_28 = (param_1 & 0xff) << 0x12 | 0x4000000;
      local_2c = uVar6;
      iVar4 = FUN_2c00961c(&local_28,&local_2c);
      if (iVar4 == 0) {
        *param_2 = (short)(local_2c >> 2);
      }
    }
    else {
      local_28 = (uint)*(ushort *)(DAT_2c008f68 + uVar6 * 2) << 2;
      FUN_2c009600(&local_28,4);
      local_28 = (param_1 & 0xff) << 0x12 | 0x4000000;
      local_2c = 0;
      iVar4 = FUN_2c00961c(&local_28,&local_2c);
      if (iVar4 == 0) {
        *param_2 = (short)(local_2c >> 2);
      }
      local_28 = 0x28000;
      FUN_2c009600(&local_28,4);
    }
    if (iVar5 == 0) {
      *DAT_2c008f5c = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar5);
    }
  }
  else {
    iVar4 = -1;
  }
  if (*DAT_2c008f58 != local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return iVar4;
}

