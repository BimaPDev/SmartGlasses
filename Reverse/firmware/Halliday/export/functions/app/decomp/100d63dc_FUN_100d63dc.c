/* FUN_100d63dc @ 0x100d63dc */

uint FUN_100d63dc(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*DAT_100d63ec != 0) {
    uVar1 = (*(byte *)(*DAT_100d63ec + 8) & 0xf) >> 3;
  }
  return uVar1;
}

