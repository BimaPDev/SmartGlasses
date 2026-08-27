/* FUN_2c6465c8 @ 0x2c6465c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6465c8(byte *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = param_4;
  if ((param_1 == (byte *)0x0) || (uVar3 = (uint)*param_1, uVar3 != 0xf1)) {
    FUN_2c643a14(param_1,0xfffffffc,param_3,uVar3,param_4);
    return 0xfffffffc;
  }
  bVar2 = param_1[1] & 0xf;
  if (bVar2 == 2) {
    iVar1 = _LAB_2c6466ec;
    if ((*(char *)(_LAB_2c6466ec + 8) != '\x02') || (iVar1 = 0, *(int *)(_LAB_2c6466ec + 0x24) == 0)
       ) {
      FUN_2c643a14(param_1,0xfffffffd,*(char *)(_LAB_2c6466ec + 8),iVar1,param_4);
      return 0xfffffffd;
    }
  }
  else if (bVar2 == 3) {
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar1 = *(int *)(param_1 + 8);
      *(int *)(*(int *)(param_1 + 0xc) + 8) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      }
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
    FUN_2c645974(param_1);
  }
  else {
    if (bVar2 != 1) {
      FUN_2c643a14(param_1,0xfffffffd,param_3,bVar2,param_4);
      return 0xfffffffd;
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar1 = *(int *)(param_1 + 8);
      *(int *)(*(int *)(param_1 + 0xc) + 8) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      }
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
  }
  func_0x2c643f3c(*(undefined4 *)(param_1 + 0x2c));
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_2c64621c(*(int *)(param_1 + 0x18),0);
    func_0x2c643a78(*(undefined4 *)(param_1 + 0x18));
  }
  iVar1 = _LAB_2c6466ec;
  if (param_1[1] == 2) {
    uVar4 = getProcessStackPointer();
    *(undefined4 *)(param_1 + 0x38) = uVar4;
    iVar6 = *(int *)(iVar1 + 0x24);
    iVar5 = *(int *)(iVar6 + 8);
    *(int *)(iVar1 + 0x24) = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0xc) = iVar1 + 0x1c;
    }
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined1 *)(iVar6 + 1) = 2;
    iVar5 = *(int *)(iVar1 + 0x14);
    *(int *)(iVar1 + 0x18) = iVar6;
    if (iVar6 != iVar5) {
      if (iVar5 != 0) {
        uVar4 = FUN_2c673c88();
        *(undefined4 *)(iVar5 + 0x48) = uVar4;
      }
      uVar4 = FUN_2c673c88();
      *(undefined4 *)(iVar6 + 0x44) = uVar4;
    }
    FUN_2c645d84();
    FUN_2c643a88(iVar6);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    bVar2 = param_1[3];
    iVar1 = _LAB_2c6466ec;
  }
  else {
    FUN_2c64610c(0);
    bVar2 = param_1[3];
    iVar1 = _LAB_2c6466ec;
  }
  _LAB_2c6466ec = iVar1;
  if ((int)((uint)bVar2 << 0x1f) < 0) {
    param_1[1] = 4;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    iVar5 = *(int *)(iVar1 + 0x34);
    *(int *)(param_1 + 8) = iVar5;
    if (iVar5 != 0) {
      *(byte **)(iVar5 + 0xc) = param_1;
    }
    *(byte **)(iVar1 + 0x34) = param_1;
  }
  else {
    FUN_2c6457d0(param_1);
  }
  func_0x2c643a94(param_1);
  return 0;
}

