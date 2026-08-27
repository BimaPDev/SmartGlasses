/* FUN_2c57d6f0 @ 0x2c57d6f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57d6f0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
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
  
  puVar1 = _LAB_2c57d7dc;
  aiStack_14[0] = *_LAB_2c57d7e0;
  FUN_2c64c9c4(_LAB_2c57d7dc,_LAB_2c57d7e8,_LAB_2c57d7e4,0);
  uStack_58 = _LAB_2c57d7f0;
  *puVar1 = _LAB_2c57d7ec;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = _LAB_2c57d7f4;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uVar3 = _LAB_2c57d7fc;
  uStack_54 = 2;
  uStack_4c = 3;
  uStack_48 = _LAB_2c57d7f8;
  uStack_44 = 4;
  uStack_40 = _LAB_2c57d800;
  uStack_38 = _LAB_2c57d804;
  uStack_34 = 5;
  uStack_30 = _LAB_2c57d808;
  uStack_2c = 6;
  uStack_28 = _LAB_2c57d80c;
  uStack_24 = 7;
  uStack_20 = _LAB_2c57d810;
  uStack_1c = 8;
  uStack_18 = _LAB_2c57d814;
  FUN_2c4fd9cc(_LAB_2c57d818,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c57d818,_LAB_2c57d81c,_LAB_2c57d7e4);
  puVar6 = _LAB_2c57d82c;
  puVar1 = _LAB_2c57d828;
  uVar5 = _LAB_2c57d824;
  uVar4 = _LAB_2c57d820;
  *_LAB_2c57d828 = _LAB_2c57d824;
  puVar1[1] = uVar4;
  puVar7 = _LAB_2c57d834;
  puVar1 = _LAB_2c57d830;
  *_LAB_2c57d830 = uVar5;
  *puVar6 = uVar5;
  *puVar7 = uVar5;
  uVar4 = _LAB_2c57d83c;
  puVar6[1] = _LAB_2c57d838;
  piVar2 = _LAB_2c57d7e0;
  puVar1[1] = uVar3;
  puVar7[1] = uVar4;
  if (*piVar2 == aiStack_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

