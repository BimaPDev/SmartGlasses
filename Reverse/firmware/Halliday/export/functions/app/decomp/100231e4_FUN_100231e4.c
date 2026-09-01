/* FUN_100231e4 @ 0x100231e4 */

void FUN_100231e4(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  uint uStack_24;
  undefined2 local_20;
  int local_1c;
  
  local_1c = *(int *)PTR_DAT_10023294;
  iVar1 = FUN_1004f6cc();
  if (iVar1 != 0) goto LAB_1002322e;
  FUN_100a5b78(((int)PTR_DAT_1002329c - (int)PTR_DAT_10023298) * 0x20 & 0xff00U | 0x3740011,
               PTR_s_ble_send_to_app2_100232a4,PTR_s_vendor_not_init_100232a0);
  uVar2 = 0xffffffa8;
  while( true ) {
    if (*(int *)PTR_DAT_10023294 == local_1c) break;
    iVar1 = FUN_1013cdc0(uVar2);
LAB_1002322e:
    uVar2 = 0;
    if (*(char *)(iVar1 + 0x212) != '\0') {
      if (param_1[10] == '\0') {
        FUN_100a5b78(((int)PTR_DAT_1002329c - (int)PTR_DAT_10023298) * 0x20 & 0xff00U | 0x37c0032,
                     PTR_s_ble_send_to_app2_100232a4,PTR_s_BLE_SEND__CMD_0x_x__KEY_0x_x_100232a8,
                     *param_1,param_1[1]);
      }
      uVar2 = 0;
      local_28 = *param_1;
      uStack_27 = 0;
      uStack_26 = param_1[1];
      local_20 = 0;
      uStack_25 = (undefined1)((ushort)*(undefined2 *)(param_1 + 8) >> 8);
      uStack_24 = (uint)(byte)*(undefined2 *)(param_1 + 8);
      if (param_2 == 0) {
        uVar2 = 5;
      }
      uVar2 = FUN_10050808(&local_28,uVar2,param_1,param_3,param_4);
    }
  }
  return;
}

