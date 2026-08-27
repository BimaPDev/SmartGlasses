/* FUN_2c4ab1b0 @ 0x2c4ab1b0 */

void FUN_2c4ab1b0(undefined4 param_1)

{
  undefined2 uStack_e;
  int iStack_c;
  
  iStack_c = *DAT_2c4ab1f0;
  uStack_e = 0;
  FUN_2c4ab134(param_1,&uStack_e,0);
  FUN_2c4ab134(param_1,&uStack_e);
  if (*DAT_2c4ab1f0 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

