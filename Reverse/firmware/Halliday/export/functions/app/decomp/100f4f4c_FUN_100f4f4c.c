/* FUN_100f4f4c @ 0x100f4f4c */

void FUN_100f4f4c(void)

{
  int iVar1;
  undefined4 in_r3;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_100f4f9c;
  FUN_10114a38();
  if (*(char *)(iVar1 + 1) == '\0') {
    uVar3 = (DAT_100f4fa0 - DAT_100f4fa4) * 0x20 & 0xff00;
    FUN_100a5b78(uVar3 | 0xa90021,DAT_100f4fac);
  }
  else {
    iVar2 = DAT_100f4fa0 - DAT_100f4fa4;
    *(char *)(iVar1 + 1) = *(char *)(iVar1 + 1) + -1;
    uVar3 = iVar2 * 0x20 & 0xff00;
  }
  FUN_101150e0();
  FUN_100a5b78(uVar3 | 0xaf0031,DAT_100f4fa8,*(undefined1 *)(iVar1 + 1),in_r3);
  return;
}

