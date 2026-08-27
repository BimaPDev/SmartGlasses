/* FUN_140017d0 @ 0x140017d0 */

void FUN_140017d0(undefined4 param_1,uint param_2)

{
  do {
  } while (*(int *)(DAT_140017ec + 0xc) << 0x1f < 0);
  *(uint *)(DAT_140017ec + 0x14) =
       (param_2 & 0xff) << 0x10 | *(uint *)(DAT_140017ec + 0x14) & 0xff00ffff;
  return;
}

