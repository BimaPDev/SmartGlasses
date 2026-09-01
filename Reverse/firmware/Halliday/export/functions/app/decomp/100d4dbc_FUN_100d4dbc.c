/* FUN_100d4dbc @ 0x100d4dbc */

uint FUN_100d4dbc(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100d4588(param_1,0);
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d4df8 | (DAT_100d4df4 - DAT_100d4df0) * 0x20 & 0xff00U,DAT_100d4e00,
                 DAT_100d4dfc);
    uVar2 = 0;
  }
  else {
    uVar2 = (*(byte *)(iVar1 + 0x39) & 3) >> 1;
  }
  return uVar2;
}

