/* FUN_100be0cc @ 0x100be0cc */

void FUN_100be0cc(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_44;
  undefined2 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  uint local_24;
  int local_20;
  
  iVar2 = DAT_100be1b4;
  bVar1 = *(byte *)(DAT_100be1b4 + 0x11);
  FUN_1011ea48(local_2c,0,0x14);
  local_24 = (uint)*(ushort *)(DAT_100be1b8 + (uint)bVar1 * 2);
  local_20 = local_24 + 0x50;
  local_2c[0] = 0;
  FUN_1011dbf4(DAT_100be1bc,0xffffffff);
  local_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_44 = 0;
  local_40 = 0;
  local_28 = 9;
  iVar5 = thunk_FUN_1009efa0(DAT_100be1c0,&local_3c,0xc);
  if (0 < iVar5) {
    FUN_10119d28(&local_3c,0xc,&local_44,6);
  }
  uVar3 = DAT_100be1c8;
  iVar5 = DAT_100be1c4;
  *(undefined4 *)(DAT_100be1c4 + 2) = local_44;
  *(undefined2 *)(iVar5 + 6) = local_40;
  iVar6 = FUN_101323a0(local_2c,uVar3,2,0,0);
  *(undefined4 *)(iVar2 + 0x11c) = 2;
  *(undefined4 *)(iVar2 + 0x124) = 0;
  *(undefined4 *)(iVar2 + 0x134) = local_28;
  *(undefined1 *)(iVar2 + 0xf) = 1;
  *(undefined4 *)(iVar2 + 300) = 0;
  iVar5 = DAT_100be1cc;
  *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) | 1;
  iVar4 = DAT_100be1d0;
  *(undefined4 *)(iVar2 + 0x114) = uVar3;
  uVar7 = (iVar5 - iVar4) * 0x20 & 0xff00;
  if ((iVar6 < 0) && (iVar6 != -0x78)) {
    FUN_100a5b78(uVar7 | 0x1300011,DAT_100be1d8,DAT_100be1d4);
  }
  else {
    FUN_100a5b78(uVar7 | 0x1320032,DAT_100be1d8,DAT_100be1dc,*(undefined1 *)(iVar2 + 0x11),&local_3c
                );
  }
  thunk_FUN_10113e2c(DAT_100be1bc);
  return;
}

