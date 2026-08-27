/* FUN_2c46a54a @ 0x2c46a54a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c46a54a(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined1 auStack_90 [128];
  int iStack_10;
  
  iStack_10 = *_LAB_2c46a594;
  uVar1 = FUN_2c66de7c(auStack_90,0x80,in_stack_00000000,&stack0x00000004,&stack0x00000004);
  FUN_2c46a48c(param_1,auStack_90,uVar1);
  if (*_LAB_2c46a594 == iStack_10) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

