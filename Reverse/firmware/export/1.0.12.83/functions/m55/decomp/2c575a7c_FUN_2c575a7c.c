/* FUN_2c575a7c @ 0x2c575a7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c575a7c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  
  puVar1 = _LAB_2c575b94;
  aiStack_14[0] = *_LAB_2c575b98;
  FUN_2c64c9c4(_LAB_2c575b94,_LAB_2c575ba0,_LAB_2c575b9c,0);
  uVar5 = _LAB_2c575ba8;
  *puVar1 = _LAB_2c575ba4;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  uVar3 = _LAB_2c575bb0;
  puVar2 = _LAB_2c575bac;
  *_LAB_2c575bac = uVar5;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uVar4 = _LAB_2c575bb8;
  puVar1 = _LAB_2c575bb4;
  *_LAB_2c575bb4 = uVar5;
  puVar2[1] = uVar4;
  puVar1[1] = uVar3;
  uVar4 = _LAB_2c575bc8;
  uVar3 = _LAB_2c575bc4;
  puVar2 = _LAB_2c575bc0;
  puVar1 = _LAB_2c575bbc;
  *_LAB_2c575bbc = uVar5;
  puVar1[1] = uVar3;
  *puVar2 = uVar5;
  puVar2[1] = uVar4;
  uVar4 = _LAB_2c575bd8;
  uVar3 = _LAB_2c575bd4;
  puVar2 = _LAB_2c575bd0;
  puVar1 = _LAB_2c575bcc;
  *_LAB_2c575bcc = uVar5;
  puVar1[1] = uVar3;
  *puVar2 = uVar5;
  puVar1 = _LAB_2c575bdc;
  puVar2[1] = uVar4;
  uVar3 = _LAB_2c575be0;
  *puVar1 = uVar5;
  puVar1[1] = uVar3;
  uVar4 = _LAB_2c575bf0;
  uVar3 = _LAB_2c575bec;
  puVar2 = _LAB_2c575be8;
  puVar1 = _LAB_2c575be4;
  *_LAB_2c575be4 = uVar5;
  *puVar2 = uVar5;
  puVar1[1] = uVar3;
  puVar2[1] = uVar4;
  uStack_5c = 1;
  uStack_58 = _LAB_2c575bf4;
  uStack_54 = 2;
  uStack_50 = _LAB_2c575bf8;
  uStack_4c = 3;
  uStack_44 = 4;
  uStack_40 = _LAB_2c575bfc;
  uStack_38 = _LAB_2c575c04;
  uStack_34 = 5;
  uStack_30 = _LAB_2c575c08;
  uStack_48 = _LAB_2c575c00;
  uStack_2c = 6;
  uStack_28 = _LAB_2c575c0c;
  uStack_24 = 7;
  uStack_20 = _LAB_2c575c14;
  uStack_1c = 8;
  uStack_18 = _LAB_2c575c18;
  FUN_2c4fd9cc(_LAB_2c575c10,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  if (*_LAB_2c575b98 == aiStack_14[0]) {
    if (DAT_2c6685dc == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_2c66ee38(2,_LAB_2c575c1c,_LAB_2c575c10,_LAB_2c575b9c);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

