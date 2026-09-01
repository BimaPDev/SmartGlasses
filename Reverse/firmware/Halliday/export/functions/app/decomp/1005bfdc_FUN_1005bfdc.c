/* FUN_1005bfdc @ 0x1005bfdc */

void FUN_1005bfdc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_1005c004;
  piVar1 = DAT_1005c000;
  iVar3 = *DAT_1005c000;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    FUN_1011b5f8(*(undefined4 *)(iVar2 + iVar3 * 4),0);
  }
  *piVar1 = 0;
  return;
}

