/* FUN_2c47a218 @ 0x2c47a218 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c47a218(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  code *pcVar9;
  uint uVar10;
  
  *(undefined1 *)(_LAB_2c47a288 + param_2) = 0;
  puVar6 = _LAB_2c47a294;
  puVar8 = _LAB_2c47a290;
  iVar7 = _LAB_2c47a28c;
  if (param_2 == 1) {
    FUN_2c644958(*_LAB_2c47a290);
    pcVar9 = *(code **)(iVar7 + 4);
    *puVar8 = 0;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(param_1);
      *(undefined4 *)(iVar7 + 4) = 0;
    }
    iVar7 = 0;
    if ((*_LAB_2c47cd34 != 0) && (iVar7 = FUN_2c485770(), puVar8 = DAT_2c47cbf0, iVar7 == 0)) {
      puVar6 = (undefined4 *)FUN_2c4857a8(*DAT_2c47cbf0);
      if (((*(char *)(puVar6 + 3) == '\0') && (iVar7 = FUN_2c47c54c(), iVar7 == 0)) ||
         (iVar7 = FUN_2c47c4c8(), iVar7 != 1)) {
        iVar7 = FUN_2c47a63c();
        if (iVar7 == 0) {
          iVar7 = FUN_2c47cb44(puVar6);
          return iVar7;
        }
      }
      else {
        iVar7 = FUN_2c47c4e0();
        puVar2 = DAT_2c47cbf4;
        if (iVar7 == 0) {
          FUN_2c47c284(*puVar6,*(undefined2 *)(puVar6 + 1),puVar6[2]);
          FUN_2c644044(*puVar2,0xffffffff);
          FUN_2c485820(*puVar8,puVar6);
          iVar7 = FUN_2c644080(*puVar2);
          return iVar7;
        }
      }
      return iVar7;
    }
    return iVar7;
  }
  if (param_2 == 2) {
    FUN_2c644958(*_LAB_2c47a294);
    pcVar9 = *(code **)(iVar7 + 8);
    *puVar6 = 0;
    if (pcVar9 == (code *)0x0) goto LAB_2c47a27e;
  }
  else {
    pcVar9 = *(code **)(_LAB_2c47a28c + param_2 * 4);
    if (pcVar9 == (code *)0x0) {
      return param_1;
    }
  }
  iVar5 = (*pcVar9)(param_1);
  *(undefined4 *)(iVar7 + param_2 * 4) = 0;
  if (param_2 != 2) {
    return iVar5;
  }
LAB_2c47a27e:
  iVar7 = func_0x2c47a648();
  piVar3 = _LAB_2c47cdb0;
  if (iVar7 != 0) {
    return iVar7;
  }
  if ((*_LAB_2c47cdb0 != 0) && (iVar7 = FUN_2c485770(), iVar7 == 0)) {
    puVar8 = (undefined4 *)FUN_2c4857a8(*piVar3);
    piVar4 = _LAB_2c47cdb4;
    func_0x2c47a5a0(8,*puVar8,*(undefined2 *)(puVar8 + 1),0,puVar8[2]);
    FUN_2c644044(*piVar4,0xffffffff);
    FUN_2c485820(*piVar3,puVar8);
    iVar7 = *piVar4;
    FUN_2c643b2c();
    uVar10 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar10 = getCurrentExceptionNumber();
      uVar10 = uVar10 & 0x1ff;
    }
    if (uVar10 == 0) {
      iVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar5 = isIRQinterruptsEnabled();
      }
      if (iVar5 == 0) {
        iVar5 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          iVar5 = getBasePriority();
        }
        if (iVar5 == 0) {
          software_interrupt(0);
          return iVar7;
        }
      }
    }
    FUN_2c643b08(iVar7,0xfffffffa);
    return -6;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x12e,_LAB_2c47cdc4,_LAB_2c47cdc0,_LAB_2c47cdb8,_LAB_2c47cdbc);
}

