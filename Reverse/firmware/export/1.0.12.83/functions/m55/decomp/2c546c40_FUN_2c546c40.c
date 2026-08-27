/* FUN_2c546c40 @ 0x2c546c40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c546c40(void)

{
  undefined4 uVar1;
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
  
  uStack_5c = 1;
  aiStack_14[0] = *_LAB_2c546ce0;
  uStack_58 = _LAB_2c546cdc;
  uStack_3c = 0;
  uStack_54 = 2;
  uStack_50 = _LAB_2c546ce4;
  uStack_4c = 3;
  uStack_48 = _LAB_2c546ce8;
  uStack_44 = 4;
  uStack_40 = _LAB_2c546cec;
  uStack_38 = _LAB_2c546cf0;
  uStack_34 = 5;
  uStack_30 = _LAB_2c546cf4;
  uStack_2c = 6;
  uStack_28 = _LAB_2c546cf8;
  uStack_24 = 7;
  uStack_20 = _LAB_2c546cfc;
  uStack_1c = 8;
  uStack_18 = _LAB_2c546d00;
  FUN_2c4fd9cc(_LAB_2c546d04,&uStack_5c,aiStack_14,0,auStack_6c,auStack_60,auStack_64,auStack_70,
               auStack_68,auStack_74);
  if (*_LAB_2c546ce0 == aiStack_14[0]) {
    if (DAT_2c6685dc == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_2c66ee38(2,_LAB_2c546d0c,_LAB_2c546d04,_LAB_2c546d08);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

