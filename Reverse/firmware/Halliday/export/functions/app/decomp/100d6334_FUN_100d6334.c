/* FUN_100d6334 @ 0x100d6334 */

undefined4 FUN_100d6334(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d6370 | (DAT_100d636c - DAT_100d6368) * 0x20 & 0xff00U,DAT_100d6378,
                 DAT_100d6374);
    uVar2 = 0xffffffed;
  }
  else {
    *(undefined2 *)(iVar1 + 0x50) = param_2;
    uVar2 = 0;
  }
  return uVar2;
}

