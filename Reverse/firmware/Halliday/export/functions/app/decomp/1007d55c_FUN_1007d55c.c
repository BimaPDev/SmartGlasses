/* FUN_1007d55c @ 0x1007d55c */

void FUN_1007d55c(int param_1,undefined4 param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  
  iVar4 = DAT_1007d5d4;
  iVar3 = DAT_1007ccf8;
  cVar2 = *(char *)(DAT_1007d5d4 + 0x13f);
  if (*(char *)(DAT_1007d5d4 + 0x140) != cVar2) {
    if (cVar2 == '\x01') {
      if (*(int *)(DAT_1007d5d4 + 0x164) != 0) {
        FUN_100a5b78((DAT_1007d5dc - DAT_1007d5d8) * 0x20 & 0xff00U | 0x31c0031,DAT_1007d5e0,
                     DAT_1007d5e4);
        (**(code **)(iVar4 + 0x164))(0xc,0);
      }
    }
    else if (*(char *)(DAT_1007d5d4 + 0x140) == '\x01') {
      if (*(code **)(DAT_1007d5d4 + 0x164) != (code *)0x0) {
        (**(code **)(DAT_1007d5d4 + 0x164))(5,0);
      }
      if ((int)((uint)*(ushort *)(iVar4 + 0x62) << 0x1b) < 0) {
        *(undefined1 *)(iVar4 + 0x141) = 3;
      }
    }
    *(undefined1 *)(iVar4 + 0x140) = *(undefined1 *)(iVar4 + 0x13f);
    *(undefined2 *)(iVar4 + 0x158) = 0;
    return;
  }
  if ((*(char *)(DAT_1007ccf8 + 0x13f) != '\x01') || (*(char *)(DAT_1007ccf8 + 0x141) == '\x05')) {
    uVar7 = ((uint)*(ushort *)(DAT_1007ccf8 + 0x38) * 1000) / 200;
    if (*(ushort *)(DAT_1007ccf8 + 0x158) < uVar7) {
      uVar5 = *(ushort *)(DAT_1007ccf8 + 0x158) + 1;
      *(short *)(DAT_1007ccf8 + 0x158) = (short)uVar5;
      if (uVar7 == (uVar5 & 0xffff)) {
        FUN_100a5b78((DAT_1007cd00 - DAT_1007ccfc) * 0x20 & 0xff00U | 0xd30031,
                     PTR_s_bat_charge_state_check_volt_1007cd08,
                     PTR_s_Check_bat_real_voltage__1007cd04,DAT_1007ccfc,param_1,param_2,cVar2);
        FUN_1007cae0(3);
        return;
      }
    }
    else if ((-1 < param_1) &&
            (*(undefined2 *)(DAT_1007ccf8 + 0x158) = 0, *(char *)(iVar3 + 0x141) == '\x05')) {
      if ((int)(uint)*(ushort *)(iVar3 + 0x1e) < param_1) {
        if (*(char *)(iVar3 + 0x26) == '\0') {
          uVar1 = *(ushort *)(iVar3 + 0xc);
        }
        else {
          uVar1 = *(ushort *)(iVar3 + 0x2a);
        }
        if ((int)(uint)uVar1 <= param_1) {
          return;
        }
        FUN_100a5b78((DAT_1007cd00 - DAT_1007ccfc) * 0x20 & 0xff00U | 0xfe0032,
                     PTR_s_bat_charge_state_check_volt_1007cd08,
                     PTR_s_re_charge_start__real___dmv__thr_1007cd10,param_1,(uint)uVar1,param_2,
                     cVar2);
        uVar6 = 3;
      }
      else {
        FUN_100a5b78((DAT_1007cd00 - DAT_1007ccfc) * 0x20 & 0xff00U | 0xe20031,
                     PTR_s_bat_charge_state_check_volt_1007cd08,PTR_s_battery_error_1007cd0c,
                     DAT_1007ccfc,param_1,param_2,cVar2);
        *(byte *)(iVar3 + 0x13d) = *(byte *)(iVar3 + 0x13d) | 2;
        uVar6 = 1;
      }
      *(undefined1 *)(iVar3 + 0x141) = uVar6;
    }
  }
  return;
}

