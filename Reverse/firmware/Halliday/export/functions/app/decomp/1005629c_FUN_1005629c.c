/* FUN_1005629c @ 0x1005629c */

int FUN_1005629c(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = FUN_1005608c();
  iVar6 = *(int *)(iVar2 + 0x48);
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (*(int *)(iVar2 + 0x14) << 0x1b < 0) {
    *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) | 0x10;
    thunk_FUN_1011598c(300);
  }
  uVar4 = (param_1 + 0x7cU) / 0x7d;
  uVar7 = *DAT_10056380;
  FUN_10119dc2(DAT_10056384,uVar7,uVar4);
  lVar1 = (ulonglong)uVar4 * (ulonglong)uVar7;
  uVar4 = (uint)lVar1 >> 0xf | (int)((ulonglong)lVar1 >> 0x20) << 0x11;
  uVar3 = FUN_100561f8(0);
  FUN_10119dc2(DAT_10056388,uVar4,uVar3);
  if (uVar4 < 3) {
    FUN_100a5b78(DAT_10056394 | (DAT_10056390 - DAT_1005638c) * 0x20 & 0xff00U,DAT_1005639c,
                 DAT_10056398,param_1);
    iVar5 = -0x16;
  }
  else {
    iVar5 = FUN_100561f8(1);
    if (iVar5 < 0) {
      FUN_100a5b78(DAT_100563a0 | (DAT_10056390 - DAT_1005638c) * 0x20 & 0xff00U,DAT_1005639c,
                   DAT_100563a4);
    }
    else {
      uVar4 = iVar5 + uVar4;
      if (0x3ffffff < uVar4) {
        uVar4 = uVar4 + 0xfc000001;
      }
      *(uint *)(iVar2 + 0x1c) = uVar4 & 0x3ffffff | *(uint *)(iVar2 + 0x1c) & 0xfc000000;
      *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x10;
      iVar5 = 0;
      *(uint *)(iVar6 + 0x40) = *(uint *)(iVar6 + 0x40) | 0x10;
      thunk_FUN_1011598c(300);
    }
  }
  return iVar5;
}

