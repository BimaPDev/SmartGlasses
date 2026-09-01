/* FUN_1005d1dc @ 0x1005d1dc */

void FUN_1005d1dc(void)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  *(undefined1 *)(DAT_1005d1fc + 0x19) = 1;
  FUN_1005d3e0(0);
  iVar2 = FUN_10057234();
  piVar1 = DAT_1005793c;
  if (iVar2 == 0) {
    for (iVar2 = 0; iVar2 < *piVar1; iVar2 = iVar2 + 1) {
      pcVar3 = (code *)piVar1[iVar2 * 2 + 1];
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
    }
    return;
  }
  return;
}

