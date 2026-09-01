/* FUN_10095250 @ 0x10095250 */

int FUN_10095250(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_r2;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_24;
  
  uVar9 = param_1;
  local_24 = param_2;
  iVar3 = (*(code *)*DAT_100952b8)();
  iVar2 = DAT_100952c0;
  puVar1 = DAT_100952bc;
  iVar7 = 0;
  local_24 = 0;
  iVar6 = extraout_r2;
  for (iVar8 = 0; iVar8 != iVar3; iVar8 = iVar8 + 1) {
    uVar4 = (*(code *)*puVar1)(param_1,&local_24,iVar6,(code *)*puVar1,uVar9);
    iVar5 = FUN_10095200(uVar4 & 0xffff);
    iVar6 = iVar5 + 1;
    if (iVar6 != 0) {
      uVar4 = (uint)*(ushort *)(iVar5 * 10 + iVar2 + 2);
    }
    if (uVar4 < 0x80) {
      iVar7 = iVar7 + 1;
    }
    else if (uVar4 < 0x800) {
      iVar7 = iVar7 + 2;
    }
    else if (uVar4 < 0x10000) {
      iVar7 = iVar7 + 3;
    }
    else {
      iVar7 = iVar7 + 4;
    }
  }
  return iVar7 + 1;
}

