/* FUN_2c4fccb8 @ 0x2c4fccb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4fccb8(undefined4 param_1)

{
  int iVar1;
  undefined4 local_3c [2];
  undefined4 local_34;
  int local_1c;
  
  local_1c = *DAT_2c4fcd8c;
  FUN_2c4fc8a8(param_1,0,local_3c,0x20);
  FUN_2c6743a8(DAT_2c4fcd90,1,0x20,local_3c);
  local_3c[0] = DAT_2c4fcd94;
  iVar1 = FUN_2c4fd554();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x71,_LAB_2c4fcda4,_LAB_2c4fcda0,_LAB_2c4fcd98,_LAB_2c4fcd9c,local_34);
  }
  if (*DAT_2c4fcd8c == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

