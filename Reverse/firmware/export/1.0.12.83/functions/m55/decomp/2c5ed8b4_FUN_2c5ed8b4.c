/* FUN_2c5ed8b4 @ 0x2c5ed8b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ed8b4(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  
  puVar2 = _LAB_2c5ed940;
  FUN_2c644044(*_LAB_2c5ed940,0xffffffff);
  iVar7 = _LAB_2c5ed944;
  uVar5 = (uint)*(byte *)(_LAB_2c5ed944 + 0x3a1);
  if (*(byte *)(_LAB_2c5ed944 + 0x3a0) != uVar5) {
    iVar4 = _LAB_2c5ed944 + 0x2e0;
    *(byte *)(_LAB_2c5ed944 + 0x3a1) = *(byte *)(_LAB_2c5ed944 + 0x3a1) + 1 & 0xf;
    pcVar6 = *(code **)(iVar4 + uVar5 * 0xc);
    iVar4 = iVar4 + uVar5 * 0xc;
    if (pcVar6 == _LAB_2c5ed948) {
      FUN_2c5ec60c(*(undefined4 *)(iVar4 + 4));
      uVar3 = *puVar2;
      goto FUN_2c644080;
    }
    if (*(int *)(iVar7 + 0x3b0) != *(int *)(iVar4 + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5ed954,0x1a9,_LAB_2c5ed94c,_LAB_2c5ed950,_LAB_2c5ed94c,
                   *(int *)(iVar4 + 8));
    }
    (*pcVar6)(*(undefined4 *)(iVar4 + 4));
  }
  uVar3 = *puVar2;
FUN_2c644080:
  FUN_2c643b2c();
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getCurrentExceptionNumber();
    uVar5 = uVar5 & 0x1ff;
  }
  if (uVar5 == 0) {
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
        return uVar3;
      }
    }
  }
  FUN_2c643b08(uVar3,0xfffffffa);
  return 0xfffffffa;
}

