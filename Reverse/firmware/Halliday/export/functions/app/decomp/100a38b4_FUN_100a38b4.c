/* FUN_100a38b4 @ 0x100a38b4 */

undefined4 FUN_100a38b4(void)

{
  code *pcVar1;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined1 local_10;
  undefined2 local_e;
  
  FUN_1011ea48(local_24,0,0x1c);
  local_24[0] = 1;
  local_10 = 10;
  local_e = 0x3203;
  local_20 = FUN_10112e84(DAT_100a3944);
  if (local_20 != 0) {
    local_28 = 0;
    pcVar1 = *(code **)(*(int *)(local_20 + 8) + 0x14);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(local_20,&local_28);
    }
    *DAT_100a3960 = local_28;
    pcVar1 = *(code **)(*(int *)(local_20 + 8) + 0xc);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(local_20,DAT_100a3964);
    }
    local_1c = DAT_100a3968;
    local_14 = DAT_100a396c;
    if (local_20 != 0) goto LAB_100a38ea;
  }
  FUN_1011dc50(DAT_100a3948);
  local_1c = DAT_100a394c;
LAB_100a38ea:
  FUN_100a3508(local_24);
  FUN_100a5b78((DAT_100a3954 - DAT_100a3950) * 0x20 & 0xff00U | 0xf20031,DAT_100a395c,DAT_100a3958);
  return 0;
}

