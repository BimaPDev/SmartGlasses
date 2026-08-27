/* FUN_2c648740 @ 0x2c648740 */

void FUN_2c648740(int param_1,int param_2)

{
  uint uVar1;
  undefined2 local_e;
  int local_c;
  
  local_c = *DAT_2c6487b8;
  if ((param_1 == 2) && (uVar1 = FUN_2c66d654(*(undefined4 *)(param_2 + 4),0,0x10), uVar1 < 0xf001))
  {
    FUN_2c673e88(uVar1 & 0xffff,&local_e);
    FUN_2c648600(DAT_2c6487c8,uVar1,local_e);
    if (*DAT_2c6487b8 == local_c) {
      return;
    }
  }
  else {
    FUN_2c648600(DAT_2c6487bc);
    FUN_2c648600(DAT_2c6487c0);
    if (*DAT_2c6487b8 == local_c) {
      FUN_2c648600(DAT_2c6487c4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

