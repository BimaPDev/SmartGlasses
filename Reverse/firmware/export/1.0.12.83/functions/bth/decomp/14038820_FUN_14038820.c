/* FUN_14038820 @ 0x14038820 */

void FUN_14038820(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 auStack_3c [2];
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined1 uStack_16;
  int iStack_14;
  undefined4 local_10;
  
  uVar2 = DAT_14038868;
  local_10 = DAT_14038868;
  FUN_1402a6e8(4,0x6b6,DAT_14038870,DAT_1403886c);
  local_10 = uVar2;
  FUN_1402a6e8(4,0x6a9,DAT_14038870,DAT_1403886c);
  FUN_140383cc();
  FUN_140384e4();
  FUN_14038304();
  iVar1 = DAT_14038300;
  iStack_14 = *DAT_140382fc;
  uStack_38 = 0;
  uStack_36 = 0;
  *(uint *)(DAT_14038300 + 0xc0c) = *(uint *)(DAT_14038300 + 0xc0c) & 0xffffff | 0x28000000;
  *(uint *)(iVar1 + 0xc0c) = *(uint *)(iVar1 + 0xc0c) & 0xff00ffff | 0x370000;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_35 = 0;
  uStack_1c = 0;
  uStack_28 = 1;
  auStack_3c[0] = 0x401;
  uStack_37 = 8;
  uStack_2c = 0x14000;
  uStack_18 = 0;
  uStack_16 = 3;
  FUN_14037ff4(auStack_3c);
  if (*DAT_140382fc == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

