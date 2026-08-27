/* FUN_14065d68 @ 0x14065d68 */

void FUN_14065d68(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  puVar2 = &local_24;
  local_14 = *DAT_14065dd0;
  local_24 = *DAT_14065dcc;
  uStack_20 = DAT_14065dcc[1];
  uStack_1c = DAT_14065dcc[2];
  uStack_18 = DAT_14065dcc[3];
  if (param_2 == 0) {
    uVar3 = 2;
    puVar2 = &uStack_18;
  }
  else if (param_2 == 1) {
    uVar3 = 4;
    puVar2 = &uStack_18;
  }
  else {
    uVar3 = 0x10;
  }
  FUN_140e5278(puVar2,param_1,uVar3);
  param_3[3] = uStack_18;
  piVar1 = DAT_14065dd0;
  *param_3 = local_24;
  param_3[1] = uStack_20;
  param_3[2] = uStack_1c;
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

