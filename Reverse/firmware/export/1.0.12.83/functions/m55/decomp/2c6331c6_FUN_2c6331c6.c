/* FUN_2c6331c6 @ 0x2c6331c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6331c6(int param_1,int param_2,byte param_3,int *param_4)

{
  int in_r12;
  short sStack_1c;
  short sStack_1a;
  short sStack_18;
  short sStack_16;
  int iStack_14;
  
  iStack_14 = *param_4;
  if (in_r12 != param_2) {
    *(byte *)(param_1 + 0x54) = param_3 & 0xfe | param_2 != 0;
    sStack_18 = *(short *)(*(int *)(param_1 + 0x24) + 0x14);
    sStack_16 = *(short *)(*(int *)(param_1 + 0x24) + 0x16);
    sStack_1c = *(short *)(param_1 + 0x48) + sStack_18;
    sStack_18 = sStack_18 + *(short *)(param_1 + 0x4c);
    sStack_1a = sStack_16 + *(short *)(param_1 + 0x4a);
    sStack_16 = sStack_16 + *(short *)(param_1 + 0x4e);
    FUN_2c6078f0(param_1,&sStack_1c);
  }
  if (*_LAB_2c633230 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

