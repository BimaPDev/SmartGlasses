/* FUN_2c6589c6 @ 0x2c6589c6 */

void FUN_2c6589c6(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  while (piVar1 != (int *)0x0) {
    iVar2 = piVar1[3];
    piVar1[3] = iVar2 + -1;
    if (iVar2 != 0) break;
    piVar1 = (int *)*piVar1;
    thunk_FUN_2c669588();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

