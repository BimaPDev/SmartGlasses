/* FUN_2c530e58 @ 0x2c530e58 */

undefined4 * FUN_2c530e58(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *extraout_r1;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_20;
  int local_1c;
  
  puVar9 = (undefined4 *)param_2[1];
  local_1c = *DAT_2c530f14;
  iVar6 = 0;
  piVar4 = param_2;
  iVar5 = param_3;
  puVar2 = (undefined4 *)*param_2;
  if ((undefined4 *)*param_2 != puVar9) {
    do {
      puVar7 = puVar2 + 1;
      local_20 = *puVar2;
      FUN_2c5315e0(&local_20);
      puVar2 = puVar7;
    } while (puVar9 != puVar7);
    iVar6 = *param_2;
    iVar5 = param_2[1];
    piVar4 = extraout_r1;
    if (iVar5 != iVar6) {
      param_2[1] = iVar6;
    }
  }
  uVar1 = FUN_2c48e3b8(param_3,piVar4,iVar5,iVar6);
  FUN_2c5321c4(uVar1,param_2);
  FUN_2c48dea0(uVar1);
  iVar6 = *param_2;
  iVar5 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  iVar5 = iVar5 - iVar6;
  param_1[2] = 0;
  piVar4 = DAT_2c530f18;
  if (iVar5 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (*DAT_2c530f18 == 0) {
      FUN_2c4723c4();
      *piVar4 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,iVar5);
  }
  *param_1 = puVar2;
  param_1[1] = puVar2;
  param_1[2] = iVar5 + (int)puVar2;
  iVar5 = *param_2;
  if (iVar5 != param_2[1]) {
    puVar9 = (undefined4 *)(iVar5 + -4);
    puVar3 = (undefined4 *)((param_2[1] - iVar5) + (int)puVar2);
    puVar7 = puVar2;
    do {
      puVar9 = puVar9 + 1;
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar2 = puVar3;
      puVar7 = puVar8;
    } while (puVar8 != puVar3);
  }
  piVar4 = DAT_2c530f14;
  param_1[1] = puVar2;
  if (*piVar4 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}

