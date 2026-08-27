/* FUN_1402f130 @ 0x1402f130 */

void FUN_1402f130(uint param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort local_26;
  int local_24;
  
  pbVar2 = DAT_1402f3d8;
  uVar4 = (uint)*DAT_1402f3d8;
  local_24 = *DAT_1402f3dc;
  if (uVar4 - 1 < 2) {
    if ((param_1 == 1) || (param_1 == 4)) goto LAB_1402f158;
    if (param_1 < 7) goto LAB_1402f172;
    if (param_1 != 10) goto LAB_1402f158;
LAB_1402f242:
    uVar6 = 0x115;
    iVar5 = (int)*DAT_1402f3ec + param_3;
    param_3 = UnsignedSaturate(iVar5,6);
    UnsignedDoesSaturate(iVar5,6);
    iVar5 = *DAT_1402f3f0 + param_2;
    param_2 = UnsignedSaturate(iVar5,6);
    UnsignedDoesSaturate(iVar5,6);
    uVar4 = param_3 & 0xffff;
  }
  else {
    if (uVar4 == 0) {
      if (param_1 == 10) goto LAB_1402f158;
    }
    else if (uVar4 == 3) {
      if (param_1 == 10) goto LAB_1402f158;
      if (param_1 == 2) {
        FUN_1402e1fc(0xbb,&local_26,param_3,0);
        if ((int)(param_3 << 0x1f) < 0) {
          local_26 = local_26 | 0x4000;
        }
        else {
          local_26 = local_26 & 0xbfff;
        }
        FUN_1402e37c(0xbb);
        FUN_1402e1fc(9,&local_26);
        uVar4 = (param_3 & 0x3f) >> 1;
        local_26 = local_26 & 0xfc00 | (ushort)(uVar4 << 5) | (ushort)uVar4;
        FUN_1402e37c(9);
        goto LAB_1402f158;
      }
      if (param_1 == 5) {
        FUN_1402e1fc(0xbc,&local_26,param_3,0);
        local_26 = local_26 & 0x9fff | (ushort)((param_3 & 3) << 0xd);
        FUN_1402e37c(0xbc);
        FUN_1402e1fc(0xc,&local_26);
        bVar1 = *pbVar2;
        uVar4 = (param_3 & 0x3f) >> 2;
        if (bVar1 == 0) {
          uVar3 = 0xf;
          local_26 = local_26 & 0xff00 | (ushort)(uVar4 << 4);
        }
        else if (bVar1 == 3) {
          uVar3 = 0xf;
          local_26 = local_26 & 0xff00 | (ushort)(uVar4 << 4);
        }
        else {
          uVar3 = 0x1f;
          local_26 = local_26 & 0xfc00 | (ushort)(uVar4 << 5);
        }
        local_26 = local_26 | (ushort)uVar4 & uVar3;
        FUN_1402e37c(0xc);
        goto LAB_1402f158;
      }
    }
LAB_1402f172:
    uVar4 = param_3;
    if (param_1 - 7 < 2) {
      uVar6 = param_1 + 8 & 0xff;
    }
    else if (param_1 == 9) {
      uVar6 = 0x43;
    }
    else {
      if (param_1 == 10) goto LAB_1402f242;
      uVar6 = param_1 + 7;
      if (param_1 == 6) {
        iVar5 = (int)*DAT_1402f3e0 + param_3;
        param_3 = UnsignedSaturate(iVar5,6);
        UnsignedDoesSaturate(iVar5,6);
        iVar5 = *DAT_1402f3e4 + param_2;
        param_2 = UnsignedSaturate(iVar5,6);
        UnsignedDoesSaturate(iVar5,6);
        uVar4 = param_3 & 0xffff;
      }
    }
  }
  FUN_1402e1fc(uVar6,&local_26);
  iVar5 = DAT_1402f3e8 + param_1 * 0x12;
  local_26 = local_26 ^
             ((ushort)(param_3 << (*(ushort *)(iVar5 + 0x10) & 0xff)) ^ local_26) &
             *(ushort *)(iVar5 + 0xe);
  local_26 = local_26 ^
             ((ushort)(param_2 << (*(ushort *)(iVar5 + 0xc) & 0xff)) ^ local_26) &
             *(ushort *)(iVar5 + 10);
  FUN_1402e37c(uVar6);
  if (*pbVar2 - 1 < 2) {
    if (param_1 == 6) {
      FUN_1402e1fc(0x72,&local_26);
      local_26 = local_26 & 0xf03f | (ushort)((param_3 & 0x3f) << 6);
    }
    else {
      if (param_1 != 10) {
        if (param_1 == 3) {
          FUN_1402e1fc(0x73,&local_26);
          local_26 = local_26 & 0xffe0 | (ushort)uVar4 & 0x1f;
        }
        else {
          if (param_1 != 5) goto LAB_1402f158;
          FUN_1402e1fc(0x73,&local_26);
          local_26 = local_26 & 0xfc1f | (ushort)((param_3 & 0x1f) << 5);
        }
        FUN_1402e37c(0x73);
        goto LAB_1402f158;
      }
      FUN_1402e1fc(0x72,&local_26);
      local_26 = local_26 & 0xffc0 | (ushort)uVar4 & 0x3f;
    }
    FUN_1402e37c(0x72);
  }
LAB_1402f158:
  if (*DAT_1402f3dc == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

