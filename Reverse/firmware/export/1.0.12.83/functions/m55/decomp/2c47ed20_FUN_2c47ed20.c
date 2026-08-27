/* FUN_2c47ed20 @ 0x2c47ed20 */

undefined4 * FUN_2c47ed20(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  int iStack_20;
  int local_1c;
  int local_14;
  
  local_14 = *DAT_2c47edc8;
  local_38 = DAT_2c47edc4;
  local_88[0] = DAT_2c47edcc;
  local_34 = DAT_2c47edd0;
  uStack_30 = DAT_2c47edd4;
  local_2c = DAT_2c47edd8;
  uStack_28 = DAT_2c47eddc;
  local_24 = DAT_2c47ede0;
  iStack_20 = DAT_2c47ede4;
  local_1c = DAT_2c47ede4 + 0x3c5cf36e;
  local_80 = 0;
  uStack_7c = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_2c47eb80(local_88,param_1,param_2);
  }
  puVar2 = (undefined4 *)FUN_2c47ec24(local_88);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *param_3 = *puVar2;
  param_3[1] = uVar3;
  param_3[2] = uVar4;
  param_3[3] = uVar5;
  uVar4 = puVar2[6];
  uVar5 = puVar2[4];
  uVar3 = puVar2[5];
  param_3[7] = puVar2[7];
  piVar1 = DAT_2c47edc8;
  param_3[4] = uVar5;
  param_3[5] = uVar3;
  param_3[6] = uVar4;
  if (*piVar1 != local_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_3;
}

