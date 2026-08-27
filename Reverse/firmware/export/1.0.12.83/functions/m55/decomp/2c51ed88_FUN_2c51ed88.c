/* FUN_2c51ed88 @ 0x2c51ed88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c51ed88(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c602618(param_2);
  if ((iVar1 != 0xe3) && (iVar1 != 0xd4)) {
    return 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_2c62be40();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c51edd0,200,_LAB_2c51edcc,_LAB_2c51edc8);
}

