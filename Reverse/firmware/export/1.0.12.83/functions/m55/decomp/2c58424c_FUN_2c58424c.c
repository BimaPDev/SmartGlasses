/* FUN_2c58424c @ 0x2c58424c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c58424c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
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
  
  puVar1 = _LAB_2c584348;
  aiStack_14[0] = *_LAB_2c58434c;
  FUN_2c64c9c4(_LAB_2c584348,_LAB_2c584354,_LAB_2c584350,0);
  uStack_58 = _LAB_2c58435c;
  *puVar1 = _LAB_2c584358;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = _LAB_2c584360;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uVar3 = _LAB_2c584368;
  uStack_54 = 2;
  uStack_4c = 3;
  uStack_48 = _LAB_2c584364;
  uStack_44 = 4;
  uStack_40 = _LAB_2c58436c;
  uStack_38 = _LAB_2c584370;
  uStack_34 = 5;
  uStack_30 = _LAB_2c584374;
  uStack_2c = 6;
  uStack_28 = _LAB_2c584378;
  uStack_24 = 7;
  uStack_20 = _LAB_2c58437c;
  uStack_1c = 8;
  uStack_18 = _LAB_2c584380;
  FUN_2c4fd9cc(_LAB_2c584384,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c584384,_LAB_2c584388,_LAB_2c584350);
  puVar6 = _LAB_2c584398;
  puVar5 = _LAB_2c584394;
  uVar4 = _LAB_2c584390;
  puVar1 = _LAB_2c58438c;
  *_LAB_2c58438c = _LAB_2c584390;
  puVar1[1] = uVar3;
  uVar7 = _LAB_2c5843a0;
  uVar3 = _LAB_2c58439c;
  *puVar5 = uVar4;
  puVar5[1] = uVar3;
  *puVar6 = uVar4;
  puVar6[1] = uVar7;
  puVar6 = _LAB_2c5843ac;
  puVar5 = _LAB_2c5843a8;
  puVar1 = _LAB_2c5843a4;
  *_LAB_2c5843a8 = uVar4;
  *puVar1 = uVar4;
  *puVar6 = uVar4;
  uVar3 = _LAB_2c5843b4;
  puVar1[1] = _LAB_2c5843b0;
  uVar4 = _LAB_2c5843b8;
  piVar2 = _LAB_2c58434c;
  puVar5[1] = uVar3;
  puVar6[1] = uVar4;
  if (*piVar2 == aiStack_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

