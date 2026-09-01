/* FUN_1011e796 @ 0x1011e796 */

void FUN_1011e796(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + 0xa0);
  do {
    piVar2 = piVar1 + 1;
    if (*piVar1 != 0) {
      FUN_10067470();
    }
    if ((code *)piVar1[3] != (code *)0x0) {
      (*(code *)piVar1[3])(piVar1[6]);
    }
    piVar1 = piVar2;
  } while (piVar2 != (int *)(param_1 + 0xac));
  FUN_1011ea48(param_1,0,0xc4);
  return;
}

