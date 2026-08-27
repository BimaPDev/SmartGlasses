/* FUN_2c52fb3e @ 0x2c52fb3e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52fb3e(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = _DAT_2c52fb6c;
  *(undefined1 *)(param_1 + 1) = 0x12;
  if (*(code **)(*param_1 + 0x10) != pcVar1) {
    (**(code **)(*param_1 + 0x10))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c52fb78,0x10c,_LAB_2c52fb74,_LAB_2c52fb70);
}

