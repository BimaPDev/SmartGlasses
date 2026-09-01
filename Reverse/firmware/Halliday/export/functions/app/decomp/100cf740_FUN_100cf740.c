/* FUN_100cf740 @ 0x100cf740 */

undefined4 FUN_100cf740(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xd) == '\a') {
    iVar3 = FUN_1013426c(param_1,4);
    if (iVar3 == 0) {
      FUN_100a5b78(DAT_100cf7c4 | (DAT_100cf7b4 - DAT_100cf7b0) * 0x20 & 0xff00U,DAT_100cf7b8,
                   DAT_100cf7c8);
      return 0;
    }
    if (-1 < *(int *)(iVar3 + 0xd0) << 0x1d) {
      return *(undefined4 *)(iVar3 + -8);
    }
    iVar3 = DAT_100cf7b4 - DAT_100cf7b0;
    uVar1 = DAT_100cf7d0;
    uVar2 = DAT_100cf7cc;
  }
  else {
    iVar3 = DAT_100cf7b4 - DAT_100cf7b0;
    uVar1 = DAT_100cf7c0;
    uVar2 = DAT_100cf7bc;
  }
  FUN_100a5b78(uVar1 | iVar3 * 0x20 & 0xff00U,DAT_100cf7b8,uVar2);
  return 0;
}

