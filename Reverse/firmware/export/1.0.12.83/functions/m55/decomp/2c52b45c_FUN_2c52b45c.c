/* FUN_2c52b45c @ 0x2c52b45c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52b45c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))();
  }
  uVar1 = _LAB_2c52b48c;
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 8) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c52b494,0x3a,_LAB_2c52b490,uVar1);
}

