/* FUN_2c4ac5f0 @ 0x2c4ac5f0 */

undefined4 FUN_2c4ac5f0(int param_1,uint *param_2)

{
  int iVar1;
  uint local_20;
  int local_1c;
  
  local_1c = *DAT_2c4ac65c;
  local_20 = 0;
  iVar1 = (**(code **)(param_1 + 0x348))
                    (param_1,*(undefined2 *)(param_1 + 0x250),&local_20,
                     *(undefined1 *)(param_1 + 0x254));
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x129,DAT_2c4ac66c,DAT_2c4ac668,DAT_2c4ac664,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ac660);
  }
  *param_2 = local_20 >> (*(uint *)(param_1 + 600) & 0xff);
  if (*DAT_2c4ac65c == local_1c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

