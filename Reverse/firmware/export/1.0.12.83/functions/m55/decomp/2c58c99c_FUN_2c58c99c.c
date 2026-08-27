/* FUN_2c58c99c @ 0x2c58c99c */

undefined4 FUN_2c58c99c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0xff;
    }
    iVar1 = FUN_2c66b624(piVar2[2],param_2);
    if (iVar1 == 0) break;
    piVar2 = (int *)*piVar2;
  }
  return piVar2[1];
}

