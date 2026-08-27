/* FUN_2c63ff50 @ 0x2c63ff50 */

undefined4 FUN_2c63ff50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_2c640040;
  if ((param_1 == 0) && (iVar1 = FUN_2c48f590(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c640048,0x37f,DAT_2c64004c,DAT_2c640050);
  }
  iVar1 = FUN_2c6411ac();
  if (iVar1 != 0) {
    iVar2 = FUN_2c63f2f4(1,param_1);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c640048,0x391,DAT_2c64004c,DAT_2c640044,param_1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c640048,0x38c,DAT_2c64004c,DAT_2c64005c,param_1);
  }
  if (*DAT_2c640040 == iVar2) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

