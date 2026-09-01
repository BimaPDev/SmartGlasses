/* FUN_100d54ac @ 0x100d54ac */

undefined4 FUN_100d54ac(undefined4 param_1,byte param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 == 0) {
    FUN_100a5b78((DAT_100d54f0 - DAT_100d54ec) * 0x20 & 0xff00U | 0x4b80021,DAT_100d54f8,
                 DAT_100d54f4);
    uVar2 = 0xffffffed;
  }
  else {
    *(byte *)(iVar1 + 0x39) = *(byte *)(iVar1 + 0x39) & 0xef | (param_2 & 1) << 4;
    uVar2 = 0;
  }
  return uVar2;
}

