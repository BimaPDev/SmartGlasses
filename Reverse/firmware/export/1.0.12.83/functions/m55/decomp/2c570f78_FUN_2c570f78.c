/* FUN_2c570f78 @ 0x2c570f78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c570f78(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
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
  
  puVar1 = _LAB_2c571084;
  aiStack_14[0] = *_LAB_2c571088;
  FUN_2c64c9c4(_LAB_2c571084,_LAB_2c571090,_LAB_2c57108c,0);
  uStack_58 = _LAB_2c571098;
  *puVar1 = _LAB_2c571094;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = _LAB_2c57109c;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uVar3 = _LAB_2c5710a4;
  uStack_54 = 2;
  uStack_4c = 3;
  uStack_48 = _LAB_2c5710a0;
  uStack_44 = 4;
  uStack_40 = _LAB_2c5710a8;
  uStack_38 = _LAB_2c5710ac;
  uStack_34 = 5;
  uStack_30 = _LAB_2c5710b0;
  uStack_2c = 6;
  uStack_28 = _LAB_2c5710b4;
  uStack_24 = 7;
  uStack_20 = _LAB_2c5710b8;
  uStack_1c = 8;
  uStack_18 = _LAB_2c5710bc;
  FUN_2c4fd9cc(_LAB_2c5710c0,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c5710c0,_LAB_2c5710c4,_LAB_2c57108c);
  uVar5 = _LAB_2c5710d4;
  puVar4 = _LAB_2c5710d0;
  puVar1 = _LAB_2c5710cc;
  _LAB_2c5710cc[1] = _LAB_2c5710c8;
  puVar4[1] = uVar3;
  uVar3 = _LAB_2c5710dc;
  puVar6 = _LAB_2c5710d8;
  *puVar1 = uVar5;
  *puVar4 = uVar5;
  puVar4 = _LAB_2c5710e4;
  puVar1 = _LAB_2c5710e0;
  *puVar6 = uVar5;
  puVar6[1] = uVar3;
  uVar7 = _LAB_2c5710ec;
  uVar3 = _LAB_2c5710e8;
  *puVar1 = uVar5;
  puVar1[1] = uVar3;
  *puVar4 = uVar5;
  puVar4[1] = uVar7;
  puVar6 = _LAB_2c5710f8;
  puVar4 = _LAB_2c5710f4;
  puVar1 = _LAB_2c5710f0;
  *_LAB_2c5710f4 = uVar5;
  *puVar1 = uVar5;
  *puVar6 = uVar5;
  uVar3 = _LAB_2c571100;
  puVar1[1] = _LAB_2c5710fc;
  uVar5 = _LAB_2c571104;
  piVar2 = _LAB_2c571088;
  puVar4[1] = uVar3;
  puVar6[1] = uVar5;
  if (*piVar2 == aiStack_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

