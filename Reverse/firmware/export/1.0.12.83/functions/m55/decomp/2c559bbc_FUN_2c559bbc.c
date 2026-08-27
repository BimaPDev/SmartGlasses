/* FUN_2c559bbc @ 0x2c559bbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c559bbc(undefined4 param_1)

{
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int aiStack_14 [2];
  
  aiStack_14[0] = *_LAB_2c559c24;
  uStack_30 = _LAB_2c559c28;
  uStack_2c = 1;
  uStack_34 = 0;
  uStack_28 = _LAB_2c559c2c;
  uStack_24 = 2;
  uStack_20 = _LAB_2c559c30;
  uStack_1c = 3;
  uStack_18 = _LAB_2c559c34;
  FUN_2c4fd9cc(param_1,&uStack_34,aiStack_14,0,auStack_44,auStack_38,auStack_3c,auStack_48,
               auStack_40,auStack_4c);
  if (*_LAB_2c559c24 == aiStack_14[0]) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

