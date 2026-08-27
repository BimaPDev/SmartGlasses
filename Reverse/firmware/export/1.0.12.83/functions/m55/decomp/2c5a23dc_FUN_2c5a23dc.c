/* FUN_2c5a23dc @ 0x2c5a23dc */

undefined4 FUN_2c5a23dc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c5a2398();
  uVar2 = *(undefined4 *)(iVar1 + 0x5c);
  FUN_2c5a2398();
  iVar1 = FUN_2c5a27bc();
  if (iVar1 != 0) {
    FUN_2c5a2398();
    iVar1 = FUN_2c5a2860();
    if (iVar1 != 0) {
      FUN_2c5a2398();
      uVar3 = FUN_2c5a240c();
      FUN_2c5a4d98(uVar3,2);
      FUN_2c5a3bd8(uVar2,1);
      return 0;
    }
  }
  FUN_2c5a2398();
  iVar1 = FUN_2c5a2408();
  if (iVar1 != 0) {
    FUN_2c5a3bd8(uVar2,1);
    FUN_2c5a2398();
    FUN_2c5a2408();
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5a6ca0,0x77,DAT_2c5a6c9c,DAT_2c5a6c98);
  }
  return 0xffffffff;
}

