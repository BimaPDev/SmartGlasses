/* FUN_2c4728e8 @ 0x2c4728e8 */

undefined4 FUN_2c4728e8(undefined4 param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = DAT_2c4729a4;
  piVar1 = DAT_2c472984;
  if (0x35fff < param_2) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x206,DAT_2c472998,DAT_2c472994,DAT_2c472990,DAT_2c47298c,0x36000);
  }
  if (param_2 != 0) {
    if (*DAT_2c472984 != 0) {
      FUN_2c644044(*DAT_2c4729a4,0xffffffff);
      uVar3 = FUN_2c472278(*piVar1,DAT_2c472988,param_1,param_2);
      FUN_2c644080(*puVar2);
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x210,DAT_2c472998,DAT_2c472994,DAT_2c4729a0,DAT_2c47298c);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x20b,DAT_2c472998,DAT_2c472994,DAT_2c47299c,DAT_2c47298c);
}

