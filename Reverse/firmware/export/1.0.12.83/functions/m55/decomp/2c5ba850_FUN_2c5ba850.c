/* FUN_2c5ba850 @ 0x2c5ba850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ba850(void)

{
  undefined8 uVar1;
  int iStack_18;
  int iStack_14;
  uint uStack_c;
  
  uStack_c = *_LAB_2c5ba8a8;
  iStack_18 = 1;
  iStack_14 = 0;
  uVar1 = FUN_2c5e31b4(1,&iStack_18);
  if ((int)uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5ba8b4,0x7f,_LAB_2c5ba8ac,_LAB_2c5ba8b0,_LAB_2c5ba8ac);
  }
  if ((*_LAB_2c5ba8a8 ^ uStack_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(iStack_14 != 0 || iStack_18 != 0,(int)((ulonglong)uVar1 >> 0x20),
                   *_LAB_2c5ba8a8 ^ uStack_c,0);
  }
  return;
}

