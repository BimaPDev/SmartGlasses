/* FUN_2c48e96c @ 0x2c48e96c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c48e96c(undefined4 param_1,uint param_2)

{
  int *piVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  
  piVar1 = _DAT_2c48e9dc;
  uStack_14 = *_LAB_2c48e9d4;
  uStack_28 = 0;
  uStack_1c = 0;
  uStack_2c = _DAT_2c48e9d0;
  uStack_18 = 0xf0;
  uStack_24 = 0;
  uStack_20 = _LAB_2c48e9d8;
  uStack_30 = param_1;
  func_0x2c4fb048(2,&uStack_30);
  uVar2 = extraout_r1;
  if (*piVar1 == 200) {
    func_0x2c4fb47c(2,0,0,0,1);
    *piVar1 = 0;
    uVar2 = extraout_r1_00;
  }
  if ((*_LAB_2c48e9d4 ^ uStack_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(param_2 & 0xfffffffe,uVar2,*_LAB_2c48e9d4 ^ uStack_14,0);
}

