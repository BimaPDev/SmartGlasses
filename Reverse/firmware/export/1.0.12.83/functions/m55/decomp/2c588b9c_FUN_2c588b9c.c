/* FUN_2c588b9c @ 0x2c588b9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c588b9c(void)

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
  
  puVar1 = _LAB_2c588c90;
  aiStack_14[0] = *_LAB_2c588c94;
  FUN_2c64c9c4(_LAB_2c588c90,_LAB_2c588c9c,_LAB_2c588c98,0);
  uStack_58 = _LAB_2c588ca4;
  *puVar1 = _LAB_2c588ca0;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = _LAB_2c588ca8;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uVar3 = _LAB_2c588cb0;
  uStack_54 = 2;
  uStack_4c = 3;
  uStack_48 = _LAB_2c588cac;
  uStack_44 = 4;
  uStack_40 = _LAB_2c588cb4;
  uStack_38 = _LAB_2c588cb8;
  uStack_34 = 5;
  uStack_30 = _LAB_2c588cbc;
  uStack_2c = 6;
  uStack_28 = _LAB_2c588cc0;
  uStack_24 = 7;
  uStack_20 = _LAB_2c588cc4;
  uStack_1c = 8;
  uStack_18 = _LAB_2c588cc8;
  FUN_2c4fd9cc(_LAB_2c588ccc,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c588ccc,_LAB_2c588cd0,_LAB_2c588c98);
  uVar6 = _LAB_2c588ce0;
  puVar5 = _LAB_2c588cdc;
  uVar4 = _LAB_2c588cd8;
  puVar1 = _LAB_2c588cd4;
  *_LAB_2c588cdc = _LAB_2c588cd8;
  puVar5[1] = uVar6;
  puVar7 = _LAB_2c588ce8;
  puVar5 = _LAB_2c588ce4;
  *puVar1 = uVar4;
  puVar8 = _LAB_2c588cec;
  puVar1[1] = uVar3;
  uVar3 = _LAB_2c588cf0;
  *puVar5 = uVar4;
  puVar5[1] = uVar3;
  *puVar8 = uVar4;
  *puVar7 = uVar4;
  uVar3 = _LAB_2c588cf8;
  piVar2 = _LAB_2c588c94;
  puVar8[1] = _LAB_2c588cf4;
  puVar7[1] = uVar3;
  if (*piVar2 == aiStack_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

