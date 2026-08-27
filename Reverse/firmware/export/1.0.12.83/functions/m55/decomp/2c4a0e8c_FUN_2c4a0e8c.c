/* FUN_2c4a0e8c @ 0x2c4a0e8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a0e8c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  
  uStack_1c = *_LAB_2c4a0f34;
  if (param_1 == 0) {
    uStack_28 = 400;
    iVar1 = FUN_2c4a05cc(0xd0,400,param_3,0);
    if (iVar1 != 0) {
      uStack_1e = 0;
      uStack_24 = 0xd000;
      uStack_22 = (undefined2)_LAB_2c4a0f44;
      uStack_20 = (undefined2)((uint)_LAB_2c4a0f44 >> 0x10);
      iVar1 = FUN_2c4bd438(0,0x28,&uStack_24,6);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x20d,DAT_2c4a0f40,DAT_2c4a0f3c,_LAB_2c4a0f48,0,0xd0,iVar1);
      }
    }
  }
  else {
    uStack_28 = 0xf0;
    iVar1 = FUN_2c4a05cc(0xd0,0xf0,param_3,0);
    if (iVar1 != 0) {
      FUN_2c4a05cc(0xd0,0xf0);
    }
  }
  FUN_2c4a09bc(0xd0,&uStack_28);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x2cc,DAT_2c4a0f40,DAT_2c4a0f3c,DAT_2c4a0f38,uStack_28);
}

