/* FUN_2c5c1958 @ 0x2c5c1958 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5c1958(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
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
  undefined4 uStack_2c;
  int aiStack_28 [2];
  int iStack_20;
  
  puVar1 = _LAB_2c5c1a2c;
  iStack_20 = _LAB_2c5c1c90 + -0x14;
  aiStack_28[0] = *_LAB_2c5c1a30;
  FUN_2c64c9c4(_LAB_2c5c1a2c,_LAB_2c5c1a38,_LAB_2c5c1a34,0);
  uStack_6c = _LAB_2c5c1a40;
  *puVar1 = _LAB_2c5c1a3c;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  puVar1[0xd] = puVar1 + 0xf;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  uStack_70 = 1;
  uStack_50 = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uStack_68 = 2;
  uStack_64 = _LAB_2c5c1a44;
  uStack_60 = 3;
  uStack_5c = _LAB_2c5c1a48;
  uStack_58 = 4;
  uStack_54 = _LAB_2c5c1a4c;
  uStack_4c = _LAB_2c5c1a50;
  uStack_48 = 5;
  uStack_44 = _LAB_2c5c1a54;
  uStack_40 = 6;
  uStack_3c = _LAB_2c5c1a58;
  uStack_38 = 7;
  uStack_34 = _LAB_2c5c1a5c;
  uStack_30 = 8;
  uStack_2c = _LAB_2c5c1a60;
  FUN_2c4fd9cc(_LAB_2c5c1a64,&uStack_70,aiStack_28,0,auStack_80,auStack_74,auStack_78,auStack_84,
               auStack_7c,auStack_88);
  if (*_LAB_2c5c1a30 == aiStack_28[0]) {
    if (DAT_2c6685dc == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_2c66ee38(2,_LAB_2c5c1a68,_LAB_2c5c1a64,_LAB_2c5c1a34);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

