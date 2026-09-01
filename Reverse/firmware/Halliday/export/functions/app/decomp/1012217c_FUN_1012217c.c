/* FUN_1012217c @ 0x1012217c */

int FUN_1012217c(int param_1,undefined4 *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ushort uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short sStack_2c;
  undefined *puStack_28;
  int iStack_24;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (param_3 == 0) {
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    iVar5 = FUN_10082a88(param_1,0);
    return iVar5;
  }
  *(undefined4 *)(iVar5 + 0xc) = *param_2;
  *(undefined4 *)(iVar5 + 0x10) = param_2[1];
  *(undefined4 *)(iVar5 + 0x14) = param_2[2];
  iVar6 = *(int *)(param_1 + 0x10);
  FUN_1011ea48(&uStack_34,0,0x14);
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = (uint)uStack_44._2_2_ << 0x10;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  iVar5 = thunk_FUN_10115958();
  puVar1 = PTR_FUN_10122164_1_10082ca0;
  while( true ) {
    FUN_10082a44(param_1,&uStack_4c);
    FUN_101221f0(&uStack_4c,&uStack_54);
    uVar3 = (uStack_44 & 0xffff) + (uint)*(ushort *)(iVar6 + 0xc);
    sVar4 = (short)uVar3;
    if (999 < uVar3) {
      sVar4 = sVar4 + -1000;
      uStack_54 = uStack_54 + 1;
    }
    uStack_54 = *(byte *)(iVar6 + 0xe) + uStack_54;
    FUN_10083220(uStack_54,&uStack_4c);
    uStack_44 = CONCAT22(uStack_44._2_2_,sVar4);
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puStack_28 = puVar1;
    sStack_2c = sVar4;
    iStack_24 = param_1;
    iVar2 = FUN_10082a88(param_1,&uStack_34,1);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10082a44(param_1,&uStack_40);
    FUN_101221f0(&uStack_40,&uStack_50);
    uVar3 = uStack_50;
    if ((ushort)uStack_44 < uStack_38) {
      uVar3 = uStack_50 + 1;
    }
    if (uVar3 == uStack_54) break;
    if (uStack_50 < uStack_54) {
      return 0;
    }
    iVar2 = thunk_FUN_10115958();
    if ((uint)(iVar2 - iVar5) < 1000) {
      FUN_100a5b78(((int)PTR_DAT_10082c94 - (int)PTR_DAT_10082c90) * 0x20 & 0xff00U | 0x2540011,
                   PTR_s___rtc_acts_set_alarm_period_10082c9c,
                   PTR_s_set_period_alarm_timeout_10082c98);
      return -0x74;
    }
  }
  return 0;
}

