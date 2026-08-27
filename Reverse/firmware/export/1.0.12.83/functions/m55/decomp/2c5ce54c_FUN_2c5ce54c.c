/* FUN_2c5ce54c @ 0x2c5ce54c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ce54c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if ((*(char *)(iVar1 + 0x78) != '\0') && (*(int *)(iVar1 + 0x7c) == 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5ce608,0x109,_LAB_2c5ce604,_LAB_2c5ce600);
    }
    if (*(char *)(iVar1 + 0x52) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5ce608,0x23d,_LAB_2c5ce610,_LAB_2c5ce60c);
    }
  }
  if (*_LAB_2c5ce5fc == *_LAB_2c5ce5fc) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

