/* FUN_2c5731f4 @ 0x2c5731f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5731f4(void)

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
  
  puVar2 = _LAB_2c5732c8;
  uStack_5c = 1;
  aiStack_14[0] = *_LAB_2c5732c4;
  uStack_58 = _LAB_2c5732c0;
  uStack_54 = 2;
  uStack_50 = _LAB_2c5732cc;
  uStack_3c = 0;
  uStack_4c = 3;
  uStack_48 = _LAB_2c5732d0;
  uStack_44 = 4;
  uStack_40 = _LAB_2c5732d4;
  uStack_38 = _LAB_2c5732d8;
  uStack_34 = 5;
  uStack_30 = _LAB_2c5732dc;
  uStack_2c = 6;
  uStack_28 = _LAB_2c5732e0;
  uStack_24 = 7;
  uStack_20 = _LAB_2c5732e4;
  uStack_1c = 8;
  uStack_18 = _LAB_2c5732e8;
  FUN_2c4fd9cc(_LAB_2c5732ec,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c5732ec,_LAB_2c5732f4,_LAB_2c5732f0);
  FUN_2c64c9c4(puVar2,_LAB_2c5732f8,_LAB_2c5732f0);
  uVar3 = _LAB_2c5732fc;
  puVar2[2] = 0;
  *puVar2 = uVar3;
  puVar2[7] = puVar2 + 9;
  puVar2[1] = puVar2 + 3;
  piVar1 = _LAB_2c5732c4;
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

