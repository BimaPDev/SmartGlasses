/* FUN_2c591b8c @ 0x2c591b8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c591b8c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
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
  int iStack_2c;
  
  puVar1 = _LAB_2c591cb4;
  iStack_2c = *LAB_2c591cb8;
  FUN_2c64c9c4(_LAB_2c591cb4,_LAB_2c591cc0,DAT_2c591cbc,0);
  uStack_58 = _LAB_2c591cc8;
  *puVar1 = _LAB_2c591cc4;
  puVar1[1] = puVar1 + 3;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = _LAB_2c591cd0;
  uStack_70 = _LAB_2c591ccc;
  puVar1[2] = 0;
  uStack_48 = _LAB_2c591cd4;
  *(undefined1 *)(puVar1 + 3) = 0;
  uStack_40 = _LAB_2c591cd8;
  *(undefined1 *)(puVar1 + 9) = 0;
  uStack_38 = _LAB_2c591cdc;
  puVar1[0xe] = 0;
  uStack_30 = _LAB_2c591ce0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  uVar2 = _LAB_2c591ce4;
  uStack_54 = 0;
  uStack_74 = 1;
  uStack_5c = 4;
  uStack_4c = 5;
  uStack_6c = 2;
  uStack_68 = _LAB_2c591ce8;
  uStack_64 = 3;
  uStack_60 = _LAB_2c591cec;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uStack_3c = 7;
  uStack_44 = 6;
  uStack_34 = 8;
  FUN_2c52d3b8(uVar2,&uStack_74,9);
  FUN_2c64c9c4(_LAB_2c591ce4,DAT_2c591cf0,DAT_2c591cbc);
  uStack_50 = _LAB_2c591cf4;
  uStack_40 = _LAB_2c591cf8;
  uStack_74 = 0;
  uStack_6c = 1;
  uStack_64 = 2;
  uStack_5c = 3;
  uStack_54 = 4;
  uStack_4c = 5;
  uStack_44 = 6;
  uStack_48 = _LAB_2c591d08;
  uStack_3c = 7;
  uStack_38 = _LAB_2c591cfc;
  uStack_34 = 8;
  uStack_30 = _LAB_2c591d00;
  uStack_70 = DAT_2c591d0c;
  uStack_68 = DAT_2c591d10;
  uStack_60 = DAT_2c591d14;
  uStack_58 = DAT_2c591d18;
  FUN_2c52d3b8(DAT_2c591d04,&uStack_74,9);
  if (*LAB_2c591cb8 == iStack_2c) {
    FUN_2c64c9c4(DAT_2c591d04,DAT_2c591cf0,DAT_2c591cbc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

