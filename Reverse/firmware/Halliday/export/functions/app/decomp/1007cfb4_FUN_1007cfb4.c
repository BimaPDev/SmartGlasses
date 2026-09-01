/* FUN_1007cfb4 @ 0x1007cfb4 */

void FUN_1007cfb4(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  
  iVar3 = DAT_1007cff0;
  iVar2 = DAT_1007ccf8;
  if (*(char *)(DAT_1007cff0 + 0x13f) == '\x01') {
    if ((int)((uint)*(byte *)(DAT_1007cff0 + 0x13e) << 0x1f) < 0) {
      uVar5 = *(undefined1 *)(DAT_1007cff0 + 0x143);
    }
    else {
      uVar5 = *(undefined1 *)(DAT_1007cff0 + 9);
    }
    FUN_1007cb20(uVar5);
    *(undefined1 *)(iVar3 + 0x141) = 4;
    *(byte *)(iVar3 + 0x13c) = *(byte *)(iVar3 + 0x13c) & 0xef;
    return;
  }
  if ((*(char *)(DAT_1007ccf8 + 0x13f) != '\x01') || (*(char *)(DAT_1007ccf8 + 0x141) == '\x05')) {
    uVar6 = ((uint)*(ushort *)(DAT_1007ccf8 + 0x38) * 1000) / 200;
    if (*(ushort *)(DAT_1007ccf8 + 0x158) < uVar6) {
      uVar4 = *(ushort *)(DAT_1007ccf8 + 0x158) + 1;
      *(short *)(DAT_1007ccf8 + 0x158) = (short)uVar4;
      if (uVar6 == (uVar4 & 0xffff)) {
        FUN_100a5b78((DAT_1007cd00 - DAT_1007ccfc) * 0x20 & 0xff00U | 0xd30031,
                     PTR_s_bat_charge_state_check_volt_1007cd08,
                     PTR_s_Check_bat_real_voltage__1007cd04,DAT_1007ccfc,param_1,param_2,param_3);
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
                     PTR_s_re_charge_start__real___dmv__thr_1007cd10,param_1,(uint)uVar1,param_2,
                     param_3);
        uVar5 = 3;
      }
      else {
        FUN_100a5b78((DAT_1007cd00 - DAT_1007ccfc) * 0x20 & 0xff00U | 0xe20031,
                     PTR_s_bat_charge_state_check_volt_1007cd08,PTR_s_battery_error_1007cd0c,
                     DAT_1007ccfc,param_1,param_2,param_3);
        *(byte *)(iVar2 + 0x13d) = *(byte *)(iVar2 + 0x13d) | 2;
        uVar5 = 1;
      }
      *(undefined1 *)(iVar2 + 0x141) = uVar5;
    }
  }
  return;
}

