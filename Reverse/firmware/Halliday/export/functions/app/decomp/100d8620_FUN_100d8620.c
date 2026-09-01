/* FUN_100d8620 @ 0x100d8620 */

uint FUN_100d8620(void)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = DAT_100d869c;
  iVar4 = (*(byte *)(*DAT_100d869c + 0x6c) & 7) * 0x12 + *DAT_100d869c;
  bVar1 = *(byte *)(iVar4 + 0x1e);
  uVar5 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    if (1 < *(byte *)(iVar4 + 0x24)) {
      return uVar5;
    }
    uVar5 = 0;
  }
  while( true ) {
    iVar4 = uVar5 * 0x12 + *piVar2;
    if (((((int)((uint)*(byte *)(iVar4 + 0x1e) << 0x1f) < 0) &&
         (uVar3 = FUN_101165e0(*piVar2 + 0x50), uVar3 != 0)) && (*(char *)(iVar4 + 0x24) == '\0'))
       && (*(char *)(iVar4 + 0x21) != '\0')) break;
    uVar5 = uVar5 + 1;
    if (uVar5 == 3) {
      return 0;
    }
  }
  FUN_100a5b78(DAT_100d86a8 | (DAT_100d86a4 - DAT_100d86a0) * 0x20 & 0xff00U,DAT_100d86b0,
               DAT_100d86ac);
  return uVar3;
}

