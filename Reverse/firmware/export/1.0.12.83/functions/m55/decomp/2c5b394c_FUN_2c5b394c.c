/* FUN_2c5b394c @ 0x2c5b394c */

void FUN_2c5b394c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5b39ac,0x32,DAT_2c5b39a8,DAT_2c5b39a4);
  }
  uVar1 = FUN_2c606a10(param_2);
  FUN_2c603a04(uVar1,0,DAT_2c5b39b0);
  FUN_2c607048(uVar1,0x27d1);
  FUN_2c6072bc(uVar1,9,0,0);
  FUN_2c606d6c(uVar1,0,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

