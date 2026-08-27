/* FUN_2c5ef4e0 @ 0x2c5ef4e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ef4e0(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  short sStack_14;
  short sStack_12;
  undefined4 uStack_10;
  int iStack_c;
  
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  if (param_1[7] != 0) {
    uStack_10 = _LAB_2c5ef53c;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ef544,0x1be,_LAB_2c5ef540);
  }
  if (*param_1 != 0) {
    uStack_10 = _LAB_2c5ef548;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5ef544,0x1c2,_LAB_2c5ef540);
  }
  FUN_2c62a470();
  iVar1 = FUN_2c5fee44();
  iStack_c = *DAT_2c607e4c;
  sStack_14 = FUN_2c600c2c();
  sStack_12 = *(short *)(iVar1 + 0x16) - sStack_14;
  uStack_10 = CONCAT22(*(short *)(iVar1 + 0x1a) + sStack_14,sStack_14 + *(short *)(iVar1 + 0x18));
  sStack_14 = *(short *)(iVar1 + 0x14) - sStack_14;
  FUN_2c6078f0(iVar1,&sStack_14);
  if (*DAT_2c607e4c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

