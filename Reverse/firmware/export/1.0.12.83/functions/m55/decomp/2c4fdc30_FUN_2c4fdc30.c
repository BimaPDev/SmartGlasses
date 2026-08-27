/* FUN_2c4fdc30 @ 0x2c4fdc30 */

void FUN_2c4fdc30(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
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
  int local_14;
  
  puVar2 = DAT_2c4fdd30;
  local_14 = *DAT_2c4fdd34;
  FUN_2c64c9c4(DAT_2c4fdd30,DAT_2c4fdd3c,DAT_2c4fdd38,0);
  local_44 = 4;
  *puVar2 = DAT_2c4fdd40;
  puVar2[1] = puVar2 + 3;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  local_3c = 0;
  puVar2[0xd] = puVar2 + 0xf;
  puVar2[0xe] = 0;
  uStack_58 = DAT_2c4fdd44;
  puVar2[7] = puVar2 + 9;
  puVar2[8] = 0;
  local_5c = 1;
  local_54 = 2;
  uStack_50 = DAT_2c4fdd48;
  local_4c = 3;
  uStack_48 = DAT_2c4fdd4c;
  local_40 = DAT_2c4fdd50;
  local_38 = DAT_2c4fdd54;
  local_34 = 5;
  uStack_30 = DAT_2c4fdd58;
  local_2c = 6;
  uStack_28 = DAT_2c4fdd5c;
  local_24 = 7;
  uStack_20 = DAT_2c4fdd60;
  local_1c = 8;
  uStack_18 = DAT_2c4fdd64;
  FUN_2c4fd9cc(DAT_2c4fdd68,&local_5c,&local_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(DAT_2c4fdd68,DAT_2c4fdd6c,DAT_2c4fdd38);
  puVar2 = (undefined4 *)FUN_2c64ca5c(4);
  *puVar2 = DAT_2c4fdd70;
  puVar3 = (undefined4 *)FUN_2c64ca5c(4);
  *puVar3 = DAT_2c4fdd74;
  puVar4 = (undefined4 *)FUN_2c64ca5c(4);
  uVar1 = DAT_2c4fdd78;
  *puVar4 = puVar3;
  FUN_2c5ddfa0(uVar1,puVar2);
  if (*DAT_2c4fdd34 == local_14) {
    FUN_2c64c9c4(DAT_2c4fdd78,DAT_2c4fdd7c,DAT_2c4fdd38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

