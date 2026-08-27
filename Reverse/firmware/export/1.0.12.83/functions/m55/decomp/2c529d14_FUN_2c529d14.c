/* FUN_2c529d14 @ 0x2c529d14 */

void FUN_2c529d14(undefined4 param_1)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = *DAT_2c529d6c;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_28 = 2;
  uStack_10 = FUN_2c66c4ec(param_1,0);
  FUN_2c674668((int)&uStack_28 + 1,param_1);
  FUN_2c52a4ac(&uStack_28);
  if (*DAT_2c529d6c == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

