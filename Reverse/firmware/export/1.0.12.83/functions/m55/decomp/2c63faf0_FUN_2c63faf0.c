/* FUN_2c63faf0 @ 0x2c63faf0 */

int FUN_2c63faf0(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  int local_14;
  
  local_14 = *DAT_2c63fbb4;
  iVar1 = FUN_2c6411ac();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_2c640a50();
    if (iVar2 == 0) {
      iVar2 = FUN_2c63ed48(3,auStack_28,1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c63fbc4,0x2d9,DAT_2c63fbd8,DAT_2c63fbd4);
      }
      FUN_2c64078c(DAT_2c63fbb8);
      FUN_2c6411e0();
      iVar2 = FUN_2c63e140();
      if (iVar2 != 0) {
        FUN_2c63dc4c(0,1);
      }
      FUN_2c640b70(auStack_28,0);
    }
    else {
      iVar1 = FUN_2c640dc0();
      if (iVar1 != 0) goto LAB_2c63fb06;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c63fbc4,0xc5,DAT_2c63fbc0,DAT_2c63fbbc,0);
  }
LAB_2c63fb06:
  if (*DAT_2c63fbb4 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar2;
}

