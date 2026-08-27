/* FUN_2c140cc0 @ 0x2c140cc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c140cc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = _DAT_2c140db0;
  if ((*(char *)(_DAT_2c140db0 + 8) != '\x02') || (*(int *)(_DAT_2c140db0 + 0x24) == 0)) {
    return param_1;
  }
  iVar6 = *(int *)(_DAT_2c140db0 + 0x14);
  func_0x2c13f1c4(*(undefined4 *)(iVar6 + 0x2c));
  iVar7 = *(int *)(iVar6 + 0x18);
  if (iVar7 != 0) {
    FUN_2c13ee24(iVar7,0);
    if ((*(byte *)(iVar7 + 0x22) & 0x10) == 0) {
      iVar3 = 0x60;
    }
    else {
      iVar3 = 0x20;
    }
    *(undefined4 *)(*(int *)(iVar7 + 0x38) + iVar3) = 0;
    FUN_2c14075c(iVar7);
    *(undefined1 *)(iVar7 + 1) = 1;
    iVar3 = iVar1 + 0x1c;
    iVar2 = *(int *)(iVar1 + 0x24);
    if (*(int *)(iVar1 + 0x24) == 0) {
      iVar5 = iVar1 + 0x1c;
    }
    else {
      do {
        iVar5 = iVar2;
        if (*(char *)(iVar5 + 0x20) < *(char *)(iVar7 + 0x20)) {
          *(int *)(iVar7 + 8) = iVar5;
          *(int *)(iVar7 + 0xc) = iVar3;
          *(int *)(iVar3 + 8) = iVar7;
          *(int *)(iVar5 + 0xc) = iVar7;
          goto LAB_2c140d2a;
        }
        iVar3 = iVar5;
        iVar2 = *(int *)(iVar5 + 8);
      } while (*(int *)(iVar5 + 8) != 0);
    }
    *(undefined4 *)(iVar7 + 8) = 0;
    *(int *)(iVar7 + 0xc) = iVar5;
    *(int *)(iVar5 + 8) = iVar7;
LAB_2c140d2a:
    func_0x2c13ee1c(*(undefined4 *)(iVar6 + 0x18));
  }
  uVar4 = getProcessStackPointer();
  iVar3 = *(int *)(iVar1 + 0x24);
  *(undefined4 *)(iVar6 + 0x38) = uVar4;
  iVar7 = *(int *)(iVar3 + 8);
  *(int *)(iVar1 + 0x24) = iVar7;
  if (iVar7 != 0) {
    *(undefined4 *)(iVar7 + 0xc) = _DAT_2c140db4;
  }
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined1 *)(iVar3 + 1) = 2;
  iVar7 = *(int *)(iVar1 + 0x14);
  *(int *)(iVar1 + 0x18) = iVar3;
  if (iVar3 != iVar7) {
    if (iVar7 != 0) {
      uVar4 = FUN_2c14486c();
      *(undefined4 *)(iVar7 + 0x48) = uVar4;
    }
    uVar4 = FUN_2c14486c();
    *(undefined4 *)(iVar3 + 0x44) = uVar4;
  }
  FUN_2c140ac8();
  FUN_2c13ee2c(iVar3);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  if ((int)((uint)*(byte *)(iVar6 + 3) << 0x1f) < 0) {
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined1 *)(iVar6 + 1) = 4;
    iVar7 = *(int *)(iVar1 + 0x34);
    *(int *)(iVar6 + 8) = iVar7;
    if (iVar7 != 0) {
      *(int *)(iVar7 + 0xc) = iVar6;
    }
    *(int *)(iVar1 + 0x34) = iVar6;
  }
  else {
    FUN_2c1406b8(iVar6);
  }
  return iVar6;
}

