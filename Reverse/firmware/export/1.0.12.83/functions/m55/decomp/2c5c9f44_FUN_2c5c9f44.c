/* FUN_2c5c9f44 @ 0x2c5c9f44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c9f44(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *_LAB_2c5ca050;
  iVar1 = FUN_2c48e424(param_1,_LAB_2c5ca054,param_3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5ca060,0x317,_LAB_2c5ca05c,_LAB_2c5ca07c);
  }
  iVar1 = FUN_2c48e3e8();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ca060,0x31e,_LAB_2c5ca05c,_LAB_2c5ca058,iVar1);
  }
  if (*_LAB_2c5ca050 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

