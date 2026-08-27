/* FUN_2c606120 @ 0x2c606120 */

void FUN_2c606120(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  FUN_2c602428(param_2);
  FUN_2c6033a8(0);
  FUN_2c603a04(param_2,0,DAT_2c606188);
  FUN_2c6033a8(1);
  FUN_2c62e838(param_2,0);
  piVar1 = *(int **)(param_2 + 8);
  if (piVar1 != (int *)0x0) {
    if (piVar1[2] != 0) {
      FUN_2c602ea8(param_2);
      piVar1 = *(int **)(param_2 + 8);
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    if (*piVar1 != 0) {
      FUN_2c62bea8();
      **(undefined4 **)(param_2 + 8) = 0;
      piVar1 = *(int **)(param_2 + 8);
    }
    if (piVar1[3] != 0) {
      FUN_2c62bea8(piVar1[3]);
      *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = 0;
      piVar1 = *(int **)(param_2 + 8);
    }
    FUN_2c62bea8(piVar1);
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}

