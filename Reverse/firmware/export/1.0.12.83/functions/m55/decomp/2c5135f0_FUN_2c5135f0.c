/* FUN_2c5135f0 @ 0x2c5135f0 */

void FUN_2c5135f0(int param_1)

{
  int *piVar1;
  
  FUN_2c62be40();
  piVar1 = *(int **)(param_1 + 0xc);
  *(undefined1 *)(piVar1 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x2c513606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 8))();
  return;
}

