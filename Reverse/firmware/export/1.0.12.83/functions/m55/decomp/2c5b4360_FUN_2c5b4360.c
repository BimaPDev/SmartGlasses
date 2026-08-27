/* FUN_2c5b4360 @ 0x2c5b4360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5b4360(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
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
  
  puVar1 = _LAB_2c5b442c;
  aiStack_14[0] = *_LAB_2c5b4430;
  FUN_2c64c9c4(_LAB_2c5b442c,_LAB_2c5b4438,_LAB_2c5b4434,0);
  uStack_58 = _LAB_2c5b4440;
  *puVar1 = _LAB_2c5b443c;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  puVar1[0xd] = puVar1 + 0xf;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uStack_54 = 2;
  uStack_50 = _LAB_2c5b4444;
  uStack_4c = 3;
  uStack_48 = _LAB_2c5b4448;
  uStack_44 = 4;
  uStack_40 = _LAB_2c5b444c;
  uStack_38 = _LAB_2c5b4450;
  uStack_34 = 5;
  uStack_30 = _LAB_2c5b4454;
  uStack_2c = 6;
  uStack_28 = _LAB_2c5b4458;
  uStack_24 = 7;
  uStack_20 = _LAB_2c5b445c;
  uStack_1c = 8;
  uStack_18 = _LAB_2c5b4460;
  FUN_2c4fd9cc(_LAB_2c5b4464,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  if (*_LAB_2c5b4430 == aiStack_14[0]) {
    if (DAT_2c6685dc == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_2c66ee38(2,_LAB_2c5b4468,_LAB_2c5b4464,_LAB_2c5b4434);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

