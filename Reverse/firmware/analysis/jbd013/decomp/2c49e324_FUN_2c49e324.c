/* FUN_2c49e324 @ 0x2c49e324 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c49e324(undefined4 param_1,undefined1 param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 unaff_lr;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  puVar2 = _LAB_2c49e3a8;
  iStack_c = *_LAB_2c49e3a4;
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = isIRQinterruptsEnabled();
  }
  if ((uVar3 & 1) == 0) {
    *_LAB_2c49e3a8 = 0x2c49e348;
    puVar2[1] = unaff_lr;
    disableIRQinterrupts();
  }
  if (param_3 == 1) {
    uStack_14._0_1_ = 3;
    uStack_10 = _LAB_2c49e3ac;
  }
  else {
    uStack_14._0_1_ = 0;
    uStack_10 = 0;
  }
  uStack_14._0_2_ = CONCAT11(1,(undefined1)uStack_14);
  uStack_14 = (uint)CONCAT12(param_2,(undefined2)uStack_14);
  FUN_2c4c0370(param_1,&uStack_14);
  if ((uVar3 & 1) == 0) {
    *_LAB_2c49e3a8 = 0xffffffff;
    enableIRQinterrupts();
  }
  if (*_LAB_2c49e3a4 == iStack_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

