/* FUN_2c5adf88 @ 0x2c5adf88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5adf88(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5adfd0,0x2d0,_LAB_2c5adfcc,_LAB_2c5adfc4,_LAB_2c5adfc8);
  }
  iVar1 = FUN_2c48e424(param_2,_LAB_2c5adfc0);
  if (iVar1 == 0) {
    return 0;
  }
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xc) == '\x10')) {
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return 0;
}

