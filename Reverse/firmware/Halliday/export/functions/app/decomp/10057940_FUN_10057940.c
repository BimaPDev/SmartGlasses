/* FUN_10057940 @ 0x10057940 */

void FUN_10057940(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  piVar1 = DAT_1005795c;
  for (iVar3 = 0; iVar3 < *piVar1; iVar3 = iVar3 + 1) {
    pcVar2 = (code *)piVar1[iVar3 * 2 + 2];
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  return;
}

