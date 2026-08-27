/* FUN_2c58d2b0 @ 0x2c58d2b0 */

int FUN_2c58d2b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_2c66c4ec();
  iVar2 = lv_mem_alloc(iVar1 + 1);
  if (iVar2 != 0) {
    FUN_2c62c3b0(iVar2,0);
    FUN_2c62c0d8(iVar2,param_1,iVar1 + 1);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c58d2f8,0x5b,DAT_2c58d2f4,DAT_2c58d2f0);
}

