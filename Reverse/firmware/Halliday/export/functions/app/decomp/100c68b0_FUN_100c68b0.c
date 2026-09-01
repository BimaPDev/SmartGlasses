/* FUN_100c68b0 @ 0x100c68b0 */

int FUN_100c68b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_10132e28(DAT_100c6934);
  FUN_10132ed8(DAT_100c6938,0);
  if (iVar2 << 0x1a < 0) {
    thunk_FUN_100c60f8(0);
  }
  iVar1 = DAT_100c693c;
  iVar3 = FUN_1011ea30(param_1,DAT_100c693c + 0x35,6);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_100c5d4c(0x2005,6);
    if (iVar4 == 0) {
      iVar4 = -0x69;
    }
    else {
      FUN_101327a0(iVar4 + 8,param_1,6);
      iVar4 = FUN_100c5e48(0x2005,iVar4,0);
      if (iVar4 == 0) {
        FUN_10132ec0(iVar1 + 0x35,param_1);
        *(undefined1 *)(iVar1 + 0x34) = 1;
      }
    }
  }
  if (iVar2 << 0x1a < 0) {
    thunk_FUN_100c60f8(1);
  }
  FUN_10132f02(DAT_100c6938,0);
  return iVar4;
}

