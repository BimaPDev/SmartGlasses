/* FUN_2c48d110 @ 0x2c48d110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48d110(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  puStack_14 = (undefined1 *)&uStack_20;
  uStack_18 = CONCAT31(uStack_18._1_3_,param_1);
  uStack_10 = CONCAT22(uStack_10._2_2_,8);
  iStack_c = *_LAB_2c48d158;
  uStack_20 = param_2;
  uStack_1c = param_3;
  FUN_2c4f7174(uStack_18,&uStack_20,uStack_10);
  if (*_LAB_2c48d158 == iStack_c) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

