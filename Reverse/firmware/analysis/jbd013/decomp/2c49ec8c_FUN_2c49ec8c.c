/* FUN_2c49ec8c @ 0x2c49ec8c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49ec8c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_14;
  
  puVar2 = &uStack_14;
  uVar1 = 0;
  uStack_14 = param_4;
  if (unaff_r4 != 1) {
    iStack_1c = unaff_r4 + -2;
    puVar2 = &uStack_34;
    uStack_20 = *_LAB_2c49ed10;
    uStack_24 = 0;
    iStack_28 = FUN_2c49e3b0(0x40,&uStack_24,0);
    if (-1 < iStack_28) {
      uStack_2c = uStack_24 >> 0x10;
      uStack_30 = uStack_24;
      uStack_34 = _DAT_2c49ed14;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x490,_LAB_2c49ed1c,_LAB_2c49ed18);
    }
    param_2 = 0x48d;
    param_4 = _LAB_2c49ed18;
    uVar1 = _FUN_2c49ed20;
  }
  *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
  TRACE(4,param_2,_LAB_2c49ed1c,param_4);
}

