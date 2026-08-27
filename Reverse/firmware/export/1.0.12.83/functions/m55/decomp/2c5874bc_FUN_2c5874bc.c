/* FUN_2c5874bc @ 0x2c5874bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5874bc(void)

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
  
  puVar1 = _LAB_2c5875f0;
  aiStack_14[0] = *DAT_2c5875f4;
  FUN_2c64c9c4(_LAB_2c5875f0,_LAB_2c5875fc,DAT_2c5875f8,0);
  uStack_58 = _LAB_2c587604;
  *puVar1 = _LAB_2c587600;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = _LAB_2c587608;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uVar3 = _LAB_2c587610;
  uStack_54 = 2;
  uStack_4c = 3;
  uStack_48 = _LAB_2c58760c;
  uStack_44 = 4;
  uStack_40 = _LAB_2c587614;
  uStack_38 = _LAB_2c587618;
  uStack_34 = 5;
  uStack_30 = _LAB_2c58761c;
  uStack_2c = 6;
  uStack_28 = _LAB_2c587620;
  uStack_24 = 7;
  uStack_20 = _LAB_2c587624;
  uStack_1c = 8;
  uStack_18 = _LAB_2c587628;
  FUN_2c4fd9cc(DAT_2c58762c,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(DAT_2c58762c,DAT_2c587630,DAT_2c5875f8);
  uVar6 = DAT_2c587640;
  puVar5 = DAT_2c58763c;
  uVar4 = DAT_2c587638;
  puVar1 = DAT_2c587634;
  *DAT_2c587634 = DAT_2c587638;
  puVar5[1] = uVar6;
  puVar1[1] = uVar3;
  uVar6 = DAT_2c587650;
  uVar3 = DAT_2c58764c;
  puVar7 = DAT_2c587648;
  puVar1 = DAT_2c587644;
  *puVar5 = uVar4;
  *puVar7 = uVar4;
  puVar1[1] = uVar3;
  puVar7[1] = uVar6;
  uVar6 = DAT_2c587660;
  uVar3 = DAT_2c58765c;
  puVar7 = DAT_2c587658;
  puVar5 = DAT_2c587654;
  *puVar1 = uVar4;
  puVar5[1] = uVar3;
  *puVar7 = uVar4;
  puVar7[1] = uVar6;
  uVar6 = DAT_2c587670;
  uVar3 = DAT_2c58766c;
  puVar7 = DAT_2c587668;
  puVar1 = DAT_2c587664;
  *puVar5 = uVar4;
  *puVar7 = uVar4;
  puVar1[1] = uVar3;
  puVar7[1] = uVar6;
  uVar6 = DAT_2c587680;
  uVar3 = DAT_2c58767c;
  puVar7 = DAT_2c587678;
  puVar5 = DAT_2c587674;
  *puVar1 = uVar4;
  *puVar5 = uVar4;
  puVar5[1] = uVar3;
  puVar5 = DAT_2c587688;
  puVar1 = DAT_2c587684;
  *puVar7 = uVar4;
  puVar8 = DAT_2c58768c;
  puVar7[1] = uVar6;
  uVar3 = DAT_2c587690;
  *puVar1 = uVar4;
  puVar1[1] = uVar3;
  *puVar8 = uVar4;
  *puVar5 = uVar4;
  uVar3 = DAT_2c587698;
  piVar2 = DAT_2c5875f4;
  puVar8[1] = DAT_2c587694;
  puVar5[1] = uVar3;
  if (*piVar2 == aiStack_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

