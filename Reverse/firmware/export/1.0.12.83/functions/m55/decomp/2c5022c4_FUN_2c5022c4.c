/* FUN_2c5022c4 @ 0x2c5022c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5022c4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c606b94(*(undefined4 *)(param_1 + 4),1);
  if ((iVar1 != 0) && (iVar1 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x18),1), iVar1 != 0)) {
    FUN_2c50216c(param_1);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x16c) + 0xa0) + 0xd) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c500078,0x1af,_LAB_2c500074,_LAB_2c500070,_LAB_2c500074);
  }
  return;
}

