/* FUN_2c587eac @ 0x2c587eac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c587eac(void)

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
  
  puVar1 = _LAB_2c587f98;
  aiStack_14[0] = *DAT_2c587f9c;
  FUN_2c64c9c4(_LAB_2c587f98,_LAB_2c587fa4,DAT_2c587fa0,0);
  uStack_58 = _LAB_2c587fac;
  *puVar1 = _LAB_2c587fa8;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = DAT_2c587fb0;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uVar3 = DAT_2c587fb8;
  uStack_54 = 2;
  uStack_4c = 3;
  uStack_48 = DAT_2c587fb4;
  uStack_44 = 4;
  uStack_40 = DAT_2c587fbc;
  uStack_38 = DAT_2c587fc0;
  uStack_34 = 5;
  uStack_30 = DAT_2c587fc4;
  uStack_2c = 6;
  uStack_28 = DAT_2c587fc8;
  uStack_24 = 7;
  uStack_20 = LAB_2c587fcc;
  uStack_1c = 8;
  uStack_18 = DAT_2c587fd0;
  FUN_2c4fd9cc(DAT_2c587fd4,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(DAT_2c587fd4,DAT_2c587fd8,DAT_2c587fa0);
  puVar6 = DAT_2c587fe8;
  puVar1 = DAT_2c587fe4;
  uVar5 = DAT_2c587fe0;
  uVar4 = DAT_2c587fdc;
  *DAT_2c587fe4 = DAT_2c587fe0;
  puVar1[1] = uVar4;
  puVar7 = DAT_2c587ff0;
  puVar1 = DAT_2c587fec;
  *DAT_2c587fec = uVar5;
  *puVar6 = uVar5;
  *puVar7 = uVar5;
  uVar4 = DAT_2c587ff8;
  puVar6[1] = DAT_2c587ff4;
  piVar2 = DAT_2c587f9c;
  puVar1[1] = uVar3;
  puVar7[1] = uVar4;
  if (*piVar2 == aiStack_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

