/* FUN_2c52e3b4 @ 0x2c52e3b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52e3b4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
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
  
  puVar2 = _LAB_2c52e540;
  iStack_2c = *DAT_2c52e52c;
  uStack_50 = _LAB_2c52e534;
  uStack_48 = _LAB_2c52e538;
  uStack_40 = _LAB_2c52e53c;
  uStack_38 = _LAB_2c52e544;
  uStack_30 = _LAB_2c52e548;
  uStack_74 = 0;
  uStack_64 = 2;
  uStack_5c = 3;
  uStack_54 = 4;
  uStack_4c = 5;
  uStack_70 = _LAB_2c52e530;
  uStack_6c = 1;
  uStack_68 = _LAB_2c52e550;
  uStack_60 = _LAB_2c52e554;
  uStack_58 = _LAB_2c52e558;
  uStack_44 = 6;
  uStack_3c = 7;
  uStack_34 = 8;
  FUN_2c52d3b8(_LAB_2c52e54c,&uStack_74,9);
  FUN_2c64c9c4(_LAB_2c52e54c,DAT_2c52e560,DAT_2c52e55c);
  FUN_2c64c9c4(puVar2,_LAB_2c52e564,DAT_2c52e55c);
  uStack_38 = _LAB_2c52e56c;
  uStack_70 = _LAB_2c52e568;
  puVar2[2] = 0;
  uStack_3c = 7;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  puVar2[0xe] = 0;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  uVar3 = DAT_2c52e580;
  uStack_54 = 0;
  uStack_74 = 1;
  uStack_68 = _LAB_2c52e570;
  uStack_6c = 2;
  uStack_64 = 3;
  uStack_5c = 4;
  uStack_4c = 5;
  uStack_44 = 6;
  uStack_34 = 8;
  uStack_40 = _LAB_2c52e578;
  uStack_30 = _LAB_2c52e57c;
  uStack_60 = _LAB_2c52e584;
  uStack_58 = _LAB_2c52e588;
  uStack_50 = _LAB_2c52e58c;
  uStack_48 = _LAB_2c52e590;
  *puVar2 = _LAB_2c52e574;
  puVar2[1] = puVar2 + 3;
  uVar4 = _LAB_2c52e594;
  puVar2[7] = puVar2 + 9;
  puVar2[0xd] = puVar2 + 0xf;
  FUN_2c52d3b8(uVar3,&uStack_74,9);
  FUN_2c64c9c4(DAT_2c52e580,DAT_2c52e560,DAT_2c52e55c);
  uVar6 = DAT_2c52e5a4;
  puVar5 = DAT_2c52e5a0;
  uVar3 = DAT_2c52e59c;
  puVar2 = LAB_2c52e598;
  *LAB_2c52e598 = DAT_2c52e59c;
  puVar5[1] = uVar6;
  puVar2[1] = uVar4;
  uVar6 = DAT_2c52e5b4;
  uVar4 = DAT_2c52e5b0;
  puVar7 = DAT_2c52e5ac;
  puVar2 = DAT_2c52e5a8;
  *puVar5 = uVar3;
  *puVar7 = uVar3;
  puVar2[1] = uVar4;
  puVar7[1] = uVar6;
  uVar6 = DAT_2c52e5c4;
  uVar4 = DAT_2c52e5c0;
  puVar7 = DAT_2c52e5bc;
  puVar5 = DAT_2c52e5b8;
  *puVar2 = uVar3;
  *puVar5 = uVar3;
  puVar5[1] = uVar4;
  puVar5 = DAT_2c52e5cc;
  puVar2 = DAT_2c52e5c8;
  *puVar7 = uVar3;
  puVar8 = DAT_2c52e5d0;
  puVar7[1] = uVar6;
  uVar4 = DAT_2c52e5d4;
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  *puVar8 = uVar3;
  *puVar5 = uVar3;
  uVar3 = DAT_2c52e5dc;
  piVar1 = DAT_2c52e52c;
  puVar8[1] = DAT_2c52e5d8;
  puVar5[1] = uVar3;
  if (*piVar1 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

