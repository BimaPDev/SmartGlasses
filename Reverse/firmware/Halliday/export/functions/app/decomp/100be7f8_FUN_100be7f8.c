/* FUN_100be7f8 @ 0x100be7f8 */

void FUN_100be7f8(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 local_24 [4];
  undefined4 local_20;
  uint local_1c;
  int local_18;
  
  iVar2 = DAT_100be8c4;
  bVar1 = *(byte *)(DAT_100be8c4 + 0x11);
  FUN_1011ea48(local_24,0,0x14);
  local_1c = (uint)*(ushort *)(DAT_100be8c8 + (uint)bVar1 * 2);
  local_18 = local_1c + 0x50;
  local_24[0] = 0;
  FUN_1011dbf4(DAT_100be8cc,0xffffffff);
  FUN_10119dc2(DAT_100be8d0);
  if (*(int *)(DAT_100be8d4 + 4) == 0) {
    local_20 = 8;
    iVar6 = 2;
    uVar8 = 0;
    iVar7 = 0;
    iVar5 = DAT_100be8f8;
  }
  else {
    iVar7 = 0;
    do {
      if (*(byte *)(DAT_100be8d4 + iVar7 * 8) - 8 < 2) {
        local_20 = 0;
        goto LAB_100be842;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 4);
    local_20 = 8;
LAB_100be842:
    iVar6 = *DAT_100be8d8;
    iVar7 = *DAT_100be8dc;
    iVar5 = DAT_100be8d4;
    if (iVar6 == 0) {
      iVar5 = 0;
    }
    uVar8 = DAT_100be8e0;
    if (iVar7 == 0) {
      uVar8 = 0;
    }
  }
  uVar3 = FUN_101323a0(local_24,iVar5,iVar6,uVar8,iVar7);
  *(undefined1 *)(iVar2 + 0xf) = 1;
  iVar7 = DAT_100be8e4;
  *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) | 1;
  if ((-1 < (int)uVar3) || (uVar4 = DAT_100be8f4, uVar8 = DAT_100be8ec, uVar3 == 0xffffff88)) {
    uVar3 = (uint)*(byte *)(iVar2 + 0x11);
    uVar4 = DAT_100be900;
    uVar8 = DAT_100be8fc;
  }
  FUN_100a5b78(uVar4 | (iVar7 - DAT_100be8e8) * 0x20 & 0xff00U,DAT_100be8f0,uVar8,uVar3);
  thunk_FUN_10113e2c(DAT_100be8cc);
  return;
}

