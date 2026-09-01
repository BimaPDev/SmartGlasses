/* FUN_100ddcbc @ 0x100ddcbc */

undefined4 FUN_100ddcbc(undefined4 param_1,byte param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100dd8a8();
  if ((iVar1 == 0) || (-1 < *(char *)(iVar1 + 0x60))) {
    uVar2 = 0xfffffffb;
  }
  else {
    FUN_100a5b78(DAT_100ddd2c | (DAT_100ddd28 - DAT_100ddd24) * 0x20 & 0xff00U,DAT_100ddd30,
                 *(undefined1 *)(iVar1 + 0xe0),*(undefined1 *)(iVar1 + 0xdf));
    if ((*(char *)(iVar1 + 0xe0) == '\0') && (*(char *)(iVar1 + 0xdf) == '\0')) {
      *(byte *)(iVar1 + 0x60) = (param_2 & 7) << 3 | *(byte *)(iVar1 + 0x60) & 0x87;
      uVar2 = FUN_1013752a(iVar1);
      return uVar2;
    }
    uVar2 = 0xffffffef;
  }
  return uVar2;
}

