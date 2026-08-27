/* FUN_2c4ab1f4 @ 0x2c4ab1f4 */

void FUN_2c4ab1f4(int param_1)

{
  undefined4 extraout_r1;
  ushort local_16;
  uint local_14;
  
  local_14 = *DAT_2c4ab268;
  local_16 = 0;
  (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x164),&local_16);
  if ((*(uint *)(param_1 + 0x170) & ~(uint)local_16) != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x334,DAT_2c4ab278,DAT_2c4ab274,DAT_2c4ab270,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ab26c,*(undefined4 *)(param_1 + 0x164),(uint)local_16);
  }
  if ((*DAT_2c4ab268 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(0,extraout_r1,*DAT_2c4ab268 ^ local_14,0);
}

