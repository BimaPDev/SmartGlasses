/* FUN_2c641330 @ 0x2c641330 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c641330(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *_LAB_2c641530;
  iVar1 = FUN_2c5ff4d8();
  if (iVar1 != 0) {
    iVar1 = FUN_2c5ff4e4();
    iVar2 = FUN_2c602408(param_1);
    if ((iVar1 == 2) && (iVar2 == 0xd)) {
      FUN_2c5ff4d8();
      uVar3 = func_0x2c5ff5f8();
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c64153c,0x68,_LAB_2c641538,_LAB_2c641534,uVar3);
    }
  }
  if (*_LAB_2c641530 == iVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

