/* FUN_2c4f9138 @ 0x2c4f9138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f9138(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iStack_14 = *DAT_2c4f919c;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  iStack_1c = 0;
  uStack_18 = 0;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_2c4c2cd8(*_LAB_2c4f91a0,param_2,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(_LAB_2c4f91a8,_LAB_2c4f91a4,param_2);
    }
  }
  iStack_1c = iVar1;
  FUN_2c674668(iVar1,param_1,param_2);
  uStack_18 = CONCAT22(uStack_18._2_2_,(short)param_2);
  FUN_2c4f90f0(&uStack_2c);
  if (*DAT_2c4f919c == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

