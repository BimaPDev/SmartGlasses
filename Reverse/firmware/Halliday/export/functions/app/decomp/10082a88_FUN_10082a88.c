/* FUN_10082a88 @ 0x10082a88 */

undefined4 FUN_10082a88(int param_1,byte *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  
  uVar2 = DAT_10082b78;
  piVar6 = *(int **)(param_1 + 0x10);
  puVar5 = (uint *)*piVar6;
  if ((int)(*puVar5 << 0x1f) < 0) {
    *puVar5 = *puVar5 | 1;
    FUN_100a5b78(uVar2 | ((int)PTR_DAT_10082b80 - (int)PTR_DAT_10082b7c) * 0x20 & 0xff00U,
                 PTR_s_rtc_acts_get_pending_int_10082b84,PTR_s_Clear_old_RTC_alarm_pending_10082b88)
    ;
  }
  if (param_3 == 0) {
    *(uint *)*piVar6 = *(uint *)*piVar6 & 0xfffffffd;
    piVar6[1] = 0;
    piVar6[2] = 0;
    *(undefined1 *)(piVar6 + 6) = 0;
    uVar3 = 0;
  }
  else if (param_2 == (byte *)0x0) {
    FUN_100a5b78(((int)PTR_DAT_10082b80 - (int)PTR_DAT_10082b7c) * 0x20 & 0xff00U | 0x1ec0011,
                 PTR_s_rtc_acts_set_alarm_10082b90,PTR_s_no_alarm_configuration_10082b8c);
    uVar3 = 0xffffffea;
  }
  else {
    iVar4 = FUN_101221a8(param_2);
    if (iVar4 == 0) {
      piVar6[1] = *(int *)(param_2 + 0xc);
      puVar5 = (uint *)*piVar6;
      piVar6[2] = *(int *)(param_2 + 0x10);
      *(undefined1 *)(piVar6 + 6) = 1;
      uVar1 = *(ushort *)(param_2 + 6);
      *puVar5 = *puVar5 & 0xfffffffd;
      puVar5[4] = (param_2[4] + 1) * 0x100 | ((uint)uVar1 % 100) * 0x10000 | (uint)param_2[3];
      puVar5[3] = (uint)param_2[1] << 8 | (uint)param_2[2] << 0x10 | (uint)*param_2;
      puVar5[2] = *(ushort *)(param_2 + 8) / 10;
      *puVar5 = *puVar5 | 2;
      uVar3 = 0;
    }
    else {
      FUN_100a5b78(DAT_10082b94 | ((int)PTR_DAT_10082b80 - (int)PTR_DAT_10082b7c) * 0x20 & 0xff00U,
                   PTR_s_rtc_acts_set_alarm_10082b90,DAT_10082b98);
      FUN_10083358(param_2);
      uVar3 = 0xfffffff8;
    }
  }
  return uVar3;
}

