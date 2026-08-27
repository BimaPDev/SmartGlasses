/* FUN_2c4dff04 @ 0x2c4dff04 */

void FUN_2c4dff04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined2 uVar4;
  uint uVar5;
  
  uVar3 = *DAT_2c4dff5c;
  uVar1 = FUN_2c4dfd60(param_1,0,param_3,param_4,param_1,param_2,param_3);
  uVar2 = FUN_2c4dfd60(param_1,extraout_r1,param_5,param_6);
  uVar4 = CONCAT11(uVar2,uVar1);
  uVar1 = FUN_2c4dfd60(param_1,extraout_r1_00,param_7,param_8);
  uVar5 = (uint)CONCAT12(uVar1,uVar4);
  uVar1 = FUN_2c4dfd60(param_1,extraout_r1_01,param_9,param_10);
  if ((*DAT_2c4dff5c ^ uVar3) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(CONCAT13(uVar1,(int3)uVar5),extraout_r1_02,*DAT_2c4dff5c ^ uVar3,0);
  }
  return;
}

