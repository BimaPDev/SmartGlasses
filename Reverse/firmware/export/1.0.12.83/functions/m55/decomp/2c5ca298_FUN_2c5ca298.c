/* FUN_2c5ca298 @ 0x2c5ca298 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ca298(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *_LAB_2c5ca37c;
  if (param_4 != 0) {
    uVar1 = FUN_2c48e424(param_1,_LAB_2c5ca380,0);
    FUN_2c48e424(uVar1,_LAB_2c5ca384);
    iVar2 = FUN_2c48de10();
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5ca38c,0x50e,_LAB_2c5ca390,_LAB_2c5ca388,iVar2);
    }
  }
  if (*_LAB_2c5ca37c == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

