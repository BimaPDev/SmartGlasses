/* FUN_2c63da94 @ 0x2c63da94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c63da94(void)

{
  int iVar1;
  undefined1 auStack_20 [12];
  int iStack_14;
  
  iStack_14 = *_LAB_2c63db20;
  iVar1 = FUN_2c6411ac();
  if (iVar1 != 0) {
    FUN_2c6411e0();
    FUN_2c63f744(0,1);
    FUN_2c63b92c(1);
    iVar1 = FUN_2c5e31b4(0x1f,auStack_20);
    if (iVar1 != 0) {
      FUN_2c63e954(auStack_20[0],0);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c63db30,0x53,_LAB_2c63db2c,_LAB_2c63db28);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c63db30,0x178,_LAB_2c63db38,_LAB_2c63db34);
  }
  if (*_LAB_2c63db20 == iStack_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

