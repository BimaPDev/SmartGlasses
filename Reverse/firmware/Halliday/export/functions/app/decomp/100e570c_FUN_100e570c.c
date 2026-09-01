/* FUN_100e570c @ 0x100e570c */

undefined4 FUN_100e570c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (DAT_100e578c - DAT_100e5788) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100e5790 | uVar3,DAT_100e5794);
  FUN_100e4fc0(0xffffffff,0xffffffff);
  puVar1 = (undefined4 *)FUN_100e4f04(param_1,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_100a5b78(uVar3 | 0x36c0021,DAT_100e5798);
    uVar2 = 0xfffffffb;
  }
  else {
    if (*(byte *)((int)puVar1 + 10) < 7) {
      FUN_100e0754(*puVar1,*(undefined1 *)(puVar1 + 2),0);
      *(undefined1 *)((int)puVar1 + 10) = 7;
      *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 8;
    }
    else {
      FUN_100e07b4(*puVar1,*(undefined1 *)(puVar1 + 2),1);
      *(undefined1 *)((int)puVar1 + 10) = 8;
    }
    uVar2 = 0;
  }
  FUN_100e4fb4();
  return uVar2;
}

