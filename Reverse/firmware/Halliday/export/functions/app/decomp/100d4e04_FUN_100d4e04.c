/* FUN_100d4e04 @ 0x100d4e04 */

undefined4 FUN_100d4e04(undefined4 param_1,ushort param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d4e50 | (DAT_100d4e4c - DAT_100d4e48) * 0x20 & 0xff00U,DAT_100d4e58,
                 DAT_100d4e54);
    uVar2 = 0xffffffed;
  }
  else {
    *(undefined1 *)(iVar1 + 0x3e) = param_3;
    *(ushort *)(iVar1 + 0x3c) = *(ushort *)(iVar1 + 0x3c) & 0xfe01 | (param_2 & 0xff) << 1;
    *(undefined1 *)(iVar1 + 0x40) = param_4;
    uVar2 = 0;
  }
  return uVar2;
}

