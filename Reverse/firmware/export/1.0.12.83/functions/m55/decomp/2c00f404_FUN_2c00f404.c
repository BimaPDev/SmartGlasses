/* FUN_2c00f404 @ 0x2c00f404 */

void FUN_2c00f404(uint param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort local_26;
  int local_24;
  
  pbVar2 = DAT_2c00f6a4;
  uVar4 = (uint)*DAT_2c00f6a4;
  local_24 = *DAT_2c00f68c;
  if (uVar4 - 1 < 2) {
    if (((param_1 == 1) || (param_1 == 4)) || ((6 < param_1 && (param_1 != 10)))) goto LAB_2c00f4c0;
  }
  else {
    if ((uVar4 == 3 || uVar4 == 0) && (param_1 == 10)) goto LAB_2c00f4c0;
    if (uVar4 == 3) {
      if (param_1 == 2) {
        uVar4 = (param_3 & 0x3f) >> 1;
        FUN_2c008e4c(0xbb,&local_26);
        if ((int)(param_3 << 0x1f) < 0) {
          local_26 = local_26 | 0x4000;
        }
        else {
          local_26 = local_26 & 0xbfff;
        }
        FUN_2c008f74(0xbb);
        FUN_2c008e4c(9,&local_26);
        local_26 = local_26 & 0xfc00 | (ushort)(uVar4 << 5) | (ushort)uVar4;
        FUN_2c008f74(9);
        goto LAB_2c00f4c0;
      }
      if (param_1 == 5) {
        FUN_2c008e4c(0xbc,&local_26);
        uVar4 = (param_3 & 0x3f) >> 2;
        local_26 = local_26 & 0x9fff | (ushort)((param_3 & 3) << 0xd);
        FUN_2c008f74(0xbc);
        FUN_2c008e4c(0xc,&local_26);
        bVar1 = *pbVar2;
        if ((bVar1 == 0) || (bVar1 == 3)) {
          uVar3 = 0xf;
          local_26 = local_26 & 0xff00 | (ushort)(uVar4 << 4);
        }
        else {
          uVar3 = 0x1f;
          local_26 = local_26 & 0xfc00 | (ushort)(uVar4 << 5);
        }
        local_26 = local_26 | (ushort)uVar4 & uVar3;
        FUN_2c008f74(0xc);
        goto LAB_2c00f4c0;
      }
    }
  }
  uVar4 = param_3;
  if (param_1 - 7 < 2) {
    uVar6 = param_1 + 8 & 0xff;
  }
  else if (param_1 == 9) {
    uVar6 = 0x43;
  }
  else if (param_1 == 10) {
    uVar6 = 0x115;
    uVar4 = UnsignedSaturate(param_3 + (int)*DAT_2c00f69c,6);
    UnsignedDoesSaturate(param_3 + (int)*DAT_2c00f69c,6);
    iVar5 = *DAT_2c00f6a0 + param_2;
    param_3 = uVar4 & 0xffff;
    param_2 = UnsignedSaturate(iVar5,6);
    UnsignedDoesSaturate(iVar5,6);
  }
  else {
    uVar6 = param_1 + 7;
    if (param_1 == 6) {
      uVar4 = UnsignedSaturate(param_3 + (int)*DAT_2c00f690,6);
      UnsignedDoesSaturate(param_3 + (int)*DAT_2c00f690,6);
      iVar5 = *DAT_2c00f694 + param_2;
      param_3 = uVar4 & 0xffff;
      param_2 = UnsignedSaturate(iVar5,6);
      UnsignedDoesSaturate(iVar5,6);
    }
  }
  FUN_2c008e4c(uVar6,&local_26);
  iVar5 = DAT_2c00f698 + param_1 * 0x12;
  local_26 = local_26 ^
             ((ushort)(uVar4 << (*(ushort *)(iVar5 + 0x10) & 0xff)) ^ local_26) &
             *(ushort *)(iVar5 + 0xe);
  local_26 = local_26 ^
             ((ushort)(param_2 << (*(ushort *)(iVar5 + 0xc) & 0xff)) ^ local_26) &
             *(ushort *)(iVar5 + 10);
  FUN_2c008f74(uVar6);
  if (*pbVar2 - 1 < 2) {
    if ((param_1 == 6) || (param_1 == 10)) {
      FUN_2c008e4c(0x72,&local_26);
      if (param_1 == 6) {
        local_26 = local_26 & 0xf03f | (ushort)((uVar4 & 0x3f) << 6);
      }
      else {
        local_26 = local_26 & 0xffc0 | (ushort)param_3 & 0x3f;
      }
      FUN_2c008f74(0x72);
    }
    else if ((param_1 == 3) || (param_1 == 5)) {
      FUN_2c008e4c(0x73,&local_26);
      if (param_1 == 3) {
        local_26 = local_26 & 0xffe0 | (ushort)param_3 & 0x1f;
      }
      else {
        local_26 = local_26 & 0xfc1f | (ushort)((uVar4 & 0x1f) << 5);
      }
      FUN_2c008f74(0x73);
    }
  }
LAB_2c00f4c0:
  if (*DAT_2c00f68c != local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return;
}

