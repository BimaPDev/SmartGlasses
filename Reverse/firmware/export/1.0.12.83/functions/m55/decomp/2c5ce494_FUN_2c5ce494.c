/* FUN_2c5ce494 @ 0x2c5ce494 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ce494(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *_LAB_2c5ce534;
  iVar1 = FUN_2c621080(param_2,param_2,param_3,0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ce540,0x13b,_LAB_2c5ce53c,_LAB_2c5ce538);
  }
  if (*_LAB_2c5ce534 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

