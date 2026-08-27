/* FUN_2c5fe538 @ 0x2c5fe538 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5fe538(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_84 [45];
  undefined1 auStack_57 [67];
  int iStack_14;
  
  puVar2 = _LAB_2c5fe6b8;
  iStack_14 = *_LAB_2c5fe6bc;
  FUN_2c644044(*_LAB_2c5fe6b8,0xffffffff,param_3,0);
  piVar3 = _LAB_2c5fe6c0;
  switch(param_1) {
  case 0:
    if (*_LAB_2c5fe6c0 != 0) {
      FUN_2c644958();
      uVar4 = _LAB_2c5fe6c8;
      uVar5 = _LAB_2c5fe6c4;
      *piVar3 = 0;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xdc,_LAB_2c5fe6d0,_LAB_2c5fe6cc,uVar4,uVar5);
    }
    *_LAB_2c5fe6d4 = 3;
    FUN_2c5fe364();
    break;
  case 1:
    iVar7 = FUN_2c478b68();
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 0xbc))(auStack_84);
      iVar7 = FUN_2c66b624(auStack_57,_LAB_2c5fe6e0);
      uVar4 = _LAB_2c5fe6f8;
      uVar5 = _LAB_2c5fe6c4;
      if (iVar7 == 0) {
        *_LAB_2c5fe6d4 = 1;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xf6,_LAB_2c5fe6d0,_LAB_2c5fe6cc,uVar4,uVar5);
      }
      iVar7 = FUN_2c66b624(auStack_57,_LAB_2c5fe6e4);
      uVar4 = _LAB_2c5fe6fc;
      uVar5 = _LAB_2c5fe6c4;
      if (iVar7 == 0) {
        *_LAB_2c5fe6d4 = 0;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xf9,_LAB_2c5fe6d0,_LAB_2c5fe6cc,uVar4,uVar5);
      }
      iVar7 = FUN_2c66b624(auStack_57,_LAB_2c5fe6e8);
      uVar4 = _LAB_2c5fe6ec;
      uVar5 = _LAB_2c5fe6c4;
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x102,_LAB_2c5fe6d0,_LAB_2c5fe6cc,_LAB_2c5fe6f4,_LAB_2c5fe6c4);
      }
      *_LAB_2c5fe6d4 = 2;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xfc,_LAB_2c5fe6d0,_LAB_2c5fe6cc,uVar4,uVar5);
    }
    break;
  case 2:
    if (*_LAB_2c5fe6c0 != 0) {
      FUN_2c644958();
      uVar4 = _LAB_2c5fe6dc;
      uVar5 = _LAB_2c5fe6c4;
      *piVar3 = 0;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xe5,_LAB_2c5fe6d0,_LAB_2c5fe6cc,uVar4,uVar5);
    }
    FUN_2c5fe364();
    break;
  case 3:
    if (*_LAB_2c5fe6c0 != 0) {
      FUN_2c644958();
      uVar4 = _LAB_2c5fe6d8;
      uVar5 = _LAB_2c5fe6c4;
      *piVar3 = 0;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xed,_LAB_2c5fe6d0,_LAB_2c5fe6cc,uVar4,uVar5);
    }
  }
  if (*_LAB_2c5fe6bc != iStack_14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  uVar5 = *puVar2;
  FUN_2c643b2c();
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getCurrentExceptionNumber();
    uVar6 = uVar6 & 0x1ff;
  }
  if (uVar6 == 0) {
    iVar7 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar7 = isIRQinterruptsEnabled();
    }
    if (iVar7 == 0) {
      iVar7 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar7 = getBasePriority();
      }
      if (iVar7 == 0) {
        software_interrupt(0);
        return uVar5;
      }
    }
  }
  FUN_2c643b08(uVar5,0xfffffffa);
  return 0xfffffffa;
}

