/* FUN_100634ec @ 0x100634ec */

void FUN_100634ec(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_1011c918(param_1,param_2,8);
  local_2c = *(undefined4 *)(extraout_r1 + 0x2c);
  local_28 = *(undefined4 *)(extraout_r1 + 0x30);
  local_24 = *(undefined4 *)(extraout_r1 + 0x34);
  local_34 = 0;
  local_30 = 0;
  local_20 = *(undefined4 *)(extraout_r1 + 0x38);
  local_38 = 0;
  local_1c = *(undefined4 *)(extraout_r1 + 0x3c);
  iVar2 = FUN_1011c726(&local_38,&local_38,&local_38,8);
  iVar3 = FUN_1011c726(param_1,param_1,&local_38,8);
  local_2c = *(undefined4 *)(param_2 + 0x30);
  local_28 = *(undefined4 *)(param_2 + 0x34);
  local_24 = *(undefined4 *)(param_2 + 0x38);
  local_20 = *(undefined4 *)(param_2 + 0x3c);
  local_1c = 0;
  iVar4 = FUN_1011c726(&local_38,&local_38,&local_38,8);
  uVar6 = FUN_1011c726(param_1,param_1,&local_38,8);
  local_38 = *(undefined4 *)(param_2 + 0x20);
  local_34 = *(undefined4 *)(param_2 + 0x24);
  local_30 = *(undefined4 *)(param_2 + 0x28);
  local_20 = *(undefined4 *)(param_2 + 0x38);
  local_28 = 0;
  local_24 = 0;
  local_1c = *(undefined4 *)(param_2 + 0x3c);
  local_2c = 0;
  uVar7 = FUN_1011c726(param_1,(int)((ulonglong)uVar6 >> 0x20),&local_38,8);
  local_38 = *(undefined4 *)(param_2 + 0x24);
  local_28 = *(undefined4 *)(param_2 + 0x38);
  local_34 = *(undefined4 *)(param_2 + 0x28);
  local_30 = *(undefined4 *)(param_2 + 0x2c);
  local_24 = *(undefined4 *)(param_2 + 0x3c);
  local_2c = *(undefined4 *)(param_2 + 0x34);
  local_1c = *(undefined4 *)(param_2 + 0x20);
  local_20 = local_2c;
  uVar8 = FUN_1011c726(param_1,(int)((ulonglong)uVar7 >> 0x20),&local_38,8);
  local_38 = *(undefined4 *)(param_2 + 0x2c);
  local_34 = *(undefined4 *)(param_2 + 0x30);
  local_30 = *(undefined4 *)(param_2 + 0x34);
  local_20 = *(undefined4 *)(param_2 + 0x20);
  local_28 = 0;
  local_24 = 0;
  local_1c = *(undefined4 *)(param_2 + 0x28);
  local_2c = 0;
  uVar9 = FUN_1011c984(param_1,(int)((ulonglong)uVar8 >> 0x20),&local_38,8);
  local_38 = *(undefined4 *)(param_2 + 0x30);
  local_34 = *(undefined4 *)(param_2 + 0x34);
  local_30 = *(undefined4 *)(param_2 + 0x38);
  local_2c = *(undefined4 *)(param_2 + 0x3c);
  local_28 = 0;
  local_24 = 0;
  local_20 = *(undefined4 *)(param_2 + 0x24);
  local_1c = *(undefined4 *)(param_2 + 0x2c);
  uVar10 = FUN_1011c984(param_1,(int)((ulonglong)uVar9 >> 0x20),&local_38,8);
  local_38 = *(undefined4 *)(param_2 + 0x34);
  local_34 = *(undefined4 *)(param_2 + 0x38);
  local_30 = *(undefined4 *)(param_2 + 0x3c);
  local_2c = *(undefined4 *)(param_2 + 0x20);
  local_28 = *(undefined4 *)(param_2 + 0x24);
  local_24 = *(undefined4 *)(param_2 + 0x28);
  local_20 = 0;
  local_1c = *(undefined4 *)(param_2 + 0x30);
  uVar11 = FUN_1011c984(param_1,(int)((ulonglong)uVar10 >> 0x20),&local_38,8);
  local_38 = *(undefined4 *)(param_2 + 0x38);
  local_34 = *(undefined4 *)(param_2 + 0x3c);
  local_30 = 0;
  local_2c = *(undefined4 *)(param_2 + 0x24);
  local_28 = *(undefined4 *)(param_2 + 0x28);
  local_24 = *(undefined4 *)(param_2 + 0x2c);
  local_20 = 0;
  local_1c = *(undefined4 *)(param_2 + 0x34);
  iVar5 = FUN_1011c984(param_1,(int)((ulonglong)uVar11 >> 0x20),&local_38,8);
  uVar1 = DAT_1006368c;
  iVar5 = ((((iVar2 + iVar3 + iVar4 + (int)uVar6 + (int)uVar7 + (int)uVar8) - (int)uVar9) -
           (int)uVar10) - (int)uVar11) - iVar5;
  if (iVar5 < 0) {
    do {
      iVar2 = FUN_1011c726(param_1,param_1);
      iVar5 = iVar5 + iVar2;
    } while (iVar5 < 0);
  }
  else {
    while ((iVar5 != 0 || (iVar2 = FUN_1011c930(uVar1,param_1,8), iVar2 != 1))) {
      iVar2 = FUN_1011c984(param_1,param_1,uVar1,8);
      iVar5 = iVar5 - iVar2;
    }
  }
  return;
}

