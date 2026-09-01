/* FUN_100dff80 @ 0x100dff80 */

uint FUN_100dff80(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = 1 << (uVar1 & 0xff);
    if ((uVar2 & *DAT_100dffa8) == 0) {
      *DAT_100dffa8 = uVar2 | *DAT_100dffa8;
      return uVar1 + 10 & 0xff;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x14);
  return 0;
}

