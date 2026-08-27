/* FUN_2c579c38 @ 0x2c579c38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c579c38(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
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
  
  puVar1 = _LAB_2c579d1c;
  aiStack_14[0] = *_LAB_2c579d20;
  FUN_2c64c9c4(_LAB_2c579d1c,_LAB_2c579d28,_LAB_2c579d24,0);
  uVar3 = _LAB_2c579d2c;
  puVar1[2] = 0;
  *puVar1 = uVar3;
  puVar1[7] = puVar1 + 9;
  puVar1[1] = puVar1 + 3;
  uStack_58 = _LAB_2c579d30;
  puVar1[0xd] = puVar1 + 0xf;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  uStack_3c = 0;
  uStack_5c = 1;
  uStack_54 = 2;
  uStack_50 = _LAB_2c579d34;
  uStack_4c = 3;
  uStack_48 = _LAB_2c579d38;
  uStack_44 = 4;
  uStack_40 = _LAB_2c579d3c;
  uStack_38 = _LAB_2c579d40;
  uStack_34 = 5;
  uStack_30 = _LAB_2c579d44;
  uStack_2c = 6;
  uStack_28 = _LAB_2c579d48;
  uStack_24 = 7;
  uStack_20 = _LAB_2c579d4c;
  uStack_1c = 8;
  uStack_18 = _LAB_2c579d50;
  FUN_2c4fd9cc(_LAB_2c579d54,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c579d54,_LAB_2c579d58,_LAB_2c579d24);
  piVar2 = _LAB_2c579d5c;
  piVar4 = _LAB_2c579d5c + 2;
  _LAB_2c579d5c[1] = 0;
  *(undefined1 *)(piVar2 + 2) = 0;
  *piVar2 = (int)piVar4;
  if (*_LAB_2c579d20 == aiStack_14[0]) {
    if (DAT_2c6685dc == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_2c66ee38(2,_LAB_2c579d60,piVar2,_LAB_2c579d24);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

