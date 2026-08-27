/* FUN_2c4eaf30 @ 0x2c4eaf30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4eaf30(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  puVar4 = (undefined4 *)func_0x2c4f00f0(0x54);
  if (puVar4 == (undefined4 *)0x0) {
    uStack_18 = _LAB_2c4eaf90;
                    /* WARNING: Subroutine does not return */
    TRACE(1,0xab,_LAB_2c4eaf98,_LAB_2c4eaf94);
  }
  *puVar4 = *_LAB_2c4eaf84;
  FUN_2c66b450(puVar4 + 1,0x10,_LAB_2c4eaf88,param_1);
  FUN_2c66b450(puVar4 + 5,0x40,_LAB_2c4eaf88,param_2);
  piVar3 = _LAB_2c4ec20c;
  uVar2 = _LAB_2c4eaf8c;
  iStack_14 = *_LAB_2c4ec208;
  iVar5 = *_LAB_2c4ec20c;
  if (iVar5 == 0) {
    uStack_24 = *_LAB_2c4ec210;
    uStack_20 = _LAB_2c4ec210[1];
    uStack_1c = _LAB_2c4ec210[2];
    uStack_18 = _LAB_2c4ec210[3];
    iVar5 = FUN_2c643fdc(&uStack_24);
    *piVar3 = iVar5;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x26,_LAB_2c4ec21c,_LAB_2c4ec218,_LAB_2c4ec214);
    }
  }
  FUN_2c644044(iVar5,0xffffffff);
  func_0x2c4ec0e8(uVar2,0,puVar4);
  iVar5 = *piVar3;
  if (iVar5 == 0) {
    if (*_LAB_2c4ec208 == iStack_14) {
      return 0;
    }
  }
  else if (*_LAB_2c4ec208 == iStack_14) {
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
          return iVar5;
        }
      }
    }
    FUN_2c643b08(iVar5,0xfffffffa);
    return -6;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

