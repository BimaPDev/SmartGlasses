/* FUN_100a4a98 @ 0x100a4a98 */

undefined4 FUN_100a4a98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_10112e84(DAT_100a4ae4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    iVar1 = FUN_1012da5e(iVar1,param_1);
    if (iVar1 == 0) {
      *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 0x76c;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      uVar2 = 0;
    }
    else {
      FUN_100a5b78(DAT_100a4af4 | (DAT_100a4aec - DAT_100a4ae8) * 0x20 & 0xff00U,DAT_100a4af8,
                   DAT_100a4af0,iVar1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

