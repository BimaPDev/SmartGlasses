/* FUN_2c587a04 @ 0x2c587a04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c587a04(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
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
  
  puVar1 = _LAB_2c587ae8;
  aiStack_14[0] = *_LAB_2c587aec;
  FUN_2c64c9c4(_LAB_2c587ae8,_LAB_2c587af4,_LAB_2c587af0,0);
  uStack_58 = _LAB_2c587afc;
  *puVar1 = _LAB_2c587af8;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = _LAB_2c587b00;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uStack_54 = 2;
  uStack_4c = 3;
  uStack_48 = _LAB_2c587b04;
  uStack_44 = 4;
  uStack_40 = _LAB_2c587b08;
  uStack_38 = _LAB_2c587b0c;
  uStack_34 = 5;
  uStack_30 = _LAB_2c587b10;
  uStack_2c = 6;
  uStack_28 = _LAB_2c587b14;
  uStack_24 = 7;
  uStack_20 = _LAB_2c587b18;
  uStack_1c = 8;
  uStack_18 = _LAB_2c587b1c;
  FUN_2c4fd9cc(_LAB_2c587b20,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c587b20,_LAB_2c587b24,_LAB_2c587af0);
  puVar6 = _LAB_2c587b38;
  puVar5 = _LAB_2c587b34;
  puVar1 = _LAB_2c587b30;
  uVar4 = _LAB_2c587b2c;
  uVar3 = _LAB_2c587b28;
  *_LAB_2c587b30 = _LAB_2c587b2c;
  puVar1[1] = uVar3;
  *puVar6 = uVar4;
  *puVar5 = uVar4;
  uVar3 = _LAB_2c587b40;
  piVar2 = _LAB_2c587aec;
  puVar6[1] = _LAB_2c587b3c;
  puVar5[1] = uVar3;
  if (*piVar2 == aiStack_14[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

