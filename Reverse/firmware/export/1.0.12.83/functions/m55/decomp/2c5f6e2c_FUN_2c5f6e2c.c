/* FUN_2c5f6e2c @ 0x2c5f6e2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5f6e2c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    FUN_2c5f670c();
    uVar1 = _LAB_2c5f6e7c;
    *(undefined1 *)(*(int *)(param_1 + 0x70) + 0x25) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5f6e84,0x4d,_LAB_2c5f6e80,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5f6e84,0x46,_LAB_2c5f6e80,_LAB_2c5f6e88);
}

