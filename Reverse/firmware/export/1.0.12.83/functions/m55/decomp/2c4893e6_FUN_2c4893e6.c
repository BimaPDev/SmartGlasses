/* FUN_2c4893e6 @ 0x2c4893e6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4893e6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  
  puVar3 = _LAB_2c4894a0;
  piVar2 = _LAB_2c48949c;
  switch(param_4) {
  case 0:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x78,_LAB_2c4894ac,_LAB_2c4894a8,_LAB_2c4894b0);
  case 3:
    param_1 = 2;
    break;
  case 7:
    param_1 = 3;
    break;
  case 0x14:
    param_1 = 4;
    break;
  case 0x15:
    param_1 = 5;
    break;
  case 0x16:
    param_1 = 6;
    break;
  case 0x17:
    param_1 = 7;
  }
  if ((*_LAB_2c489498 != '\0') && (*_LAB_2c48949c != 0)) {
    FUN_2c644044(*_LAB_2c4894a0,0xffffffff);
    for (iVar4 = FUN_2c485890(*piVar2); iVar5 = FUN_2c4858a8(*piVar2), iVar4 != iVar5;
        iVar4 = FUN_2c4858c0(iVar4)) {
      if (((iVar4 != 0) && (*(undefined4 **)(iVar4 + 4) != (undefined4 *)0x0)) &&
         (pcVar7 = (code *)**(undefined4 **)(iVar4 + 4), pcVar7 != (code *)0x0)) {
        (*pcVar7)(param_1);
      }
    }
    uVar6 = *puVar3;
    FUN_2c643b2c();
    uVar8 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar8 = getCurrentExceptionNumber();
      uVar8 = uVar8 & 0x1ff;
    }
    if (uVar8 == 0) {
      iVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar4 = isIRQinterruptsEnabled();
      }
      if (iVar4 == 0) {
        iVar4 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          iVar4 = getBasePriority();
        }
        if (iVar4 == 0) {
          software_interrupt(0);
          return uVar6;
        }
      }
    }
    FUN_2c643b08(uVar6,0xfffffffa);
    return 0xfffffffa;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x42,_LAB_2c4894ac,_LAB_2c4894a8,_LAB_2c4894a4);
}

