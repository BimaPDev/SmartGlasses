/* FUN_100640bc @ 0x100640bc */

undefined4 FUN_100640bc(int param_1)

{
  undefined4 uVar1;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined1 local_2c [2];
  ushort local_2a;
  undefined1 *local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  
  FUN_1011ea48(local_2c,0,0x14);
  local_2c[0] = *(undefined1 *)(param_1 + 2);
  local_18 = *(undefined4 *)(param_1 + 0x14);
  local_14 = *(undefined4 *)(param_1 + 0x18);
  local_10 = *(undefined4 *)(param_1 + 0x10);
  local_c = (uint)*(ushort *)(param_1 + 0xe);
  local_2a = (ushort)*(byte *)(param_1 + 3);
  if (*(byte *)(param_1 + 3) == 8) {
    local_38 = *(undefined2 *)(param_1 + 4);
    local_36 = *(undefined2 *)(param_1 + 10);
    local_34 = local_36;
    local_32 = local_36;
    local_30 = local_36;
    local_24 = (undefined1 *)&local_38;
    uVar1 = (*(code *)**(undefined4 **)(*DAT_1006413c + 8))(*DAT_1006413c,local_2c);
  }
  else {
    FUN_100a5b78((DAT_10064144 - DAT_10064140) * 0x20 & 0xff00U | 0x5c0011,DAT_10064148,DAT_1006414c
                );
    uVar1 = 0;
  }
  return uVar1;
}

