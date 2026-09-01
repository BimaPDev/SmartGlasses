/* FUN_10082840 @ 0x10082840 */

undefined4 FUN_10082840(undefined4 *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *local_1c;
  
  puVar4 = (undefined4 *)*param_1;
  local_1c = param_2;
  if ((int)((uint)*(byte *)((int)param_1 + 0x19) << 0x1e) < 0) {
    *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) & 0xfd;
    puVar6 = param_1;
    iVar1 = FUN_10061948();
    uVar5 = (iVar1 - param_1[7]) + 16000;
    if ((uint)(iVar1 - param_1[7]) < 0xffffc180) {
      uVar5 = uVar5 / 32000;
      param_1 = puVar6;
    }
    else {
      uVar5 = FUN_10004238(uVar5,1,32000,0);
      param_1 = puVar6;
    }
    if (uVar5 < 0xb) {
      iVar1 = FUN_1013c70e();
      if (iVar1 == 0) {
        FUN_101153fc(0xb - uVar5,0);
      }
      else {
        FUN_1011598c((0xb - uVar5) * 1000);
      }
    }
  }
  uVar5 = puVar4[7];
  iVar1 = puVar4[6];
  *(short *)(param_2 + 8) = ((short)(puVar4[5] & 0x7f) + (short)((puVar4[5] & 0x7f) << 2)) * 2;
  *param_2 = (byte)iVar1 & 0x3f;
  param_2[1] = (byte)((uint)(iVar1 << 0x12) >> 0x1a);
  param_2[3] = (byte)uVar5 & 0x1f;
  param_2[5] = 0;
  iVar3 = ((uVar5 & 0xfff) >> 8) - 1;
  iVar2 = ((uVar5 & 0x7fffff) >> 0x10) + 100;
  param_2[2] = (byte)((uint)(iVar1 << 0xb) >> 0x1b);
  param_2[4] = (byte)iVar3;
  *(short *)(param_2 + 6) = (short)iVar2;
  FUN_101221f0(param_2,&local_1c,iVar2,iVar3,param_1);
  param_2[5] = (byte)(((uint)local_1c / DAT_10082a04 + 4) % 7);
  iVar1 = FUN_101221a8(param_2);
  if (iVar1 < 0) {
    uVar5 = ((int)PTR_DAT_10082a0c - (int)PTR_DAT_10082a08) * 0x20 & 0xff00;
    FUN_100a5b78(uVar5 | 0x1460011,PTR_s_rtc_acts_get_datetime_10082a14,
                 PTR_s_rtc__retrieved_date_time_is_not_v_10082a10);
    FUN_100a5b78(uVar5 | 0x800031,PTR_s_rtc_acts_dump_regs_10082a1c,
                 PTR_s____RTC_Controller_register____10082a18);
    FUN_100a5b78(uVar5 | 0x810031,PTR_s_rtc_acts_dump_regs_10082a1c,PTR_s_BASE__0x_x_10082a20,puVar4
                );
    FUN_100a5b78(uVar5 | 0x820031,PTR_s_rtc_acts_dump_regs_10082a1c,PTR_s_CTL__0x_x_10082a24,*puVar4
                );
    FUN_100a5b78(uVar5 | 0x830031,PTR_s_rtc_acts_dump_regs_10082a1c,PTR_s_REGUPDATE__0x_x_10082a28,
                 puVar4[1]);
    FUN_100a5b78(uVar5 | 0x840031,PTR_s_rtc_acts_dump_regs_10082a1c,PTR_s_MSALM__0x_x_10082a2c,
                 puVar4[2]);
    FUN_100a5b78(uVar5 | 0x850031,PTR_s_rtc_acts_dump_regs_10082a1c,PTR_s_DHMSALM__0x_x_10082a30,
                 puVar4[3]);
    FUN_100a5b78(uVar5 | 0x860031,PTR_s_rtc_acts_dump_regs_10082a1c,PTR_s_YMDALM__0x_x_10082a34,
                 puVar4[4]);
    FUN_100a5b78(uVar5 | 0x870031,PTR_s_rtc_acts_dump_regs_10082a1c,PTR_s_MS__0x_x_10082a38,
                 puVar4[5]);
    FUN_100a5b78(uVar5 | 0x880031,PTR_s_rtc_acts_dump_regs_10082a1c,PTR_s_DHMS__0x_x_10082a3c,
                 puVar4[6]);
    FUN_100a5b78(uVar5 | 0x890031,PTR_s_rtc_acts_dump_regs_10082a1c,PTR_s_YMD__0x_x_10082a40,
                 puVar4[7]);
  }
  return 0;
}

