/* FUN_2c645f78 @ 0x2c645f78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c645f78(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = _LAB_2c646068;
  if ((*(char *)(_LAB_2c646068 + 8) != '\x02') || (*(int *)(_LAB_2c646068 + 0x24) == 0)) {
    return param_1;
  }
  iVar6 = *(int *)(_LAB_2c646068 + 0x14);
  func_0x2c643f3c(*(undefined4 *)(iVar6 + 0x2c));
  iVar7 = *(int *)(iVar6 + 0x18);
  if (iVar7 != 0) {
    FUN_2c643a80(iVar7,0);
    if ((*(byte *)(iVar7 + 0x22) & 0x10) == 0) {
      iVar4 = 0x60;
    }
    else {
      iVar4 = 0x20;
    }
    *(undefined4 *)(*(int *)(iVar7 + 0x38) + iVar4) = 0;
    FUN_2c645974(iVar7);
    *(undefined1 *)(iVar7 + 1) = 1;
    if (*(int *)(iVar1 + 0x24) == 0) {
      iVar4 = iVar1 + 0x1c;
    }
    else {
      iVar3 = iVar1 + 0x1c;
      iVar2 = *(int *)(iVar1 + 0x24);
      do {
        iVar4 = iVar2;
        if (*(char *)(iVar4 + 0x20) < *(char *)(iVar7 + 0x20)) {
          *(int *)(iVar7 + 8) = iVar4;
          *(int *)(iVar7 + 0xc) = iVar3;
          *(int *)(iVar3 + 8) = iVar7;
          *(int *)(iVar4 + 0xc) = iVar7;
          goto LAB_2c645fe4;
        }
        iVar3 = iVar4;
        iVar2 = *(int *)(iVar4 + 8);
      } while (*(int *)(iVar4 + 8) != 0);
    }
    *(undefined4 *)(iVar7 + 8) = 0;
    *(int *)(iVar7 + 0xc) = iVar4;
    *(int *)(iVar4 + 8) = iVar7;
LAB_2c645fe4:
    func_0x2c643a78(*(undefined4 *)(iVar6 + 0x18));
  }
  uVar5 = getProcessStackPointer();
  iVar4 = *(int *)(iVar1 + 0x24);
  *(undefined4 *)(iVar6 + 0x38) = uVar5;
  iVar7 = *(int *)(iVar4 + 8);
  *(int *)(iVar1 + 0x24) = iVar7;
  if (iVar7 != 0) {
    *(undefined4 *)(iVar7 + 0xc) = _LAB_2c64606c;
  }
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(undefined1 *)(iVar4 + 1) = 2;
  iVar7 = *(int *)(iVar1 + 0x14);
  *(int *)(iVar1 + 0x18) = iVar4;
  if (iVar4 != iVar7) {
    if (iVar7 != 0) {
      uVar5 = FUN_2c673c88();
      *(undefined4 *)(iVar7 + 0x48) = uVar5;
    }
    uVar5 = FUN_2c673c88();
    *(undefined4 *)(iVar4 + 0x44) = uVar5;
  }
  FUN_2c645d84();
  FUN_2c643a88(iVar4);
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
    FUN_2c6457d0(iVar6);
  }
  return iVar6;
}

