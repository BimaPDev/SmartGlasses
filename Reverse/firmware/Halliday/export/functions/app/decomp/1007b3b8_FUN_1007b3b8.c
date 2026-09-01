/* FUN_1007b3b8 @ 0x1007b3b8 */

void FUN_1007b3b8(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  do {
    iVar1 = FUN_1007b2e4();
  } while (iVar1 < 1);
  uVar2 = FUN_1011feb0();
  if (0x1099 < param_1) {
    param_1 = 0x109a;
  }
  iVar1 = FUN_1013d02e(param_1 - (uVar2 & 0xffff));
  if (199 < iVar1) {
    param_1 = uVar2 & 0xffff;
  }
  *(short *)(DAT_1007b3ec + 0x15e) = (short)param_1;
  return;
}

