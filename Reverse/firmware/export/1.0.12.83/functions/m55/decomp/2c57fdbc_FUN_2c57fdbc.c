/* FUN_2c57fdbc @ 0x2c57fdbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c57fdbc(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
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
  
  puVar2 = _LAB_2c57fe90;
  uStack_5c = 1;
  aiStack_14[0] = *DAT_2c57fe8c;
  uStack_58 = _LAB_2c57fe88;
  uStack_54 = 2;
  uStack_50 = _LAB_2c57fe94;
  uStack_3c = 0;
  uStack_4c = 3;
  uStack_48 = _LAB_2c57fe98;
  uStack_44 = 4;
  uStack_40 = _LAB_2c57fe9c;
  uStack_38 = _LAB_2c57fea0;
  uStack_34 = 5;
  uStack_30 = _LAB_2c57fea4;
  uStack_2c = 6;
  uStack_28 = _LAB_2c57fea8;
  uStack_24 = 7;
  uStack_20 = _LAB_2c57feac;
  uStack_1c = 8;
  uStack_18 = DAT_2c57feb0;
  FUN_2c4fd9cc(DAT_2c57feb4,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(DAT_2c57feb4,DAT_2c57febc,DAT_2c57feb8);
  FUN_2c64c9c4(puVar2,DAT_2c57fec0,DAT_2c57feb8);
  uVar3 = DAT_2c57fec4;
  puVar2[2] = 0;
  *puVar2 = uVar3;
  puVar2[7] = puVar2 + 9;
  puVar2[1] = puVar2 + 3;
  piVar1 = DAT_2c57fe8c;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  puVar2[0xd] = puVar2 + 0xf;
  puVar2[0xe] = 0;
  if (*piVar1 == aiStack_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

