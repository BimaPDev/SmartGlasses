/* FUN_2c59dfe4 @ 0x2c59dfe4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59dfe4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c59d0b8();
  *(int *)(iVar1 + 0xc) = param_1;
  if ((*(char *)(iVar1 + 4) != '\0') && (param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c59e068,0x44c,_LAB_2c59e064,_LAB_2c59e060);
  }
  return;
}

