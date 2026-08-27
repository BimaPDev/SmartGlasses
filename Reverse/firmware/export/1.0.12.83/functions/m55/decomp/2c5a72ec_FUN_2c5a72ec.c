/* FUN_2c5a72ec @ 0x2c5a72ec */

undefined4 FUN_2c5a72ec(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_2c5e2e80();
  iVar2 = FUN_2c629d00(uVar1,param_2);
  if (0 < iVar2) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x90,DAT_2c5a7334,DAT_2c5a7330,DAT_2c5a732c,DAT_2c5a7328,param_1,iVar2);
}

