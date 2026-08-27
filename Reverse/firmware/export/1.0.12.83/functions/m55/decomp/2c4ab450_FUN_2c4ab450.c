/* FUN_2c4ab450 @ 0x2c4ab450 */

void FUN_2c4ab450(int param_1)

{
  char cVar1;
  ushort local_16;
  uint local_14;
  
  cVar1 = '\n';
  local_14 = *DAT_2c4ab4d8;
  local_16 = 0;
  do {
    (**(code **)(param_1 + 0x33c))(param_1,*(undefined1 *)(param_1 + 0x164),&local_16);
    if (*(uint *)(param_1 + 0x168) ==
        ((uint)local_16 & *(uint *)(param_1 + 0x168) & ~*(uint *)(param_1 + 0x16c))) {
      if ((*DAT_2c4ab4d8 ^ local_14) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail(0,*(uint *)(param_1 + 0x16c),*DAT_2c4ab4d8 ^ local_14,0);
    }
    FUN_2c6444fc(2);
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x3a0,DAT_2c4ab4e8,DAT_2c4ab4e4,DAT_2c4ab4e0,*(undefined1 *)(param_1 + 0xa0),DAT_2c4ab4dc)
  ;
}

