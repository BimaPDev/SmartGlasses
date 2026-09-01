/* FUN_100d6730 @ 0x100d6730 */

void FUN_100d6730(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_100d67bc;
  FUN_100a5b78((DAT_100d67b4 - DAT_100d67b8) * 0x20 & 0xff00U | 0xff0031,DAT_100d67c4,DAT_100d67c0);
  iVar3 = 0;
  do {
    iVar2 = *piVar1 + iVar3 * 0x12;
    if (((int)((uint)*(byte *)(iVar2 + 0x1e) << 0x1f) < 0) && (*(char *)(iVar2 + 0x24) == '\x02')) {
      FUN_100d3ed4(*piVar1 + iVar3 * 0x12 + 0x18);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 3);
  iVar3 = *piVar1;
  FUN_1011ea48(iVar3 + 0x18,0,0x36);
  FUN_10116598(iVar3 + 0x50);
  FUN_100d3d2c(8,0);
  thunk_FUN_100d88cc(0);
  *(byte *)(*piVar1 + 0xa4) = *(byte *)(*piVar1 + 0xa4) & 0xfb;
  FUN_100d6694();
  return;
}

