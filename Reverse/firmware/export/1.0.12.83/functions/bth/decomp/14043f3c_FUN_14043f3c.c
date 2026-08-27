/* FUN_14043f3c @ 0x14043f3c */

void FUN_14043f3c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_14043f94;
  FUN_1402a6e8(4,0x91,DAT_14043f9c,DAT_14043f98,DAT_14043f90,DAT_14043f8c);
  FUN_140e5658(iVar1,0,0xe46);
  uVar2 = DAT_14043fa0;
  *(undefined4 *)(iVar1 + 0x88) = 0x64646464;
  *(undefined4 *)(iVar1 + 0xe3e) = uVar2;
  uVar2 = DAT_14043fa4;
  *(undefined2 *)(iVar1 + 0x60) = 0xa0;
  *(undefined1 *)(iVar1 + 99) = 1;
  *(undefined4 *)(iVar1 + 0x6c) = 0x64646464;
  uVar2 = FUN_140e5138(uVar2);
  *(undefined4 *)(iVar1 + 0xe42) = uVar2;
  return;
}

