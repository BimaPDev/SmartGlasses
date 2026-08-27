/* FUN_2c52b498 @ 0x2c52b498 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52b498(int param_1)

{
  undefined4 uVar1;
  
  if ((int *)**(int **)(param_1 + 0x30) == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)**(int **)(param_1 + 0x30) + 0xc))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c52b4d0,0x1b3,_LAB_2c52b4cc,_LAB_2c52b4c8,uVar1);
}

