/* FUN_140387e0 @ 0x140387e0 */

void FUN_140387e0(void)

{
  int iVar1;
  undefined2 local_3c [2];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  int local_14;
  undefined4 local_10;
  
  local_10 = DAT_14038810;
  FUN_1402a6e8(4,0x6a9,DAT_1403881c,DAT_14038818);
  FUN_140383cc();
  FUN_140384e4();
  FUN_14038304();
  iVar1 = DAT_14038300;
  local_14 = *DAT_140382fc;
  local_38 = 0;
  local_36 = 0;
  *(uint *)(DAT_14038300 + 0xc0c) = *(uint *)(DAT_14038300 + 0xc0c) & 0xffffff | 0x28000000;
  *(uint *)(iVar1 + 0xc0c) = *(uint *)(iVar1 + 0xc0c) & 0xff00ffff | 0x370000;
  local_34 = 0;
  uStack_30 = 0;
  local_24 = 0;
  uStack_20 = 0;
  local_35 = 0;
  local_1c = 0;
  local_28 = 1;
  local_3c[0] = 0x401;
  local_37 = 8;
  local_2c = 0x14000;
  local_18 = 0;
  local_16 = 3;
  FUN_14037ff4(local_3c);
  if (*DAT_140382fc == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

