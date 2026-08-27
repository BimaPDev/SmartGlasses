/* FUN_2c59d7ac @ 0x2c59d7ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c59d7ac(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = _LAB_2c59d818;
  iVar2 = FUN_2c66c5e0(param_2,_LAB_2c59d81c);
  if (iVar2 != 0 && uVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c59d82c,0x4dc,_LAB_2c59d828,_LAB_2c59d824);
  }
  iVar2 = FUN_2c66c5e0(param_2,_LAB_2c59d820);
  if ((0x1f0000 < param_3) && (iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c59d82c,0x4df,_LAB_2c59d828,_LAB_2c59d830);
  }
  return 1;
}

