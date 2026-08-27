/* FUN_2c493624 @ 0x2c493624 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c493624(byte *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  
  piVar2 = _LAB_2c4936cc;
  if (*_LAB_2c4936cc != 0) {
    FUN_2c644044(*_LAB_2c4936cc,3000);
  }
  if (param_1[1] != 0) {
    pcVar7 = *(code **)(_LAB_2c4936d0 + (uint)*param_1 * 0x10 + 0xc);
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)((uint)*param_1,param_1[3],*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8))
      ;
      uVar5 = *param_1 - 1 & 0xff;
      uVar3 = _LAB_2c4936e8;
      if (uVar5 < 9) {
        uVar3 = *(undefined4 *)(_LAB_2c4936d4 + uVar5 * 4);
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x11c,_LAB_2c4936e0,_LAB_2c4936dc,_LAB_2c4936d8,uVar3);
    }
  }
  if (param_1[2] != 0) {
    pcVar7 = *(code **)(_LAB_2c4936d0 + (uint)*param_1 * 0x10 + 8);
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)((uint)*param_1,param_1[3],*(undefined4 *)(param_1 + 4));
      uVar5 = *param_1 - 1 & 0xff;
      uVar3 = _LAB_2c4936e8;
      if (uVar5 < 9) {
        uVar3 = *(undefined4 *)(_LAB_2c4936d4 + uVar5 * 4);
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x122,_LAB_2c4936e0,_LAB_2c4936dc,_LAB_2c4936e4,uVar3);
    }
  }
  iVar4 = *piVar2;
  if (iVar4 == 0) {
    return 0;
  }
  FUN_2c643b2c();
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getCurrentExceptionNumber();
    uVar5 = uVar5 & 0x1ff;
  }
  if (uVar5 == 0) {
    iVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar6 = isIRQinterruptsEnabled();
    }
    if (iVar6 == 0) {
      iVar6 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar6 = getBasePriority();
      }
      if (iVar6 == 0) {
        software_interrupt(0);
        return iVar4;
      }
    }
  }
  FUN_2c643b08(iVar4,0xfffffffa);
  return -6;
}

