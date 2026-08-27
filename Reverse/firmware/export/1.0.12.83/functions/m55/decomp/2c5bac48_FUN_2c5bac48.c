/* FUN_2c5bac48 @ 0x2c5bac48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5bac48(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + 0x24);
  piVar2 = (int *)*piVar1;
  if (piVar1 == piVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5bacdc,0x36,_LAB_2c5bacd4,_LAB_2c5bacd8,_LAB_2c5bacd4);
  }
  while (piVar2[2] != param_2) {
    piVar2 = (int *)*piVar2;
    if (piVar1 == piVar2) {
      return;
    }
  }
  (**(code **)(*(int *)piVar2[0x12] + 8))();
  FUN_2c5bab38(param_1,piVar2[3]);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  func_0x2c64cdc2(piVar2);
  if ((int *)piVar2[9] == piVar2 + 0xb) {
    if ((int *)piVar2[3] == piVar2 + 5) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,piVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

