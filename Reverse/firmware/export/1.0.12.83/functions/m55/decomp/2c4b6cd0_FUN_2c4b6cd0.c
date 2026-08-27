/* FUN_2c4b6cd0 @ 0x2c4b6cd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4b6cd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uStack_e;
  int iStack_c;
  
  iStack_c = *_LAB_2c4b6d20;
  FUN_2c673e88(0x3001,&uStack_e,param_3,0);
  if (param_1 == 0) {
    uStack_e = uStack_e & 0xfffc;
  }
  else {
    uStack_e = uStack_e | 3;
  }
  FUN_2c673d68(0x3001);
  if (*_LAB_2c4b6d20 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

