/* FUN_1402f7ec @ 0x1402f7ec */

void FUN_1402f7ec(int param_1)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 unaff_lr;
  ushort local_26;
  uint local_24;
  
  puVar7 = DAT_1402fb1c;
  pbVar6 = DAT_1402fb18;
  local_24 = *DAT_1402fb14;
  iVar12 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar12 = getBasePriority();
  }
  if (iVar12 != 0x40) {
    bVar1 = *DAT_1402fb18;
    *DAT_1402fb1c = 0x1402f80e;
    puVar7[1] = unaff_lr;
    uVar9 = bVar1 + 1;
    *pbVar6 = (char)uVar9 + (char)(uint)((ulonglong)DAT_1402fb20 * (ulonglong)uVar9 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402fb24 + (uint)bVar1 * 4) = unaff_lr;
  }
  pbVar6 = DAT_1402fb2c;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar9 = (uint)*DAT_1402fb28;
  if (*DAT_1402fb2c - 2 < 2) {
    FUN_1402e1fc(0x47,&local_26);
    pbVar5 = DAT_1402fb30;
    iVar10 = (uint)(byte)local_26 - (int)*DAT_1402fb3c;
    uVar11 = UnsignedSaturate(iVar10,8);
    UnsignedDoesSaturate(iVar10,8);
    uVar11 = uVar11 & 0xffff;
    if (uVar11 < uVar9) {
      do {
        uVar11 = uVar11 + 1 & 0xffff;
        FUN_1402e7d8(uVar11,*pbVar5);
      } while (uVar11 < uVar9);
      FUN_140e5908(10);
      FUN_1402f598(*pbVar6);
      pbVar5 = DAT_1402fb44;
      goto joined_r0x1402f902;
    }
    if (uVar9 == uVar11) {
      iVar10 = (uint)(local_26 >> 8) - (int)*DAT_1402fb40;
      uVar4 = UnsignedSaturate(iVar10,8);
      UnsignedDoesSaturate(iVar10,8);
      uVar11 = (uint)*DAT_1402fb30;
      if (uVar11 == (uVar4 & 0xffff)) goto LAB_1402f852;
    }
    else {
      uVar11 = (uint)*DAT_1402fb30;
    }
    FUN_1402e7d8(uVar9,uVar11);
  }
  else {
    FUN_1402e7d8(uVar9,*DAT_1402fb30);
  }
LAB_1402f852:
  FUN_1402f598(*pbVar6);
  pbVar5 = DAT_1402fb44;
joined_r0x1402f902:
  DAT_1402fb44 = pbVar5;
  if (param_1 == 2) {
    if (*pbVar6 == 3) {
      FUN_1402e718(1);
      FUN_1402ee18(6,0,1,1,1);
      FUN_140e5908(0x708);
      if (*DAT_1402fb44 - 1 < 2) {
        FUN_140e5398(0x50);
      }
      FUN_1402e1fc(0x15,&local_26);
      local_26 = local_26 & 0xfffc | 2;
      FUN_1402e37c(0x15);
      FUN_1402e718(0);
    }
    else {
      if (*pbVar5 == 2) {
        FUN_1402e1fc(0x19,&local_26);
        local_26 = local_26 | 1;
        FUN_1402e37c(0x19);
      }
      FUN_1402e1fc(0x4a,&local_26);
      local_26 = local_26 & 0xfcfc | 0x203;
      FUN_1402e37c(0x4a);
      if (*pbVar5 == 2) {
        uVar8 = 1000;
      }
      else {
        uVar8 = 100;
      }
      FUN_140e5908(uVar8);
      if (*pbVar5 == 2) {
        FUN_1402e1fc(0x19,&local_26);
        local_26 = local_26 & 0xfffe;
        FUN_1402e37c(0x19);
      }
      FUN_1402ee18(0,1,0,1,0);
    }
  }
  else if (param_1 == 3) {
    if (*pbVar5 == 2) {
      FUN_1402e1fc(0x19,&local_26);
      local_26 = local_26 | 1;
      FUN_1402e37c(0x19);
      FUN_1402e1fc(0x36,&local_26);
      local_26 = local_26 | 1;
      FUN_1402e37c(0x36);
    }
    FUN_1402e1fc(0x4a,&local_26);
    local_26 = local_26 & 0xfcfc | 0x203;
    FUN_1402e37c(0x4a);
    if (*pbVar5 == 2) {
      uVar8 = 1000;
    }
    else {
      uVar8 = 100;
    }
    FUN_140e5908(uVar8);
    FUN_1402e1fc(0x15,&local_26);
    if (*pbVar5 - 1 < 2) {
      local_26 = local_26 & 0x3fff;
    }
    local_26 = local_26 & 0xfcbc | 0x203;
    FUN_1402e37c(0x15);
    if (*pbVar5 == 2) {
      uVar8 = 1000;
    }
    else {
      uVar8 = 100;
    }
    FUN_140e5908(uVar8);
    if (*pbVar5 == 2) {
      FUN_1402e1fc(0x19,&local_26);
      local_26 = local_26 & 0xfffe;
      FUN_1402e37c(0x19);
      FUN_1402e1fc(0x36,&local_26);
      local_26 = local_26 & 0xfffe;
      FUN_1402e37c(0x36);
    }
    FUN_1402ee18(0,1,0,1,0);
    FUN_1402ee18(6,1,0,1,0);
  }
  else if (param_1 == 1) {
    FUN_1402e718(1);
    FUN_1402ee18(0,0,1,1,1);
    FUN_1402ee18(6,0,1,1,1);
    FUN_140e5908(0x708);
    if (*DAT_1402fb44 - 1 < 2) {
      FUN_140e5398(0x50);
    }
    FUN_1402e1fc(0x15,&local_26);
    local_26 = local_26 & 0xfffc | 2;
    FUN_1402e37c(0x15);
    FUN_1402e1fc(0x4a,&local_26);
    local_26 = local_26 & 0xfffc | 2;
    FUN_1402e37c(0x4a);
    FUN_1402e718(0);
  }
  *pbVar6 = (byte)param_1;
  if (iVar12 == 0) {
    *DAT_1402fb1c = 0xffffffff;
  }
  pbVar6 = DAT_1402fb34;
  bVar1 = *DAT_1402fb34;
  *(undefined4 *)(DAT_1402fb38 + (uint)bVar1 * 4) = unaff_lr;
  uVar9 = bVar1 + 1;
  lVar3 = (ulonglong)DAT_1402fb20 * (ulonglong)uVar9;
  *pbVar6 = (char)uVar9 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar12);
  }
  if ((*DAT_1402fb14 ^ local_24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc((int)lVar3,pbVar6,*DAT_1402fb14 ^ local_24,0);
  }
  return;
}

