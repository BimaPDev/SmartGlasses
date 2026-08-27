/* FUN_2c5c7bb0 @ 0x2c5c7bb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c7bb0(int param_1)

{
  int iVar1;
  
  FUN_2c5c55d8();
  iVar1 = FUN_2c5c59bc();
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  iVar1 = FUN_2c5c5cf8();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5c7c34,0x71,_LAB_2c5c7c38,_LAB_2c5c7c30);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5c7c34,0x6c,_LAB_2c5c7c38,_LAB_2c5c7c3c);
}

