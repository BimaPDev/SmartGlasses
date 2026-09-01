/* FUN_100b22c8 @ 0x100b22c8 */

undefined4 FUN_100b22c8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (DAT_100b236c - DAT_100b2368) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100b2370 | uVar3,DAT_100b2374,param_1);
  *(undefined1 *)(param_1 + 0x62) = 3;
  thunk_FUN_10113fd0(param_1 + 0x78);
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_10063a30(*(undefined4 *)(param_1 + 0x5c));
    thunk_FUN_10113fd0(param_1 + 0x94);
    while (*(char *)(param_1 + 0xc0) == '\0') {
      thunk_FUN_10113fd0(param_1 + 0x78);
      FUN_1011dbc8(1);
    }
    FUN_10063abc(*(undefined4 *)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (((-1 < (int)((uint)*(byte *)(param_1 + 99) << 0x1f)) && (*(int *)(param_1 + 0x6c) != 0)) &&
     (iVar1 = FUN_100b21e0(param_1,1), iVar1 == 0)) {
    iVar1 = 5;
    while (iVar2 = FUN_10130472(param_1), iVar2 != 0) {
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) {
        FUN_100a5b78(DAT_100b2378 | uVar3,DAT_100b237c);
        return 0;
      }
      FUN_1011dbc8(1);
    }
  }
  return 0;
}

