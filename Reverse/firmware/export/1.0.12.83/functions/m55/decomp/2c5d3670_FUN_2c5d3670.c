/* FUN_2c5d3670 @ 0x2c5d3670 */

void FUN_2c5d3670(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x60) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d3830,0x345,DAT_2c5d382c,DAT_2c5d3828,0);
  }
  uVar1 = registry_lookup();
  registry_lookup(*(undefined4 *)(param_1 + 0x60));
  uVar2 = FUN_2c66c4ec();
  uVar3 = FUN_2c5e2e80(DAT_2c5d3834);
  uVar1 = FUN_2c62b85c(uVar1,uVar2,uVar3,0,0);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5d3830,0x345,DAT_2c5d382c,DAT_2c5d3828,uVar1);
}

