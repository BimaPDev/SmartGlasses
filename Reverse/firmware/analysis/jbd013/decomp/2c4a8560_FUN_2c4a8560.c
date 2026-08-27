/* FUN_2c4a8560 @ 0x2c4a8560 */

int FUN_2c4a8560(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x1c))(*(undefined1 *)(param_1 + 0xd));
  if (-1 < iVar1) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x29,DAT_2c4a85a8,DAT_2c4a85a4,DAT_2c4a85a0,*(undefined1 *)(param_1 + 0xc),DAT_2c4a859c,
        *(undefined1 *)(param_1 + 0xd),param_2);
}

