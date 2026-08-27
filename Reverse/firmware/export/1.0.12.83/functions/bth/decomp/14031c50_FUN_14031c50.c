/* FUN_14031c50 @ 0x14031c50 */

void FUN_14031c50(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  ushort *puVar12;
  ushort local_5e [3];
  uint local_58;
  ushort local_54 [4];
  undefined4 local_4c [2];
  ushort local_44 [12];
  int local_2c;
  
  local_2c = *DAT_14031f1c;
  *DAT_14031f20 = 1;
  local_54[0] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[7] = 0;
  local_44[8] = 0;
  local_44[9] = 0;
  local_5e[0] = 0;
  local_4c[0] = 1;
  local_5e[1] = 0x68;
  local_5e[2] = 0x69;
  local_4c[1] = 0xfff01fff;
  local_58 = 0;
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[10] = 0;
  local_44[0xb] = 0;
  iVar3 = FUN_140db6f0(0x3e);
  puVar12 = DAT_14031f44;
  *DAT_14031f24 = iVar3;
  iVar3 = FUN_140db6f0(0x3e);
  *DAT_14031f28 = iVar3;
  uVar2 = 0xc;
  puVar9 = puVar12;
  puVar10 = local_44;
  while( true ) {
    FUN_1402e1fc(uVar2 & 0xfff | 0x2000,local_5e);
    iVar1 = DAT_14031f30;
    iVar3 = DAT_14031f2c;
    *puVar10 = local_5e[0];
    if (puVar10 + 1 == local_44 + 10) break;
    puVar9 = puVar9 + 1;
    uVar2 = *puVar9;
    puVar10 = puVar10 + 1;
  }
  uVar5 = *(undefined4 *)(DAT_14031f30 + 0x324);
  uVar6 = *(undefined4 *)(DAT_14031f30 + 0xb4);
  uVar7 = *(undefined4 *)(DAT_14031f2c + 0xc00);
  FUN_1402e37c(0x200c,1);
  FUN_1402e37c(0x200d,0x4fc);
  FUN_1402e37c(0x20af,0xc100);
  FUN_1402e37c(0x2093,0x45b5);
  FUN_1402e37c(0x20b0,0x7c00);
  FUN_1402e37c(0x20a0,0x1220);
  *(undefined4 *)(iVar1 + 0x324) = 9;
  *(undefined4 *)(iVar1 + 0xb4) = 1;
  uVar11 = 0;
  *(undefined4 *)(iVar3 + 0xc00) = 0xa0000;
  FUN_1402e1fc(0x208b,&local_58);
  local_58 = CONCAT22((undefined2)local_58,(undefined2)local_58) & 0xfffffbff | 0x4000000;
  do {
    if (uVar11 == 0) {
      FUN_1402e37c(0x2069,0x7fff);
    }
    else if (uVar11 == 0x10) {
      FUN_1402e37c(0x2068,0x7fff);
    }
    uVar2 = (ushort)uVar11;
    if (0xf < uVar11) {
      uVar2 = uVar2 - 0x10;
    }
    iVar3 = 0;
    uVar4 = 1 << (uVar2 & 0xff) & 0xffff;
    while( true ) {
      local_5e[0] = (ushort)uVar4;
      FUN_1402e37c(local_5e[(0xf < uVar11) + 1] & 0xfff | 0x2000);
      FUN_1402e37c(0x208b,*(undefined2 *)((int)&local_58 + iVar3 * 2));
      *(undefined4 *)(iVar1 + 0xb4) = local_4c[iVar3];
      FUN_1402e37c(0x203c,0x31fd);
      FUN_140e5398(9);
      FUN_1402e37c(0x203c,0x39fd);
      FUN_140e5398(9);
      FUN_1402e1fc(0x2144,local_5e);
      if ((local_5e[0] & 0x400) == 0) {
        FUN_1402a6e8(4,0x231,DAT_14031f3c,DAT_14031f40,DAT_14031f38,DAT_14031f34,uVar11,iVar3,
                     (uint)local_5e[0]);
        iVar3 = *DAT_14031f24;
        *DAT_14031f20 = 0;
        FUN_140db700(iVar3);
        FUN_140db700(*DAT_14031f28);
        goto LAB_14031e78;
      }
      local_54[iVar3] = (ushort)(((uint)local_5e[0] << 0x16) >> 0x16);
      FUN_1402e1fc(0x2145,local_5e);
      uVar4 = 0;
      local_54[iVar3 + 2] = (ushort)(((uint)local_5e[0] << 0x16) >> 0x16);
      if (iVar3 != 0) break;
      iVar3 = 1;
    }
    iVar3 = *DAT_14031f24;
    *(ushort *)(iVar3 + uVar11 * 2) = local_54[1] - local_54[0];
    iVar8 = *DAT_14031f28;
    *(ushort *)(iVar8 + uVar11 * 2) = local_54[3] - local_54[2];
    *(ushort *)(iVar3 + uVar11 * 2) = *(ushort *)(iVar3 + uVar11 * 2) & 0x1f;
    *(ushort *)(iVar8 + uVar11 * 2) = *(ushort *)(iVar8 + uVar11 * 2) & 0x1f;
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x1f);
LAB_14031e78:
  uVar2 = 0xc;
  puVar9 = local_44;
  while( true ) {
    FUN_1402e37c(uVar2 & 0xfff | 0x2000,*puVar9);
    iVar1 = DAT_14031f30;
    iVar3 = DAT_14031f2c;
    if (local_44 + 10 == puVar9 + 1) break;
    puVar12 = puVar12 + 1;
    uVar2 = *puVar12;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(DAT_14031f30 + 0x324) = uVar5;
  *(undefined4 *)(iVar1 + 0xb4) = uVar6;
  *(undefined4 *)(iVar3 + 0xc00) = uVar7;
  if (*DAT_14031f1c == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

