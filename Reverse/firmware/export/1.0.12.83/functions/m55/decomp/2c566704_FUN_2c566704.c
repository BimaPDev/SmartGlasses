/* FUN_2c566704 @ 0x2c566704 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c566704(void)

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
  
  puVar1 = _LAB_2c566818;
  aiStack_14[0] = *_LAB_2c56681c;
  FUN_2c64c9c4(_LAB_2c566818,_LAB_2c566824,_LAB_2c566820,0);
  uStack_58 = _LAB_2c56682c;
  *puVar1 = _LAB_2c566828;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[0xd] = puVar1 + 0xf;
  uStack_50 = _LAB_2c566830;
  uStack_5c = 1;
  uStack_3c = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  uStack_54 = 2;
  uStack_4c = 3;
  uStack_48 = _LAB_2c566834;
  uStack_44 = 4;
  uStack_40 = _LAB_2c566838;
  uStack_38 = _LAB_2c56683c;
  uStack_34 = 5;
  uStack_30 = _LAB_2c566840;
  uStack_2c = 6;
  uStack_28 = _LAB_2c566844;
  uStack_24 = 7;
  uStack_20 = _LAB_2c566848;
  uStack_1c = 8;
  uStack_18 = _LAB_2c56684c;
  FUN_2c4fd9cc(_LAB_2c566850,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  FUN_2c64c9c4(_LAB_2c566850,_LAB_2c566854,_LAB_2c566820);
  FUN_2c560c44(_LAB_2c56685c,_LAB_2c566858);
  FUN_2c64c9c4(_LAB_2c56685c,_LAB_2c566860,_LAB_2c566820);
  FUN_2c560c44(_LAB_2c566868,_LAB_2c566864);
  FUN_2c64c9c4(_LAB_2c566868,_LAB_2c566860,_LAB_2c566820);
  FUN_2c560c44(_LAB_2c566870,_LAB_2c56686c);
  FUN_2c64c9c4(_LAB_2c566870,_LAB_2c566860,_LAB_2c566820);
  FUN_2c560c44(_LAB_2c566878,_LAB_2c566874);
  if (*_LAB_2c56681c == aiStack_14[0]) {
    if (DAT_2c6685dc == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_2c66ee38(2,_LAB_2c566860,_LAB_2c566878,_LAB_2c566820);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

