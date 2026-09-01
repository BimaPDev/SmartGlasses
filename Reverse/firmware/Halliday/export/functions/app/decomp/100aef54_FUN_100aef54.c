/* FUN_100aef54 @ 0x100aef54 */

int FUN_100aef54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_1011ea48(&local_38,0,0x20);
  local_3c = param_1;
  local_38 = FUN_100af4e0(param_2);
  local_34 = FUN_100af4e0(param_3);
  local_40 = 0;
  iVar1 = FUN_10064860(0,3,&local_3c);
  if (iVar1 == 0) {
    iVar1 = FUN_1012e0a2(0x24,param_6);
    iVar2 = FUN_1012e0a2(0x25,param_6);
    if ((iVar1 < local_2c) || (iVar2 < local_24)) {
      FUN_100a5b78((DAT_100af050 - DAT_100af054) * 0x20 & 0xff00U | 0x200014,DAT_100af05c,iVar1,
                   local_2c,iVar2,local_24);
    }
    else {
      local_30 = FUN_1012e06e(0x24,param_6);
      local_28 = FUN_1012e06e(0x25,param_6);
      FUN_1011ea48(local_30,0,local_2c);
      iVar1 = FUN_10064860(&local_40,0,&local_3c);
      if ((iVar1 == 0) && (local_40 != 0)) {
        *param_4 = local_20;
        *param_5 = local_1c;
        return local_40;
      }
      FUN_100a5b78((DAT_100af050 - DAT_100af054) * 0x20 & 0xff00U | 0x2c0011,DAT_100af060,iVar1);
    }
  }
  else {
    FUN_100a5b78((DAT_100af050 - DAT_100af054) * 0x20 & 0xff00U | 0x180011,DAT_100af058);
  }
  return 0;
}

