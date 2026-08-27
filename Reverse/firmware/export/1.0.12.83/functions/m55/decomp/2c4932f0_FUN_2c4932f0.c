/* FUN_2c4932f0 @ 0x2c4932f0 */

undefined4 FUN_2c4932f0(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = DAT_2c49330c;
  do {
    pcVar1 = (char *)(iVar2 + 0x30);
    iVar2 = iVar2 + -0xc;
    if (*pcVar1 == '\x06') {
      return 1;
    }
  } while (iVar2 != DAT_2c49330c + -0x3c);
  return 0;
}

