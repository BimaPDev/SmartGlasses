/* FUN_10048084 @ 0x10048084 */

void FUN_10048084(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_2c;
  undefined4 *local_28;
  uint3 local_24;
  undefined1 uStack_21;
  undefined4 local_20;
  int local_1c;
  
  local_1c = *(int *)PTR_DAT_100481f8;
  uVar8 = ((int)PTR_DAT_100481fc - (int)PTR_DAT_10048200) * 0x20 & 0xff00;
  local_2c = 0;
  local_28 = (undefined4 *)0x0;
  local_20 = 0;
  _local_24 = 0;
  uVar6 = param_2;
  uVar9 = param_3;
  FUN_100a5b78(uVar8 | 0x10e0033,PTR_s_ble_translate_state_10048204,DAT_10048208,param_1,param_2,
               param_3);
  iVar1 = DAT_1004820c;
  if (param_1 == 1) {
    if (*(int *)(DAT_1004820c + 0xe4) == 0) {
      uVar3 = thunk_FUN_1009f30c(0x1c30,DAT_10048210);
      *(undefined4 *)(iVar1 + 0xe4) = uVar3;
    }
    iVar4 = *(int *)(iVar1 + 0xe4);
    param_1 = iVar1;
    if (iVar4 != 0) goto LAB_10048104;
    FUN_100a5b78(DAT_10048214 | uVar8,PTR_s_ble_translate_state_10048204,DAT_10048218,0x1c30,uVar6,
                 uVar9);
  }
  else {
    if (param_1 == 0) {
      if (*(int *)(DAT_1004820c + 0xe4) != 0) {
        FUN_1012d1f4();
        *(undefined4 *)(iVar1 + 0xe4) = 0;
      }
      FUN_1001b8c8(0);
      local_20 = local_20 & 0xffffff00;
      _local_24 = CONCAT22(stack0xffffffde,1);
      uVar5 = uVar8 | 0x12e0000;
      uVar6 = DAT_10048224;
      goto LAB_10048148;
    }
    if (param_1 == 2) {
      FUN_1001b8c8(1);
      FUN_100a5b78(DAT_10048228 | uVar8,PTR_s_ble_translate_state_10048204,DAT_1004822c);
      uVar5 = local_20;
      local_20._0_2_ = CONCAT11((char)param_2,2);
      local_20._3_1_ = SUB41(uVar5,3);
      local_20._0_3_ = CONCAT12((char)param_3,(undefined2)local_20);
      uVar2 = (**(code **)(DAT_1004821c + 0x28))();
      local_20 = CONCAT13(uVar2,(undefined3)local_20);
      _local_24 = CONCAT22(stack0xffffffde,4);
      goto LAB_10048150;
    }
    if (param_1 == 3) {
      FUN_1001b8c8(0);
      uVar5 = DAT_10048230 | uVar8;
      uVar6 = DAT_10048234;
      goto LAB_1004814c;
    }
    FUN_100a5b78(uVar8 | 0x1400031,PTR_s_ble_translate_state_10048204,DAT_10048238);
  }
  while( true ) {
    if (*(int *)PTR_DAT_100481f8 == local_1c) break;
    iVar4 = FUN_1013cdc0();
LAB_10048104:
    FUN_1011ea48(iVar4,0,0x1c30);
    puVar7 = *(undefined1 **)(param_1 + 0xe4);
    *(undefined1 **)(puVar7 + 8) = puVar7 + 0xc;
    *puVar7 = 2;
    FUN_1001b8c8(1);
    uVar5 = local_20;
    local_20._0_2_ = CONCAT11((char)param_2,1);
    local_20._3_1_ = SUB41(uVar5,3);
    local_20._0_3_ = CONCAT12((char)param_3,(undefined2)local_20);
    uVar2 = (**(code **)(DAT_1004821c + 0x28))();
    local_20 = CONCAT13(uVar2,(undefined3)local_20);
    _local_24 = CONCAT22(stack0xffffffde,4);
    uVar5 = uVar8 | 0x1220000;
    uVar6 = DAT_10048220;
LAB_10048148:
    uVar5 = uVar5 | 0x31;
LAB_1004814c:
    FUN_100a5b78(uVar5,PTR_s_ble_translate_state_10048204,uVar6);
LAB_10048150:
    local_2c = CONCAT22(local_2c._2_2_,0x605);
    local_28 = &local_20;
    local_24 = (uint3)(ushort)local_24;
    FUN_100506fc(&local_2c);
  }
  return;
}

