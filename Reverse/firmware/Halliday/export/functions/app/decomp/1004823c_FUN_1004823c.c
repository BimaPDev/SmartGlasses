/* FUN_1004823c @ 0x1004823c */

void FUN_1004823c(void)

{
  int iVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  
  iVar1 = DAT_100482f4;
  local_14 = *DAT_100482f0;
  local_1c = 0;
  local_18 = 0;
  uVar2 = (**(code **)(DAT_100482f4 + 0x28))();
  pcVar3 = *(code **)(iVar1 + 0x2c);
  local_1c = CONCAT31(local_1c._1_3_,uVar2);
  uVar2 = (*pcVar3)(0,0);
  local_1c._0_2_ = CONCAT11(uVar2,(undefined1)local_1c);
  uVar2 = (*pcVar3)(0,1);
  local_1c._0_3_ = CONCAT12(uVar2,(undefined2)local_1c);
  uVar2 = (*pcVar3)(1,0);
  local_1c = CONCAT13(uVar2,(undefined3)local_1c);
  local_18 = (*pcVar3)(1);
  FUN_100a5b78((DAT_100482fc - DAT_100482f8) * 0x20 & 0xff00U | 0x1540035,DAT_10048304,DAT_10048300,
               local_1c & 0xff,local_1c >> 8 & 0xff,local_1c >> 0x10 & 0xff,local_1c >> 0x18,
               local_18);
  local_28 = 0xb05;
  local_24 = &local_1c;
  local_20 = 5;
  FUN_100506fc(&local_28);
  if (*DAT_100482f0 != local_14) {
    FUN_1013cdc0();
  }
  return;
}

