/* FUN_2c4ab4ec @ 0x2c4ab4ec */

void FUN_2c4ab4ec(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = (**(code **)(param_1 + 0x340))
                      (param_1,*(undefined1 *)(param_1 + 0x1a4),*(undefined2 *)(param_1 + 0x1a8),
                       *(undefined2 *)(param_1 + 0x1b0));
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x3f2,DAT_2c4ab570,DAT_2c4ab56c,DAT_2c4ab568,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ab564);
    }
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x340))
                      (param_1,*(undefined1 *)(param_1 + 0x1a4),*(undefined2 *)(param_1 + 0x1a8),
                       *(undefined2 *)(param_1 + 0x1ac));
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x3ec,DAT_2c4ab570,DAT_2c4ab56c,DAT_2c4ab574,*(undefined1 *)(param_1 + 0xa0),
            DAT_2c4ab564);
    }
  }
  return;
}

