/* FUN_1011f90a @ 0x1011f90a */

undefined4 FUN_1011f90a(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x1011f910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(param_1 + 8) + 8))();
    return uVar1;
  }
  return 0xffffffea;
}

