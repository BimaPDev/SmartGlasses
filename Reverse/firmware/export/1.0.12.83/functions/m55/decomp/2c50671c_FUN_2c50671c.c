/* FUN_2c50671c @ 0x2c50671c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50671c(int param_1)

{
  int iVar1;
  
  FUN_2c504998();
  iVar1 = func_0x2c504b58();
  if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5067e0,300,_LAB_2c5067dc,_LAB_2c5067d8);
  }
  FUN_2c504998();
  iVar1 = func_0x2c504b58();
  if (iVar1 == 2) {
    FUN_2c504998();
    iVar1 = FUN_2c504acc();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5067e0,0x138,_LAB_2c5067dc,_DAT_2c5067e8);
    }
    iVar1 = FUN_2c606b94(*(undefined4 *)(param_1 + 0x24),1);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_2c606abc(*(int *)(param_1 + 0x24),1);
      }
      if (*(int *)(param_1 + 0x20) != 0) {
        lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x20),1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5067e0,0x134,_LAB_2c5067dc,_DAT_2c5067e4);
    }
  }
  return;
}

