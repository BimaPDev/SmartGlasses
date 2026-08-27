/* FUN_2c53be48 @ 0x2c53be48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53be48(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) &&
     (*(int *)(param_1 + 0xc) != 0)) {
    iVar1 = FUN_2c6041d4(*(int *)(param_1 + 8));
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5e8fac,0xe3,DAT_2c5e8fa8,DAT_2c5e8fa4,3,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c53be90,0x24d,_LAB_2c53be8c,_LAB_2c53be88);
}

