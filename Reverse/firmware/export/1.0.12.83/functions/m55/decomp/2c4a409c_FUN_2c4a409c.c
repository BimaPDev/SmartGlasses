/* FUN_2c4a409c @ 0x2c4a409c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a409c(void)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int iStack_c;
  
  iStack_c = *_LAB_2c4a4154;
  uStack_16 = 8;
  uStack_18 = 0x307;
  uStack_12 = 0x2706;
  uStack_14 = 0x1e;
  uStack_10 = 0x10f;
  uStack_e = 0x21;
  uStack_1b = 1;
  uStack_1a = 2;
  uStack_19 = 0xff;
  uStack_1c = 0;
  FUN_2c66b4b8(_LAB_2c4a4148,_LAB_2c4a4144,0,4,0,_LAB_2c4a4140);
  FUN_2c66ac44(_LAB_2c4a414c,_LAB_2c4a4148);
  FUN_2c4a3a9c(&uStack_18,&uStack_1c);
  uStack_20 = _LAB_2c4a4150;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_2c4a3c38(&uStack_38);
  if (*_LAB_2c4a4154 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

