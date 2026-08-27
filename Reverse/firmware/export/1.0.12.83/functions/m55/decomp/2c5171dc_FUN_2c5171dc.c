/* FUN_2c5171dc @ 0x2c5171dc */

void FUN_2c5171dc(undefined4 param_1,int param_2,short *param_3,short *param_4)

{
  short asStack_1c [2];
  short sStack_18;
  int iStack_14;
  
  iStack_14 = *DAT_2c517240;
  FUN_2c60747c(param_1,asStack_1c,param_3,0);
  param_4[2] = ((sStack_18 + 1) - asStack_1c[0]) + *param_3;
  param_4[3] = param_3[1];
  *param_4 = *param_3;
  param_4[1] = (-0x28 - (*(short *)(param_2 + 0xa8) + *(short *)(param_2 + 0xbc))) + param_3[1];
  if (*DAT_2c517240 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

