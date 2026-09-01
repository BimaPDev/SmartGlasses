/* FUN_10122164 @ 0x10122164 */

int FUN_10122164(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  short sVar6;
  int iVar7;
  uint local_54;
  uint uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  short local_2c;
  undefined *local_28;
  int iStack_24;
  
  pcVar5 = *(code **)(*(int *)(param_1 + 0x10) + 0x10);
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14));
  }
  iVar7 = *(int *)(param_1 + 0x10);
  FUN_1011ea48(&local_34,0,0x14);
  local_4c = 0;
  local_48 = 0;
  local_44 = (uint)local_44._2_2_ << 0x10;
  local_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  iVar2 = thunk_FUN_10115958();
  puVar1 = PTR_FUN_10122164_1_10082ca0;
  while( true ) {
    FUN_10082a44(param_1,&local_4c);
    FUN_101221f0(&local_4c,&local_54);
    uVar4 = (local_44 & 0xffff) + (uint)*(ushort *)(iVar7 + 0xc);
    sVar6 = (short)uVar4;
    if (999 < uVar4) {
      sVar6 = sVar6 + -1000;
      local_54 = local_54 + 1;
    }
    local_54 = *(byte *)(iVar7 + 0xe) + local_54;
    FUN_10083220(local_54,&local_4c);
    local_44 = CONCAT22(local_44._2_2_,sVar6);
    local_34 = local_4c;
    uStack_30 = local_48;
    local_28 = puVar1;
    local_2c = sVar6;
    iStack_24 = param_1;
    iVar3 = FUN_10082a88(param_1,&local_34,1);
    if (iVar3 != 0) {
      return iVar3;
    }
    FUN_10082a44(param_1,&local_40);
    FUN_101221f0(&local_40,&uStack_50);
    uVar4 = uStack_50;
    if ((ushort)local_44 < local_38) {
      uVar4 = uStack_50 + 1;
    }
    if (uVar4 == local_54) break;
    if (uStack_50 < local_54) {
      return 0;
    }
    iVar3 = thunk_FUN_10115958();
    if ((uint)(iVar3 - iVar2) < 1000) {
      FUN_100a5b78(((int)PTR_DAT_10082c94 - (int)PTR_DAT_10082c90) * 0x20 & 0xff00U | 0x2540011,
                   PTR_s___rtc_acts_set_alarm_period_10082c9c,
                   PTR_s_set_period_alarm_timeout_10082c98);
      return -0x74;
    }
  }
  return 0;
}

