/* FUN_2c5484c0 @ 0x2c5484c0 */

void FUN_2c5484c0(void)

{
  undefined4 *puVar1;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  int local_14 [2];
  
  puVar1 = DAT_2c54858c;
  local_14[0] = *DAT_2c548590;
  FUN_2c64c9c4(DAT_2c54858c,DAT_2c548598,DAT_2c548594,0);
  local_58 = DAT_2c5485a0;
  *puVar1 = DAT_2c54859c;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  puVar1[0xd] = puVar1 + 0xf;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  local_5c = 1;
  local_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uStack_54 = 2;
  local_50 = DAT_2c5485a4;
  uStack_4c = 3;
  local_48 = DAT_2c5485a8;
  uStack_44 = 4;
  local_40 = DAT_2c5485ac;
  local_38 = DAT_2c5485b0;
  local_34 = 5;
  uStack_30 = DAT_2c5485b4;
  local_2c = 6;
  uStack_28 = DAT_2c5485b8;
  local_24 = 7;
  uStack_20 = DAT_2c5485bc;
  local_1c = 8;
  uStack_18 = DAT_2c5485c0;
  FUN_2c4fd9cc(DAT_2c5485c4,&local_5c,local_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  if (*DAT_2c548590 == local_14[0]) {
    FUN_2c64c9c4(DAT_2c5485c4,DAT_2c5485c8,DAT_2c548594);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

