/* FUN_2c5a3d60 @ 0x2c5a3d60 */

undefined4 FUN_2c5a3d60(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_2c5a2398();
  iVar1 = FUN_2c5a27bc();
  if (iVar1 != 0) {
    FUN_2c5a2398();
    iVar1 = FUN_2c5a2860();
    if (iVar1 != 0) {
      FUN_2c5a2398();
      uVar2 = FUN_2c5a240c();
      FUN_2c5a4d98(uVar2,0);
      return 0xffffffff;
    }
  }
  FUN_2c5a2398();
  iVar1 = FUN_2c5a2408();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  FUN_2c5a3bd8(param_1,0);
  FUN_2c5a2398();
  FUN_2c5a2408();
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5a6d28,0x8e,DAT_2c5a6d24,DAT_2c5a6d20);
}

