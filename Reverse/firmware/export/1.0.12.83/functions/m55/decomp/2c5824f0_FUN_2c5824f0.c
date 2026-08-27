/* FUN_2c5824f0 @ 0x2c5824f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5824f0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
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
  
  puVar1 = _LAB_2c582604;
  aiStack_14[0] = *_LAB_2c582608;
  FUN_2c64c9c4(_LAB_2c582604,_LAB_2c582610,_LAB_2c58260c,0);
  uStack_58 = _LAB_2c582618;
  *puVar1 = _LAB_2c582614;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = _LAB_2c58261c;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uVar3 = _LAB_2c582624;
  uStack_54 = 2;
  uStack_4c = 3;
  uStack_48 = _LAB_2c582620;
  uStack_44 = 4;
  uStack_40 = _LAB_2c582628;
  uStack_38 = _LAB_2c58262c;
  uStack_34 = 5;
  uStack_30 = _LAB_2c582630;
  uStack_2c = 6;
  uStack_28 = _LAB_2c582634;
  uStack_24 = 7;
  uStack_20 = _LAB_2c582638;
  uStack_1c = 8;
  uStack_18 = _LAB_2c58263c;
  FUN_2c4fd9cc(_LAB_2c582640,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c582640,_LAB_2c582644,_LAB_2c58260c);
  uVar6 = _LAB_2c582654;
  puVar5 = _LAB_2c582650;
  uVar4 = _LAB_2c58264c;
  puVar1 = _LAB_2c582648;
  *_LAB_2c582648 = _LAB_2c58264c;
  puVar5[1] = uVar6;
  puVar1[1] = uVar3;
  uVar6 = _LAB_2c582664;
  uVar3 = _LAB_2c582660;
  puVar7 = _LAB_2c58265c;
  puVar1 = _LAB_2c582658;
  *puVar5 = uVar4;
  *puVar7 = uVar4;
  puVar1[1] = uVar3;
  puVar7[1] = uVar6;
  uVar6 = _LAB_2c582674;
  uVar3 = _LAB_2c582670;
  puVar7 = _LAB_2c58266c;
  puVar5 = _LAB_2c582668;
  *puVar1 = uVar4;
  *puVar5 = uVar4;
  puVar5[1] = uVar3;
  puVar5 = _LAB_2c58267c;
  puVar1 = _LAB_2c582678;
  *puVar7 = uVar4;
  puVar8 = _LAB_2c582680;
  puVar7[1] = uVar6;
  uVar3 = _LAB_2c582684;
  *puVar1 = uVar4;
  puVar1[1] = uVar3;
  *puVar8 = uVar4;
  *puVar5 = uVar4;
  uVar3 = _LAB_2c58268c;
  piVar2 = _LAB_2c582608;
  puVar8[1] = _LAB_2c582688;
  puVar5[1] = uVar3;
  if (*piVar2 == aiStack_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

