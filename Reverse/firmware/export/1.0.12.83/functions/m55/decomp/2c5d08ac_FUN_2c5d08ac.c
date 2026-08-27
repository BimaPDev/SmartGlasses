/* FUN_2c5d08ac @ 0x2c5d08ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d08ac(int param_1)

{
  uint uVar1;
  
  uVar1 = (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) & 0x3ffU) >> 2;
  if (uVar1 < 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5d0a28,0x122,_DAT_2c5d0a24,_DAT_2c5d0a20,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5d0a28,0x11d,_DAT_2c5d0a24,_DAT_2c5d0a30);
}

