/* FUN_1007cd14 @ 0x1007cd14 */

void FUN_1007cd14(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_r2;
  undefined1 uVar6;
  uint uVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_lr;
  undefined8 uVar8;
  int iVar9;
  
  iVar3 = DAT_1007cdec;
  if (*(char *)(DAT_1007cdec + 0x1e0) != '\0') {
    iVar9 = param_1;
    if (*(char *)(DAT_1007cdec + 0x1e1) == '\0') {
      uVar8 = FUN_1011fee8();
      iVar2 = DAT_1007ccf8;
      uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if ((uint)((int)uVar8 - *(int *)(iVar3 + 0x1dc)) <= DAT_1007cdf0) {
        if (*(char *)(iVar3 + 0x13f) == '\x01') {
          return;
        }
        if ((*(char *)(DAT_1007ccf8 + 0x13f) != '\x01') ||
           (*(char *)(DAT_1007ccf8 + 0x141) == '\x05')) {
          uVar7 = ((uint)*(ushort *)(DAT_1007ccf8 + 0x38) * 1000) / 200;
          if (*(ushort *)(DAT_1007ccf8 + 0x158) < uVar7) {
            uVar5 = *(ushort *)(DAT_1007ccf8 + 0x158) + 1;
            *(short *)(DAT_1007ccf8 + 0x158) = (short)uVar5;
            if (uVar7 == (uVar5 & 0xffff)) {
              FUN_100a5b78((DAT_1007cd00 - DAT_1007ccfc) * 0x20 & 0xff00U | 0xd30031,
                           PTR_s_bat_charge_state_check_volt_1007cd08,
                           PTR_s_Check_bat_real_voltage__1007cd04,DAT_1007ccfc,param_1,uVar4,
                           extraout_r2,unaff_r4,unaff_r5,unaff_lr);
              FUN_1007cae0(3);
              return;
            }
          }
          else if ((-1 < param_1) &&
                  (*(undefined2 *)(DAT_1007ccf8 + 0x158) = 0, *(char *)(iVar2 + 0x141) == '\x05')) {
            if ((int)(uint)*(ushort *)(iVar2 + 0x1e) < param_1) {
              if (*(char *)(iVar2 + 0x26) == '\0') {
                uVar1 = *(ushort *)(iVar2 + 0xc);
              }
              else {
                uVar1 = *(ushort *)(iVar2 + 0x2a);
              }
              if ((int)(uint)uVar1 <= param_1) {
                return;
              }
              FUN_100a5b78((DAT_1007cd00 - DAT_1007ccfc) * 0x20 & 0xff00U | 0xfe0032,
                           PTR_s_bat_charge_state_check_volt_1007cd08,
                           PTR_s_re_charge_start__real___dmv__thr_1007cd10,param_1,(uint)uVar1,uVar4
                           ,extraout_r2,unaff_r4,unaff_r5,unaff_lr);
              uVar6 = 3;
            }
            else {
              FUN_100a5b78((DAT_1007cd00 - DAT_1007ccfc) * 0x20 & 0xff00U | 0xe20031,
                           PTR_s_bat_charge_state_check_volt_1007cd08,PTR_s_battery_error_1007cd0c,
                           DAT_1007ccfc,param_1,uVar4,extraout_r2,unaff_r4,unaff_r5,unaff_lr);
              *(byte *)(iVar2 + 0x13d) = *(byte *)(iVar2 + 0x13d) | 2;
              uVar6 = 1;
            }
            *(undefined1 *)(iVar2 + 0x141) = uVar6;
          }
        }
        return;
      }
    }
    iVar2 = DAT_1007cdf4;
    *(undefined2 *)(iVar3 + 0x1e0) = 0;
    FUN_100a5b78((iVar2 - (int)PTR_DAT_1007cdf8) * 0x20 & 0xff00U | 0x5e0031,
                 PTR_s_bat_charge_state_init_1007ce00,PTR_s_Restart_from_err_stop___1007cdfc,
                 PTR_DAT_1007cdf8,iVar9,param_2);
    FUN_1007cae0(1);
    *(undefined1 *)(iVar3 + 0x1e2) = 1;
  }
  if (param_1 < 0) {
    return;
  }
  if ((*(char *)(iVar3 + 0x1c) == '\x01') && (param_1 <= (int)(uint)*(ushort *)(iVar3 + 0x1e))) {
    FUN_100a5b78((DAT_1007cdf4 - (int)PTR_DAT_1007cdf8) * 0x20 & 0xff00U | 0x6c0032,
                 PTR_s_bat_charge_state_init_1007ce00,
                 PTR_s_low_power_cur_vol__d_conf_vol__d_1007ce04,param_1,
                 (uint)*(ushort *)(iVar3 + 0x1e),param_2);
    *(undefined1 *)(iVar3 + 0x141) = 1;
    return;
  }
  if ((param_1 < (int)(uint)*(ushort *)(iVar3 + 0xc)) ||
     (FUN_100a5b78((DAT_1007cdf4 - (int)PTR_DAT_1007cdf8) * 0x20 & 0xff00U | 0x710032,
                   PTR_s_bat_charge_state_init_1007ce00,
                   PTR_s_full_power_cur_vol__d_conf_vol___1007ce08,param_1,
                   (uint)*(ushort *)(iVar3 + 0xc),param_2),
     (int)((uint)*(ushort *)(iVar3 + 0x62) << 0x1b) < 0)) {
    uVar6 = 3;
  }
  else {
    uVar6 = 5;
  }
  *(undefined1 *)(iVar3 + 0x141) = uVar6;
  return;
}

