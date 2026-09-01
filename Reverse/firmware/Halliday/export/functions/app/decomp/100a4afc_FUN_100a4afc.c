/* FUN_100a4afc @ 0x100a4afc */

undefined4 FUN_100a4afc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = thunk_FUN_10112e84(DAT_100a4b68);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100a4b74 | (DAT_100a4b70 - DAT_100a4b6c) * 0x20 & 0xff00U,DAT_100a4b7c,
                 DAT_100a4b78);
  }
  else {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + -0x76c;
    iVar2 = *(byte *)(param_1 + 4) - 1;
    *(char *)(param_1 + 4) = (char)iVar2;
    pcVar3 = *(code **)(*(int *)(iVar1 + 8) + 0xc);
    iVar1 = (*pcVar3)(iVar1,param_1,iVar2,pcVar3,param_4);
    if (iVar1 == 0) {
      FUN_10083358(param_1);
      return 0;
    }
    FUN_100a5b78(DAT_100a4b84 | (DAT_100a4b70 - DAT_100a4b6c) * 0x20 & 0xff00U,DAT_100a4b7c,
                 DAT_100a4b80,iVar1);
  }
  return 0xffffffff;
}

