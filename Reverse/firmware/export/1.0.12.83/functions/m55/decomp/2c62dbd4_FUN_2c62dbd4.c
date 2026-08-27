/* FUN_2c62dbd4 @ 0x2c62dbd4 */

void FUN_2c62dbd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_4;
  
  iVar1 = *DAT_2c62dc20;
  uStack_4 = param_4;
  FUN_2c62d4fc(DAT_2c62dc1c,param_1,param_2,param_3,&uStack_4);
  if (*DAT_2c62dc20 == iVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

