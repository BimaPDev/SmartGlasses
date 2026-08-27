/* FUN_2c4ab578 @ 0x2c4ab578 */

void FUN_2c4ab578(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  ushort local_e;
  uint local_c;
  
  local_c = *DAT_2c4ab5c4;
  local_e = 0;
  (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x1c4),&local_e);
  if (((uint)local_e & ~*(uint *)(param_1 + 0x1c8)) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  if ((*DAT_2c4ab5c4 ^ local_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar1,extraout_r1,*DAT_2c4ab5c4 ^ local_c,0);
  }
  return;
}

