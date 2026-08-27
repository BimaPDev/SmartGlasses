/* FUN_2c559c38 @ 0x2c559c38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c559c38(undefined4 param_1)

{
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
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
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_70 = _LAB_2c559ce8;
  iStack_c = *_LAB_2c559cf0;
  uStack_6c = 1;
  uStack_74 = 0;
  uStack_68 = _LAB_2c559cec;
  uStack_64 = 2;
  uStack_60 = _LAB_2c559cf4;
  uStack_5c = 3;
  uStack_58 = _LAB_2c559cf8;
  uStack_54 = 4;
  uStack_50 = _LAB_2c559cfc;
  uStack_4c = 5;
  uStack_48 = _LAB_2c559d00;
  uStack_44 = 6;
  uStack_40 = _LAB_2c559d04;
  uStack_3c = 7;
  uStack_38 = _LAB_2c559d08;
  uStack_34 = 8;
  uStack_30 = _LAB_2c559d0c;
  uStack_2c = 9;
  uStack_28 = _LAB_2c559d10;
  uStack_24 = 10;
  uStack_20 = _LAB_2c559d14;
  uStack_1c = 0xb;
  uStack_18 = _LAB_2c559d18;
  uStack_14 = 0xc;
  uStack_10 = _LAB_2c559d1c;
  FUN_2c4fd9cc(param_1,&uStack_74,&iStack_c,0,auStack_84,auStack_78,auStack_7c,auStack_88,auStack_80
               ,auStack_8c);
  if (*_LAB_2c559cf0 == iStack_c) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

