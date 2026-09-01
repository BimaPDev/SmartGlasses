/* FUN_100d4ec0 @ 0x100d4ec0 */

undefined4 FUN_100d4ec0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d4efc | (DAT_100d4ef8 - DAT_100d4ef4) * 0x20 & 0xff00U,DAT_100d4f04,
                 DAT_100d4f00);
    uVar2 = 0xffffffed;
  }
  else {
    *(undefined1 *)(iVar1 + 0x3f) = param_2;
    uVar2 = 0;
  }
  return uVar2;
}

