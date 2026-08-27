/* FUN_2c5768f0 @ 0x2c5768f0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c5768f0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

