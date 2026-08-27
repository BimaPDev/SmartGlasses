/* FUN_2c4ac410 @ 0x2c4ac410 */

undefined4 FUN_2c4ac410(int param_1,int param_2)

{
  int iVar1;
  uint local_18;
  int local_14;
  
  local_14 = *DAT_2c4ac4c4;
  iVar1 = (**(code **)(param_1 + 0x348))
                    (param_1,*(undefined2 *)(param_1 + 0x244),&local_18,
                     *(undefined1 *)(param_1 + 0x248));
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2d6,DAT_2c4ac4d4,DAT_2c4ac4d0,DAT_2c4ac4cc,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ac4c8,*(undefined4 *)(param_1 + 0x244));
  }
  if (param_2 == 0) {
    local_18 = *(uint *)(param_1 + 0x24c) & local_18;
  }
  else {
    local_18 = local_18 | ~*(uint *)(param_1 + 0x24c);
  }
  iVar1 = (**(code **)(param_1 + 0x344))
                    (param_1,*(undefined2 *)(param_1 + 0x244),local_18,
                     *(undefined1 *)(param_1 + 0x248));
  if (-1 < iVar1) {
    if (*DAT_2c4ac4c4 == local_14) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x2e4,DAT_2c4ac4d4,DAT_2c4ac4d0,DAT_2c4ac4d8,*(undefined1 *)(param_1 + 0xa0),DAT_2c4ac4c8,
        *(undefined4 *)(param_1 + 0x244));
}

