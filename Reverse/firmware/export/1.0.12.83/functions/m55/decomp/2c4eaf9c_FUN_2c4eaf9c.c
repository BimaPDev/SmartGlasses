/* FUN_2c4eaf9c @ 0x2c4eaf9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4eaf9c(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uStack_4c;
  undefined1 auStack_48 [60];
  int iStack_c;
  
  piVar2 = _LAB_2c4eb020;
  iStack_c = *_LAB_2c4eb01c;
  uStack_4c = 0;
  FUN_2c674268(auStack_48,0,0x3c,0);
  iVar3 = FUN_2c4e9354();
  (**(code **)(iVar3 + 0x5c))(4,&uStack_4c,0x40);
  if (*piVar2 != 0) {
    FUN_2c4eaf30(_LAB_2c4eb024,&uStack_4c);
  }
  FUN_2c674268(&uStack_4c,0,0x40);
  iVar3 = FUN_2c4e9354();
  (**(code **)(iVar3 + 0x5c))(3,&uStack_4c,0x40);
  if (*piVar2 != 0) {
    FUN_2c4eaf30(_LAB_2c4eb028,&uStack_4c);
  }
  *_LAB_2c4eb02c = 1;
  uVar4 = FUN_2c646854();
  if (*_LAB_2c4eb01c == iStack_c) {
    func_0x2c643a90();
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getCurrentExceptionNumber();
      uVar5 = uVar5 & 0x1ff;
    }
    if (uVar5 == 0) {
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
          return uVar4;
        }
      }
    }
    FUN_2c643a14(uVar4,0xfffffffa);
    return 0xfffffffa;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

