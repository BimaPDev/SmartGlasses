/* FUN_2c4f6ee4 @ 0x2c4f6ee4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f6ee4(int *param_1,uint param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  
  puVar4 = _LAB_2c4f6ee0;
  puVar3 = _LAB_2c4f6ec8;
  if ((param_1 == (int *)0x0) || (param_2 < 0xe)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xee,_LAB_2c4f7000,_LAB_2c4f6ffc,_LAB_2c4f7004,_LAB_2c4f6ff8);
  }
  if ((((*param_1 == _LAB_2c4f6ff0) && (param_1[1] == _LAB_2c4f6ff0 + -0xa040819)) &&
      (param_1[2] == _LAB_2c4f6ff0 + -0x3d42fd46)) && ((char)param_1[3] == '\0')) {
    cVar5 = '\x02';
  }
  else {
    if (((*param_1 != _LAB_2c4f6ff0) || (param_1[1] != _LAB_2c4f7008)) ||
       ((param_1[2] != _LAB_2c4f7008 + 0x333ef4d3 || ((char)param_1[3] != '\0')))) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x103,_LAB_2c4f7000,_LAB_2c4f6ffc,_LAB_2c4f6ff4,_LAB_2c4f6ff8);
    }
    cVar5 = '\x01';
  }
  uVar1 = *(undefined1 *)((int)param_1 + 0xd);
  if (param_2 == 0xe) {
    uVar9 = 0;
    uVar11 = uVar9;
  }
  else {
    uVar9 = (int)param_1 + 0xe;
    uVar11 = param_2 - 0xe & 0xffff;
  }
  if (*_LAB_2c4f6fec == *_LAB_2c4f6fec) {
    if (0xfd < (byte)(cVar5 - 1U)) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xc4,_LAB_2c4f6ed8,_LAB_2c4f6ed4,_LAB_2c4f6edc,cVar5,_LAB_2c4f6ed8,0xc4);
    }
    if (*_LAB_2c4f6ec4 != '\0') {
      FUN_2c644044(*_LAB_2c4f6ee0,0xffffffff);
      for (iVar6 = FUN_2c485890(*puVar3); iVar7 = FUN_2c4858a8(*puVar3), iVar6 != iVar7;
          iVar6 = FUN_2c4858c0(iVar6)) {
        if ((**(char **)(iVar6 + 4) == cVar5) &&
           (pcVar10 = *(code **)(*(char **)(iVar6 + 4) + 4), pcVar10 != (code *)0x0)) {
          (*pcVar10)(uVar1,uVar9,uVar11);
        }
      }
      uVar8 = *puVar4;
      FUN_2c643b2c();
      uVar11 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar11 = getCurrentExceptionNumber();
        uVar11 = uVar11 & 0x1ff;
      }
      if (uVar11 == 0) {
        iVar6 = 0;
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          iVar6 = isIRQinterruptsEnabled();
        }
        if (iVar6 == 0) {
          iVar6 = 0;
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            iVar6 = getBasePriority();
          }
          if (iVar6 == 0) {
            software_interrupt(0);
            return uVar8;
          }
        }
      }
      FUN_2c643b08(uVar8,0xfffffffa);
      return 0xfffffffa;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xcc,_LAB_2c4f6ed8,_LAB_2c4f6ed4,_LAB_2c4f6ed0,_LAB_2c4f6ecc);
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

