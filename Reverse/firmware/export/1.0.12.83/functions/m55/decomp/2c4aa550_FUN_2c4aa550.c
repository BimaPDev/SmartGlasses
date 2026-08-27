/* FUN_2c4aa550 @ 0x2c4aa550 */

void FUN_2c4aa550(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = (**(code **)(param_1 + 0x340))
                      (param_1,*(undefined1 *)(param_1 + 0x1b4),*(undefined2 *)(param_1 + 0x1b8),
                       *(undefined2 *)(param_1 + 0x1bc));
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x418,DAT_2c4aa5d4,DAT_2c4aa5d0,DAT_2c4aa5cc,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aa5c8);
    }
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x340))
                      (param_1,*(undefined1 *)(param_1 + 0x1b4),*(undefined2 *)(param_1 + 0x1b8),
                       *(undefined2 *)(param_1 + 0x1c0));
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x41e,DAT_2c4aa5d4,DAT_2c4aa5d0,DAT_2c4aa5d8,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4aa5c8);
    }
  }
  return;
}

