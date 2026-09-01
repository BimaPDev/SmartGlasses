/* FUN_100e4f38 @ 0x100e4f38 */

void FUN_100e4f38(undefined4 *param_1,int param_2)

{
  undefined1 local_21;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  
  local_20 = DAT_100e4fa4;
  local_1c = &local_21;
  local_21 = 2;
  local_18 = 2;
  if (param_2 == 0) {
    local_16 = 0;
  }
  else {
    local_16 = FUN_1011ea10(param_2);
  }
  local_14 = param_2;
  FUN_100a5b78((DAT_100e4fac - DAT_100e4fa8) * 0x20 & 0xff00U | 0x1720033,DAT_100e4fb0,
               (int)*(char *)((int)param_1 + 0xb),local_16,param_2);
  FUN_100e0684(*param_1,*(undefined1 *)(param_1 + 2),0x13,&local_20,2);
  return;
}

