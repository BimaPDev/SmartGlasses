/* FUN_2c5858e4 @ 0x2c5858e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5858e4(void)

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
  
  puVar1 = _LAB_2c5859f8;
  aiStack_14[0] = *_LAB_2c5859fc;
  FUN_2c64c9c4(_LAB_2c5859f8,_LAB_2c585a04,_LAB_2c585a00,0);
  uStack_58 = _LAB_2c585a0c;
  *puVar1 = _LAB_2c585a08;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = _LAB_2c585a10;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uVar3 = _LAB_2c585a18;
  uStack_54 = 2;
  uStack_4c = 3;
  uStack_48 = _LAB_2c585a14;
  uStack_44 = 4;
  uStack_40 = _LAB_2c585a1c;
  uStack_38 = _LAB_2c585a20;
  uStack_34 = 5;
  uStack_30 = _LAB_2c585a24;
  uStack_2c = 6;
  uStack_28 = _LAB_2c585a28;
  uStack_24 = 7;
  uStack_20 = _LAB_2c585a2c;
  uStack_1c = 8;
  uStack_18 = _LAB_2c585a30;
  FUN_2c4fd9cc(_LAB_2c585a34,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c585a34,_LAB_2c585a38,_LAB_2c585a00);
  uVar6 = _LAB_2c585a48;
  puVar5 = _LAB_2c585a44;
  uVar4 = _LAB_2c585a40;
  puVar1 = _LAB_2c585a3c;
  *_LAB_2c585a3c = _LAB_2c585a40;
  puVar5[1] = uVar6;
  puVar1[1] = uVar3;
  uVar6 = _LAB_2c585a58;
  uVar3 = _LAB_2c585a54;
  puVar7 = _LAB_2c585a50;
  puVar1 = _LAB_2c585a4c;
  *puVar5 = uVar4;
  *puVar7 = uVar4;
  puVar1[1] = uVar3;
  puVar7[1] = uVar6;
  uVar6 = _LAB_2c585a68;
  uVar3 = _LAB_2c585a64;
  puVar7 = _LAB_2c585a60;
  puVar5 = _LAB_2c585a5c;
  *puVar1 = uVar4;
  *puVar5 = uVar4;
  puVar5[1] = uVar3;
  puVar5 = _LAB_2c585a70;
  puVar1 = _LAB_2c585a6c;
  *puVar7 = uVar4;
  puVar8 = _LAB_2c585a74;
  puVar7[1] = uVar6;
  uVar3 = _LAB_2c585a78;
  *puVar1 = uVar4;
  puVar1[1] = uVar3;
  *puVar8 = uVar4;
  *puVar5 = uVar4;
  uVar3 = _LAB_2c585a80;
  piVar2 = _LAB_2c5859fc;
  puVar8[1] = _LAB_2c585a7c;
  puVar5[1] = uVar3;
  if (*piVar2 == aiStack_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

