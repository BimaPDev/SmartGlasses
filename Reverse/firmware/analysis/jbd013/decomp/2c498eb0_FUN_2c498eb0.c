/* FUN_2c498eb0 @ 0x2c498eb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c498eb0(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 extraout_r1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = *_LAB_2c498f20;
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  if (uVar2 == 0) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = isIRQinterruptsEnabled();
    }
    if (iVar3 == 0) {
      iVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar3 = getBasePriority();
      }
      if (iVar3 == 0) {
        software_interrupt(0);
        bVar1 = param_1 == 0;
        goto LAB_2c498ef2;
      }
    }
  }
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_2c497824(0,&uStack_1c,0x10);
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_2c497824(1,&uStack_1c,0x10);
  bVar1 = true;
  param_2 = extraout_r1;
LAB_2c498ef2:
  if ((*_LAB_2c498f20 ^ uStack_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(bVar1,param_2,*_LAB_2c498f20 ^ uStack_c,0);
}

