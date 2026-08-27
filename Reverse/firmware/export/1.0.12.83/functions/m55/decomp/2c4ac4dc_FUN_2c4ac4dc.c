/* FUN_2c4ac4dc @ 0x2c4ac4dc */

undefined4
FUN_2c4ac4dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x344))
                    (param_1,*(undefined2 *)(param_1 + 0x20c),param_2,
                     *(undefined1 *)(param_1 + 0x210));
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x212,DAT_2c4ac5ec,DAT_2c4ac5e8,DAT_2c4ac5e4,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ac5e0,*(undefined4 *)(param_1 + 0x20c));
  }
  iVar1 = (**(code **)(param_1 + 0x344))
                    (param_1,*(undefined2 *)(param_1 + 0x214),param_3,
                     *(undefined1 *)(param_1 + 0x218));
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x219,DAT_2c4ac5ec,DAT_2c4ac5e8,DAT_2c4ac5e4,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ac5e0,*(undefined4 *)(param_1 + 0x214));
  }
  iVar1 = (**(code **)(param_1 + 0x344))
                    (param_1,*(undefined2 *)(param_1 + 0x21c),param_4,
                     *(undefined1 *)(param_1 + 0x220));
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x220,DAT_2c4ac5ec,DAT_2c4ac5e8,DAT_2c4ac5e4,*(undefined1 *)(param_1 + 0xa0),
          DAT_2c4ac5e0,*(undefined4 *)(param_1 + 0x21c));
  }
  iVar1 = (**(code **)(param_1 + 0x344))
                    (param_1,*(undefined2 *)(param_1 + 0x224),param_5,
                     *(undefined1 *)(param_1 + 0x228));
  if (-1 < iVar1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x227,DAT_2c4ac5ec,DAT_2c4ac5e8,DAT_2c4ac5e4,*(undefined1 *)(param_1 + 0xa0),DAT_2c4ac5e0,
        *(undefined4 *)(param_1 + 0x224));
}

