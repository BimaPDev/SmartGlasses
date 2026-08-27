/* FUN_2c63d77c @ 0x2c63d77c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c63d77c(int param_1)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1f1,_LAB_2c63d7c8,_LAB_2c63d7c4,_LAB_2c63d7c0);
  }
  iVar1 = FUN_2c63d2cc(*(undefined4 *)(_LAB_2c63d7cc + param_1 * 4),1,1,5);
  if ((iVar1 != 0) && (iVar1 = thunk_FUN_2c489a64(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1ec,DAT_2c63b924,DAT_2c63b920,DAT_2c63b91c,5,unaff_r4,unaff_lr);
  }
  return;
}

