/* FUN_2c4e904c @ 0x2c4e904c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4e904c(uint *param_1)

{
  int iStack_18;
  int iStack_14;
  int iStack_c;
  
  iStack_c = *_LAB_2c4e908c;
  iStack_18 = *param_1 + 0x7080;
  iStack_14 = param_1[1] + (uint)(0xffff8f7f < *param_1);
  FUN_2c668f08(&iStack_18);
  if (*_LAB_2c4e908c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

