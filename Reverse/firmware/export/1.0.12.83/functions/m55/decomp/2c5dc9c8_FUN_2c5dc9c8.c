/* FUN_2c5dc9c8 @ 0x2c5dc9c8 */

void FUN_2c5dc9c8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *extraout_r1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  uint local_1c;
  
  piVar1 = DAT_2c5dca70;
  local_1c = *DAT_2c5dca74;
  if (*DAT_2c5dca70 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x14);
  puVar3[2] = 0;
  local_24 = *param_2;
  uStack_20 = param_2[1];
  uVar4 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar4;
  *puVar3 = local_24;
  puVar3[1] = uStack_20;
  uVar4 = param_2[2];
  param_2[2] = puVar3[2];
  puVar3[2] = uVar4;
  uVar4 = param_2[3];
  param_2[3] = puVar3[3];
  puVar3[3] = uVar4;
  puVar3[4] = param_3;
  local_28 = FUN_2c62bdd8(DAT_2c5dca78,param_4);
  FUN_2c62be70(local_28,1);
  iVar2 = DAT_2c5dca7c;
  puVar3 = *(undefined4 **)(DAT_2c5dca7c + 4);
  if (puVar3 == *(undefined4 **)(DAT_2c5dca7c + 8)) {
    FUN_2c5dc8fc(DAT_2c5dca7c,puVar3,&local_28);
    puVar3 = extraout_r1;
  }
  else {
    *puVar3 = local_28;
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 4;
  }
  if ((*DAT_2c5dca74 ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(local_28,puVar3,*DAT_2c5dca74 ^ local_1c,0);
}

