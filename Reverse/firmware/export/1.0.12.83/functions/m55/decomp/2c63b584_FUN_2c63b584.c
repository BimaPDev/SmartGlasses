/* FUN_2c63b584 @ 0x2c63b584 */

void FUN_2c63b584(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_18;
  int local_14;
  
  puVar2 = DAT_2c63b638;
  piVar1 = DAT_2c63b634;
  local_14 = *DAT_2c63b62c;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x183,DAT_2c63b648,DAT_2c63b644,DAT_2c63b64c);
  }
  if (*DAT_2c63b630 != '\0') {
    if (*DAT_2c63b634 != 0) {
      local_18 = param_1;
      FUN_2c644044(*DAT_2c63b638,0xffffffff);
      iVar3 = FUN_2c4858f0(*piVar1,DAT_2c63b63c,&local_18);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,400,DAT_2c63b648,DAT_2c63b644,DAT_2c63b654,DAT_2c63b650,param_1);
      }
      FUN_2c485820(*piVar1,iVar3);
      FUN_2c644080(*puVar2);
      if (*DAT_2c63b62c == local_14) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x187,DAT_2c63b648,DAT_2c63b644,DAT_2c63b640);
}

