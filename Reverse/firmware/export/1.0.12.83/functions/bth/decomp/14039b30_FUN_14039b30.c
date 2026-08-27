/* FUN_14039b30 @ 0x14039b30 */

void FUN_14039b30(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = DAT_14039b54;
  piVar2 = DAT_14039b50 + 0xf;
  piVar3 = DAT_14039b50;
  do {
    piVar4 = piVar3 + 1;
    if (*piVar3 == iVar1) {
      *piVar3 = param_1;
    }
    piVar3 = piVar4;
  } while (piVar4 != piVar2);
  return;
}

