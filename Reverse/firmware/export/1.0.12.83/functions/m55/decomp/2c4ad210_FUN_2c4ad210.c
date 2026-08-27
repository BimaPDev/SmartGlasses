/* FUN_2c4ad210 @ 0x2c4ad210 */

undefined4 FUN_2c4ad210(int param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_14 = *DAT_2c4ad280;
  iVar1 = (**(code **)(param_1 + 0x348))
                    (param_1,*(undefined2 *)(param_1 + 0x22c),&local_18,
                     *(undefined1 *)(param_1 + 0x230));
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xa4,DAT_2c4ad290,DAT_2c4ad28c,DAT_2c4ad288,*(undefined1 *)(param_1 + 0xa0),DAT_2c4ad284
         );
  }
  *(uint *)(param_1 + 0x300) = (uint)(local_18 * 1000) >> (*(uint *)(param_1 + 0x284) & 0xff);
  if (*DAT_2c4ad280 == local_14) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

