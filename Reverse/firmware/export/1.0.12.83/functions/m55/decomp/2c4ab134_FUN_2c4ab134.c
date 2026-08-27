/* FUN_2c4ab134 @ 0x2c4ab134 */

int FUN_2c4ab134(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 local_16;
  int local_14;
  
  local_16 = 0;
  local_14 = *DAT_2c4ab19c;
  iVar1 = (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0xcc),&local_16);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x314,DAT_2c4ab1ac,DAT_2c4ab1a8,DAT_2c4ab1a4,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ab1a0,iVar1);
  }
  *param_2 = local_16;
  if (*DAT_2c4ab19c == local_14) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

