/* FUN_2c57ec48 @ 0x2c57ec48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57ec48(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  bVar1 = *(char *)(iVar2 + 0x36) - 1;
  *(byte *)(iVar2 + 0x36) = bVar1;
  if ((bVar1 < 0xb) && (FUN_2c57eac0(iVar2), *(char *)(iVar2 + 0x36) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c57ec28,0xa1,_LAB_2c57ec20,_LAB_2c57ec1c,_LAB_2c57ec20);
  }
  return;
}

