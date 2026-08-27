/* FUN_2c47a2b8 @ 0x2c47a2b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c47a2b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  ushort uVar13;
  uint uVar14;
  
  piVar12 = *(int **)(_LAB_2c47a364 + param_1 * 4);
  if (*_LAB_2c47a360 == 0) {
    uVar7 = (uint)*(ushort *)((int)piVar12 + 0x20e);
    uVar9 = 0x1fb;
    if (uVar7 < *(ushort *)(piVar12 + 0x83)) goto LAB_2c47a304;
  }
  else {
    uVar7 = (uint)*(ushort *)((int)piVar12 + 0x20e);
    uVar9 = (uint)(ushort)(*_LAB_2c47a360 - 5);
    if (uVar7 < *(ushort *)(piVar12 + 0x83)) {
LAB_2c47a304:
      uVar11 = uVar7 * uVar9 + uVar9;
      uVar13 = (short)uVar7 * (short)uVar9;
      uVar10 = piVar12[1];
      uVar14 = (uint)uVar13;
      uVar9 = uVar7 + 1 & 0xffff;
      if (uVar10 <= uVar11) {
        uVar11 = uVar10;
      }
      if ((uVar14 < (uVar11 & 0xffff)) && (*piVar12 != 0)) {
        *(short *)(piVar12 + 2) = (short)(uVar7 + 1);
        FUN_2c674668((int)piVar12 + 10,*piVar12 + uVar14,(uVar11 & 0xffff) - uVar14,uVar10,param_4);
        *(ushort *)(piVar12 + 0x82) = (short)uVar11 + (2 - uVar13);
        iVar5 = FUN_2c46db64();
        (**(code **)(iVar5 + 0x10))(piVar12 + 2,(short)piVar12[0x82],param_1 - 0x5fU & 0xff);
        uVar9 = (uint)(ushort)(*(short *)((int)piVar12 + 0x20e) + 1);
      }
      *(short *)((int)piVar12 + 0x20e) = (short)uVar9;
      return uVar9;
    }
  }
  (**(code **)(_LAB_2c47a36c + (uint)*(byte *)(_LAB_2c47a368 + param_1) * 4))(2,param_1);
  *(undefined1 *)(_LAB_2c47a288 + param_1) = 0;
  puVar4 = _LAB_2c47a294;
  puVar6 = _LAB_2c47a290;
  iVar5 = _LAB_2c47a28c;
  if (param_1 == 1) {
    FUN_2c644958(*_LAB_2c47a290);
    pcVar8 = *(code **)(iVar5 + 4);
    *puVar6 = 0;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(1);
      *(undefined4 *)(iVar5 + 4) = 0;
    }
    uVar7 = 0;
    if ((*_LAB_2c47cd34 != 0) && (uVar7 = FUN_2c485770(), puVar6 = DAT_2c47cbf0, uVar7 == 0)) {
      puVar4 = (undefined4 *)FUN_2c4857a8(*DAT_2c47cbf0);
      if (((*(char *)(puVar4 + 3) == '\0') && (iVar5 = FUN_2c47c54c(), iVar5 == 0)) ||
         (iVar5 = FUN_2c47c4c8(), iVar5 != 1)) {
        uVar7 = FUN_2c47a63c();
        if (uVar7 == 0) {
          uVar7 = FUN_2c47cb44(puVar4);
          return uVar7;
        }
      }
      else {
        uVar7 = FUN_2c47c4e0();
        puVar2 = DAT_2c47cbf4;
        if (uVar7 == 0) {
          FUN_2c47c284(*puVar4,*(undefined2 *)(puVar4 + 1),puVar4[2]);
          FUN_2c644044(*puVar2,0xffffffff);
          FUN_2c485820(*puVar6,puVar4);
          uVar7 = FUN_2c644080(*puVar2);
          return uVar7;
        }
      }
      return uVar7;
    }
    return uVar7;
  }
  if (param_1 == 2) {
    FUN_2c644958(*_LAB_2c47a294);
    pcVar8 = *(code **)(iVar5 + 8);
    *puVar4 = 0;
    if (pcVar8 == (code *)0x0) goto LAB_2c47a27e;
  }
  else {
    pcVar8 = *(code **)(_LAB_2c47a28c + param_1 * 4);
    if (pcVar8 == (code *)0x0) {
      return 1;
    }
  }
  uVar7 = (*pcVar8)(1);
  *(undefined4 *)(iVar5 + param_1 * 4) = 0;
  if (param_1 != 2) {
    return uVar7;
  }
LAB_2c47a27e:
  uVar7 = func_0x2c47a648();
  piVar12 = _LAB_2c47cdb0;
  if (uVar7 != 0) {
    return uVar7;
  }
  if ((*_LAB_2c47cdb0 != 0) && (iVar5 = FUN_2c485770(), iVar5 == 0)) {
    puVar6 = (undefined4 *)FUN_2c4857a8(*piVar12);
    puVar3 = _LAB_2c47cdb4;
    func_0x2c47a5a0(8,*puVar6,*(undefined2 *)(puVar6 + 1),0,puVar6[2]);
    FUN_2c644044(*puVar3,0xffffffff);
    FUN_2c485820(*piVar12,puVar6);
    uVar9 = *puVar3;
    FUN_2c643b2c();
    uVar7 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar7 = getCurrentExceptionNumber();
      uVar7 = uVar7 & 0x1ff;
    }
    if (uVar7 == 0) {
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
          return uVar9;
        }
      }
    }
    FUN_2c643b08(uVar9,0xfffffffa);
    return 0xfffffffa;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x12e,_LAB_2c47cdc4,_LAB_2c47cdc0,_LAB_2c47cdb8,_LAB_2c47cdbc);
}

