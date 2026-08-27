/* FUN_1402f598 @ 0x1402f598 */

void FUN_1402f598(uint param_1)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  undefined4 unaff_lr;
  ushort local_2a;
  ushort local_28;
  ushort local_26;
  undefined1 auStack_24 [2];
  undefined1 auStack_22 [2];
  ushort local_20;
  ushort local_1e;
  uint local_1c;
  
  puVar5 = DAT_1402f7c0;
  pbVar7 = DAT_1402f7bc;
  local_1c = *DAT_1402f7b8;
  iVar10 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar10 = getBasePriority();
  }
  if (iVar10 != 0x40) {
    bVar1 = *DAT_1402f7bc;
    *DAT_1402f7c0 = 0x1402f5b8;
    puVar5[1] = unaff_lr;
    uVar6 = bVar1 + 1;
    *pbVar7 = (char)uVar6 + (char)(uint)((ulonglong)DAT_1402f7c4 * (ulonglong)uVar6 >> 0x23) * -10;
    *(undefined4 *)(DAT_1402f7c8 + (uint)bVar1 * 4) = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  pbVar7 = &IRQ;
  if (param_1 == 0) {
    param_1 = (uint)*DAT_1402f7cc;
    pbVar7 = DAT_1402f7cc;
  }
  FUN_140e58d8(&local_28,&local_2a,auStack_22,pbVar7);
  FUN_1402f3f4(6,auStack_24,&local_26);
  FUN_1402e1fc(0x46,&local_1e);
  pbVar7 = DAT_1402f7dc;
  if (param_1 == 3) {
    iVar9 = (uint)(byte)local_1e - (int)*DAT_1402f7d0;
    uVar8 = (uint)local_2a;
    uVar6 = UnsignedSaturate(iVar9,8);
    UnsignedDoesSaturate(iVar9,8);
    uVar6 = uVar6 & 0xffff;
    if (uVar6 < uVar8) {
      do {
        uVar6 = uVar6 + 1 & 0xffff;
        FUN_1402e88c(uVar6,*pbVar7);
      } while (uVar6 < local_2a);
      FUN_1402f130(6,*DAT_1402f7d8,local_28);
      goto LAB_1402f77e;
    }
    if (uVar8 == uVar6) {
      iVar9 = (uint)(local_1e >> 8) - (int)*DAT_1402f7d4;
      uVar4 = UnsignedSaturate(iVar9,8);
      UnsignedDoesSaturate(iVar9,8);
      uVar6 = (uint)*DAT_1402f7dc;
      if (uVar6 != (uVar4 & 0xffff)) goto LAB_1402f79a;
    }
    else {
      uVar6 = (uint)*DAT_1402f7dc;
LAB_1402f79a:
      FUN_1402e88c(uVar8,uVar6);
    }
    FUN_1402f130(6,*DAT_1402f7d8,local_28);
  }
  else {
    uVar8 = (uint)local_28;
    uVar11 = (ushort)*DAT_1402f7d8;
    FUN_1402f3f4(6,&local_1e,&local_20);
    uVar6 = (uint)local_20;
    if (uVar6 < uVar8) {
      do {
        local_20 = local_28;
        if (uVar6 + 2 < uVar8) {
          local_20 = (ushort)(uVar6 + 2);
        }
        FUN_1402f130(6,uVar11);
        uVar6 = (uint)local_20;
      } while (uVar6 < uVar8);
    }
    else if ((uVar8 != uVar6) || (local_1e != uVar11)) {
      FUN_1402f130(6,uVar11,uVar8);
    }
    FUN_1402e88c(local_2a,*DAT_1402f7dc);
    if (local_26 < uVar8) {
LAB_1402f77e:
      FUN_140e5908(10);
    }
  }
  if (*DAT_1402f7e0 == '\x02') {
    if ((ushort)(local_2a - 0x44) < 0xffbc) goto LAB_1402f702;
  }
  else if ((ushort)(local_2a - 0x88) < 0xff78) {
LAB_1402f702:
    FUN_1402e1fc(0x2028,&local_1e);
    if (-1 < (short)local_1e) {
      local_1e = local_1e | 0x8000;
      FUN_1402e37c(0x2028);
    }
    goto LAB_1402f6b4;
  }
  FUN_1402e1fc(0x2028,&local_1e);
  if ((short)local_1e < 0) {
    local_1e = (ushort)(((uint)local_1e << 0x11) >> 0x11);
    FUN_1402e37c(0x2028);
  }
LAB_1402f6b4:
  if (iVar10 == 0) {
    *DAT_1402f7c0 = 0xffffffff;
  }
  pbVar7 = DAT_1402f7e4;
  bVar1 = *DAT_1402f7e4;
  *(undefined4 *)(DAT_1402f7e8 + (uint)bVar1 * 4) = unaff_lr;
  uVar6 = bVar1 + 1;
  lVar3 = (ulonglong)DAT_1402f7c4 * (ulonglong)uVar6;
  *pbVar7 = (char)uVar6 + (char)(uint)((ulonglong)lVar3 >> 0x23) * -10;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar10);
  }
  if ((*DAT_1402f7b8 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc((int)lVar3,pbVar7,*DAT_1402f7b8 ^ local_1c,0);
}

