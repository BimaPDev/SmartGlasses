/* FUN_2c4932a0 @ 0x2c4932a0 */

uint FUN_2c4932a0(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_2c641a68();
  if (uVar1 == 0) {
    iVar2 = DAT_2c4932e8;
    do {
      if ((*(char *)(iVar2 + 0x30) == '\b') && (*(byte *)(iVar2 + 0x38) != 0)) {
        return (uint)*(byte *)(iVar2 + 0x38);
      }
      iVar2 = iVar2 + -0xc;
    } while (iVar2 != DAT_2c4932e8 + -0x3c);
    iVar2 = DAT_2c4932ec;
    do {
      if (((*(char *)(iVar2 + 0x18) == '\x01') || (*(char *)(iVar2 + 0x18) == '\a')) &&
         (*(byte *)(iVar2 + 0x20) != 0)) {
        return (uint)*(byte *)(iVar2 + 0x20);
      }
      iVar2 = iVar2 + -0xc;
    } while (iVar2 != DAT_2c4932ec + -0x24);
  }
  return uVar1;
}

