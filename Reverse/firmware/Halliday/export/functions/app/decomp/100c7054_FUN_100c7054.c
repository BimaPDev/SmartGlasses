/* FUN_100c7054 @ 0x100c7054 */

void FUN_100c7054(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = DAT_100c719c;
  bVar1 = *(byte *)(DAT_100c719c + 0xf9);
  if ((*(byte *)(DAT_100c719c + 0xf8) == 0) || (*(byte *)(DAT_100c719c + 0xf8) + 1 < (uint)bVar1)) {
    *(byte *)(DAT_100c719c + 0xf9) = bVar1 - 1;
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
    return;
  }
  iVar3 = FUN_100ca3d4(0,0,6,(uint)bVar1,param_1,param_2);
  if (iVar3 != 0) {
    FUN_10132e3c(iVar2 + 0xac,0x4000);
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
    FUN_100ca13c(iVar3);
    return;
  }
  iVar3 = FUN_10132e28(iVar2 + 0xac);
  FUN_10132ed8(iVar2 + 0x20,0);
  if (iVar3 << 0x1a < 0) {
    thunk_FUN_100c60f8(0);
  }
  iVar4 = FUN_10132f8e(0);
  if (iVar4 == 0) {
    if (*(byte *)(iVar2 + 0xf8) < *(byte *)(iVar2 + 0xf9)) {
      *(byte *)(iVar2 + 0xf9) = *(byte *)(iVar2 + 0xf9) - 1;
      uVar6 = DAT_100c71b8;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
      FUN_100e09c0(2,uVar6);
    }
    else {
      iVar5 = FUN_100c5d4c(0x2028,7,0);
      if (iVar5 != 0) {
        uVar6 = FUN_100c1fe4(iVar5 + 8,7);
        FUN_10132eca(uVar6,param_1 + 1);
        iVar4 = FUN_100c5e48(0x2028,iVar5,iVar4);
        if (iVar4 == 0) {
          *(char *)(iVar2 + 0xf9) = *(char *)(iVar2 + 0xf9) + -1;
          *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfb;
          goto LAB_100c70f2;
        }
      }
      FUN_100a5b78(DAT_100c71bc | (DAT_100c71a4 - DAT_100c71a0) * 0x20 & 0xff00U,DAT_100c71b0,
                   DAT_100c71c0);
    }
  }
  else {
    FUN_100a5b78(DAT_100c71ac | (DAT_100c71a4 - DAT_100c71a0) * 0x20 & 0xff00U,DAT_100c71b0,
                 DAT_100c71a8,iVar4);
  }
LAB_100c70f2:
  if (*(char *)(iVar2 + 0xf9) != '\0') {
    FUN_10132f8e(1);
  }
  if (iVar3 << 0x1a < 0) {
    thunk_FUN_100c60f8(1);
  }
  FUN_10132f02(DAT_100c71b4,0);
  return;
}

