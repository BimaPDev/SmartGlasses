/* FUN_100d4f08 @ 0x100d4f08 */

undefined1 FUN_100d4f08(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_100d4588(param_1,0);
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100d4f40 | (DAT_100d4f3c - DAT_100d4f38) * 0x20 & 0xff00U,DAT_100d4f48,
                 DAT_100d4f44);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(iVar2 + 0x3f);
  }
  return uVar1;
}

