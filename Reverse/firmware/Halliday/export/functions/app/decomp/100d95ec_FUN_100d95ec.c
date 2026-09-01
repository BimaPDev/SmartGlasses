/* FUN_100d95ec @ 0x100d95ec */

undefined4
FUN_100d95ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = DAT_100d96f8;
  uVar6 = (uint)*(byte *)(param_1 + 3);
  if (uVar6 == 1) {
    uVar6 = 2;
  }
  else if (2 < uVar6) {
    uVar6 = 3;
  }
  uVar4 = 0;
  iVar9 = DAT_100d96f8;
  for (iVar7 = 0; iVar2 = DAT_100d96d8, iVar7 < (int)uVar6; iVar7 = iVar7 + 1) {
    iVar2 = iVar8 + iVar7 * 0x10;
    *(undefined4 *)(iVar9 + 4) = param_1[1];
    bVar3 = *(byte *)(iVar2 + 8) & 0xfc | *(byte *)((int)param_1 + 0xe) & 1 |
            *(byte *)((int)param_1 + 0xe) & 2;
    *(byte *)(iVar2 + 8) = bVar3;
    uVar1 = FUN_10131f56(iVar9,0,1,bVar3,param_4);
    uVar4 = uVar4 | uVar1;
    iVar9 = iVar9 + 0x10;
  }
  uVar6 = (uint)*(byte *)((int)param_1 + 0xd);
  if (uVar6 == 1) {
    uVar6 = 2;
  }
  else if (2 < uVar6) {
    uVar6 = 3;
  }
  *DAT_100d96dc = (char)uVar6;
  iVar8 = iVar2;
  for (iVar9 = 0; iVar9 < (int)uVar6; iVar9 = iVar9 + 1) {
    iVar7 = iVar2 + iVar9 * 0x10;
    *(undefined4 *)(iVar8 + 4) = param_1[2];
    bVar3 = *(byte *)(iVar7 + 8) & 0xfc | *(byte *)((int)param_1 + 0xe) & 1 |
            *(byte *)((int)param_1 + 0xe) & 2;
    *(byte *)(iVar7 + 8) = bVar3;
    uVar1 = FUN_10131f56(iVar8,0,1,bVar3,param_4);
    uVar4 = uVar4 | uVar1;
    iVar8 = iVar8 + 0x10;
  }
  if (uVar4 == 0) {
    *DAT_100d96f0 = *param_1;
    FUN_100e7618(param_1);
    FUN_10131f9e(DAT_100d96f4);
    uVar5 = 0;
  }
  else {
    FUN_100a5b78((DAT_100d96e4 - DAT_100d96e0) * 0x20 & 0xff00U | 0x2200011,DAT_100d96ec,
                 DAT_100d96e8);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

