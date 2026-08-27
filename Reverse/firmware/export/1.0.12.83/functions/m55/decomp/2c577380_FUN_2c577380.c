/* FUN_2c577380 @ 0x2c577380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c577380(void)

{
  undefined4 *puVar1;
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int aiStack_14 [2];
  
  puVar1 = _LAB_2c57744c;
  aiStack_14[0] = *DAT_2c577450;
  FUN_2c64c9c4(_LAB_2c57744c,_LAB_2c577458,DAT_2c577454,0);
  uStack_58 = _LAB_2c577460;
  *puVar1 = _LAB_2c57745c;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  puVar1[0xd] = puVar1 + 0xf;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uStack_54 = 2;
  uStack_50 = DAT_2c577464;
  uStack_4c = 3;
  uStack_48 = DAT_2c577468;
  uStack_44 = 4;
  uStack_40 = DAT_2c57746c;
  uStack_38 = DAT_2c577470;
  uStack_34 = 5;
  uStack_30 = DAT_2c577474;
  uStack_2c = 6;
  uStack_28 = DAT_2c577478;
  uStack_24 = 7;
  uStack_20 = DAT_2c57747c;
  uStack_1c = 8;
  uStack_18 = LAB_2c577480;
  FUN_2c4fd9cc(DAT_2c577484,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  if (*DAT_2c577450 == aiStack_14[0]) {
    FUN_2c64c9c4(DAT_2c577484,DAT_2c577488,DAT_2c577454);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

