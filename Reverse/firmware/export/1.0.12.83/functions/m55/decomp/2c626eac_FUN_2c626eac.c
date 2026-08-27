/* FUN_2c626eac @ 0x2c626eac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c626eac(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_114 [256];
  int iStack_14;
  
  iStack_14 = *_LAB_2c626f04;
  FUN_2c62dbd4(auStack_114,0x100,_LAB_2c626f08,param_2);
  iVar1 = FUN_2c4f45c8(*(undefined4 *)(param_1 + 0x30),param_2);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c626f14,0xb0,_LAB_2c626f10,_LAB_2c626f0c,param_2,iVar1);
  }
  if (*_LAB_2c626f04 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

