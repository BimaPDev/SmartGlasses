/* FUN_2c47a370 @ 0x2c47a370 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c47a370(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ushort uVar15;
  uint uVar16;
  
  iVar13 = *(int *)(_LAB_2c47a404 + param_2 * 4);
  switch(*(undefined1 *)(iVar13 + 0x210)) {
  case 2:
    return param_1;
  default:
    uVar9 = _LAB_2c47a40c;
code_r0x2c6741e8:
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*DAT_2c6741f4)(0x711,uVar9,_LAB_2c47a408,param_4);
    return uVar8;
  case 6:
  case 8:
    piVar14 = *(int **)(_LAB_2c47a364 + param_2 * 4);
    if (*_LAB_2c47a360 == 0) {
      uVar8 = (uint)*(ushort *)((int)piVar14 + 0x20e);
      uVar7 = 0x1fb;
      if (uVar8 < *(ushort *)(piVar14 + 0x83)) goto LAB_2c47a304;
    }
    else {
      uVar8 = (uint)*(ushort *)((int)piVar14 + 0x20e);
      uVar7 = (uint)(ushort)(*_LAB_2c47a360 - 5);
      if (uVar8 < *(ushort *)(piVar14 + 0x83)) {
LAB_2c47a304:
        uVar12 = uVar8 * uVar7 + uVar7;
        uVar15 = (short)uVar8 * (short)uVar7;
        uVar11 = piVar14[1];
        uVar16 = (uint)uVar15;
        uVar7 = uVar8 + 1 & 0xffff;
        if (uVar11 <= uVar12) {
          uVar12 = uVar11;
        }
        if ((uVar16 < (uVar12 & 0xffff)) && (*piVar14 != 0)) {
          *(short *)(piVar14 + 2) = (short)(uVar8 + 1);
          FUN_2c674668((int)piVar14 + 10,*piVar14 + uVar16,(uVar12 & 0xffff) - uVar16,uVar11,param_4
                      );
          *(ushort *)(piVar14 + 0x82) = (short)uVar12 + (2 - uVar15);
          iVar13 = FUN_2c46db64();
          (**(code **)(iVar13 + 0x10))(piVar14 + 2,(short)piVar14[0x82],param_2 - 0x5fU & 0xff);
          uVar7 = (uint)(ushort)(*(short *)((int)piVar14 + 0x20e) + 1);
        }
        *(short *)((int)piVar14 + 0x20e) = (short)uVar7;
        return uVar7;
      }
    }
    (**(code **)(_LAB_2c47a36c + (uint)*(byte *)(_LAB_2c47a368 + param_2) * 4))(2,param_2);
    break;
  case 9:
    if (param_1 != 0) {
      FUN_2c6741e8(0x711,_LAB_2c47a410,_LAB_2c47a408);
      if (*(byte *)(iVar13 + 0x211) < 3) {
        iVar4 = FUN_2c46db64();
        uVar8 = (**(code **)(iVar4 + 0x10))
                          (iVar13 + 8,*(undefined2 *)(iVar13 + 0x208),param_2 - 0x5fU & 0xff);
        *(char *)(iVar13 + 0x211) = *(char *)(iVar13 + 0x211) + '\x01';
        return uVar8;
      }
      FUN_2c47a218(0,param_2);
      uVar9 = _LAB_2c47a414;
      goto code_r0x2c6741e8;
    }
  }
  *(undefined1 *)(_LAB_2c47a288 + param_2) = 0;
  puVar5 = _LAB_2c47a294;
  puVar6 = _LAB_2c47a290;
  iVar13 = _LAB_2c47a28c;
  if (param_2 == 1) {
    FUN_2c644958(*_LAB_2c47a290);
    pcVar10 = *(code **)(iVar13 + 4);
    *puVar6 = 0;
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(1);
      *(undefined4 *)(iVar13 + 4) = 0;
    }
    uVar8 = 0;
    if ((*_LAB_2c47cd34 != 0) && (uVar8 = FUN_2c485770(), puVar6 = DAT_2c47cbf0, uVar8 == 0)) {
      puVar5 = (undefined4 *)FUN_2c4857a8(*DAT_2c47cbf0);
      if (((*(char *)(puVar5 + 3) == '\0') && (iVar13 = FUN_2c47c54c(), iVar13 == 0)) ||
         (iVar13 = FUN_2c47c4c8(), iVar13 != 1)) {
        uVar8 = FUN_2c47a63c();
        if (uVar8 == 0) {
          uVar8 = FUN_2c47cb44(puVar5);
          return uVar8;
        }
      }
      else {
        uVar8 = FUN_2c47c4e0();
        puVar2 = DAT_2c47cbf4;
        if (uVar8 == 0) {
          FUN_2c47c284(*puVar5,*(undefined2 *)(puVar5 + 1),puVar5[2]);
          FUN_2c644044(*puVar2,0xffffffff);
          FUN_2c485820(*puVar6,puVar5);
          uVar8 = FUN_2c644080(*puVar2);
          return uVar8;
        }
      }
      return uVar8;
    }
    return uVar8;
  }
  if (param_2 == 2) {
    FUN_2c644958(*_LAB_2c47a294);
    pcVar10 = *(code **)(iVar13 + 8);
    *puVar5 = 0;
    if (pcVar10 == (code *)0x0) goto LAB_2c47a27e;
  }
  else {
    pcVar10 = *(code **)(_LAB_2c47a28c + param_2 * 4);
    if (pcVar10 == (code *)0x0) {
      return 1;
    }
  }
  uVar8 = (*pcVar10)(1);
  *(undefined4 *)(iVar13 + param_2 * 4) = 0;
  if (param_2 != 2) {
    return uVar8;
  }
LAB_2c47a27e:
  uVar8 = func_0x2c47a648();
  piVar14 = _LAB_2c47cdb0;
  if (uVar8 != 0) {
    return uVar8;
  }
  if ((*_LAB_2c47cdb0 != 0) && (iVar13 = FUN_2c485770(), iVar13 == 0)) {
    puVar6 = (undefined4 *)FUN_2c4857a8(*piVar14);
    puVar3 = _LAB_2c47cdb4;
    func_0x2c47a5a0(8,*puVar6,*(undefined2 *)(puVar6 + 1),0,puVar6[2]);
    FUN_2c644044(*puVar3,0xffffffff);
    FUN_2c485820(*piVar14,puVar6);
    uVar7 = *puVar3;
    FUN_2c643b2c();
    uVar8 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar8 = getCurrentExceptionNumber();
      uVar8 = uVar8 & 0x1ff;
    }
    if (uVar8 == 0) {
      iVar13 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar13 = isIRQinterruptsEnabled();
      }
      if (iVar13 == 0) {
        iVar13 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          iVar13 = getBasePriority();
        }
        if (iVar13 == 0) {
          software_interrupt(0);
          return uVar7;
        }
      }
    }
    FUN_2c643b08(uVar7,0xfffffffa);
    return 0xfffffffa;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x12e,_LAB_2c47cdc4,_LAB_2c47cdc0,_LAB_2c47cdb8,_LAB_2c47cdbc);
}

