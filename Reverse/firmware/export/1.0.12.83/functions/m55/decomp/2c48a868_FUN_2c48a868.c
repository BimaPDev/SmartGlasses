/* FUN_2c48a868 @ 0x2c48a868 */

/* WARNING: Removing unreachable block (ram,0x2c497322) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48a868(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  FUN_2c48a608();
  puVar2 = _LAB_2c497354;
  iVar8 = _LAB_2c48a878;
  if (_LAB_2c48a878 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x87,_LAB_2c497368,_LAB_2c497364,_LAB_2c497374);
  }
  if (*_LAB_2c497350 != '\0') {
    puVar4 = (undefined1 *)FUN_2c669578(8);
    puVar3 = _LAB_2c497378;
    *puVar4 = 2;
    *(int *)(puVar4 + 4) = iVar8;
    FUN_2c644044(*puVar2,0xffffffff);
    iVar5 = FUN_2c4858f0(*puVar3,_LAB_2c497358,puVar4);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x96,_LAB_2c497368,_LAB_2c497364,_LAB_2c497360,_LAB_2c49735c,2,iVar8);
    }
    FUN_2c4857c8(*puVar3,puVar4);
    uVar6 = *puVar2;
    FUN_2c643b2c();
    uVar7 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar7 = getCurrentExceptionNumber();
      uVar7 = uVar7 & 0x1ff;
    }
    if (uVar7 == 0) {
      iVar8 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar8 = isIRQinterruptsEnabled();
      }
      if (iVar8 == 0) {
        iVar8 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          iVar8 = getBasePriority();
        }
        if (iVar8 == 0) {
          software_interrupt(0);
          return uVar6;
        }
      }
    }
    FUN_2c643b08(uVar6,0xfffffffa);
    return 0xfffffffa;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x8c,_LAB_2c497368,_LAB_2c497364,_LAB_2c49736c);
}

