/* FUN_2c136bac @ 0x2c136bac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c136bac(undefined2 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_30;
  uint uStack_2c;
  undefined2 *puStack_28;
  undefined2 *puStack_24;
  
  iVar5 = _DAT_2c136eac;
  uVar7 = (uint)*(byte *)(_DAT_2c136eac + (int)param_1 * 0x70 + 0xe);
  iVar8 = uVar7 * 0x30 + (int)param_1 * 0x70 + _DAT_2c136eac;
  puVar4 = *(undefined2 **)(iVar8 + 0x38);
  iVar11 = *(int *)(_DAT_2c136e58 + (int)param_1 * 0xc);
  if (puVar4 == (undefined2 *)0x0) {
    if (*(char *)(iVar8 + 0x24) != '\0') {
LAB_2c136bea:
      *(undefined4 *)(iVar11 + 0x30) = 0;
      *(uint *)(iVar11 + 0x6c) = *(uint *)(iVar11 + 0x6c) & 0xfffffffe;
    }
  }
  else {
    uStack_2c = _DAT_2c136e5c;
    uStack_30 = _DAT_2c136e64;
    FUN_2c135988(4,0x3c9,_DAT_2c136e60,_DAT_2c136e68);
    iVar8 = *(int *)(iVar8 + 0x38);
    if (iVar8 << 0x10 < 0) {
      uStack_30 = uRam2c136eec;
      FUN_2c135988(4,0x2f5,uRam2c136ef0,uRam2c136ef4);
    }
    if (iVar8 << 0x11 < 0) {
      uStack_30 = _DAT_2c136ea8;
      FUN_2c135988(4,0x2f7,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x12 < 0) {
      uStack_30 = _DAT_2c136ea4;
      FUN_2c135988(4,0x2f9,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x14 < 0) {
      uStack_30 = _DAT_2c136ea0;
      FUN_2c135988(4,0x2fb,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x15 < 0) {
      uStack_30 = _DAT_2c136e9c;
      FUN_2c135988(4,0x2fd,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x16 < 0) {
      uStack_30 = _DAT_2c136e98;
      FUN_2c135988(4,0x2ff,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x17 < 0) {
      uStack_30 = _DAT_2c136e94;
      FUN_2c135988(4,0x301,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x18 < 0) {
      uStack_30 = _DAT_2c136e90;
      FUN_2c135988(4,0x303,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x19 < 0) {
      uStack_30 = _DAT_2c136e8c;
      FUN_2c135988(4,0x305,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x1a < 0) {
      uStack_30 = _DAT_2c136e88;
      FUN_2c135988(4,0x307,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x1b < 0) {
      uStack_30 = _DAT_2c136e84;
      FUN_2c135988(4,0x309,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x1c < 0) {
      uStack_30 = _DAT_2c136e80;
      FUN_2c135988(4,0x30b,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x1d < 0) {
      uStack_30 = _DAT_2c136e7c;
      FUN_2c135988(4,0x30d,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x1e < 0) {
      uStack_30 = _DAT_2c136e78;
      FUN_2c135988(4,0x30f,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 0x1f < 0) {
      uStack_30 = _DAT_2c136e74;
      FUN_2c135988(4,0x311,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 < 0) {
      uStack_30 = uRam2c136ef8;
      FUN_2c135988(4,0x313,uRam2c136ef0,uRam2c136ef4);
    }
    if (iVar8 << 1 < 0) {
      uStack_30 = _DAT_2c136e70;
      FUN_2c135988(4,0x315,_DAT_2c136e60,_DAT_2c136e68);
    }
    if (iVar8 << 2 < 0) {
      uStack_30 = _DAT_2c136e6c;
      FUN_2c135988(4,0x317,_DAT_2c136e60,_DAT_2c136e68);
    }
    iVar8 = (int)param_1 * 0x70 + uVar7 * 0x30 + iVar5;
    puStack_28 = param_1;
    puStack_24 = puVar4;
    if ((*(char *)(iVar8 + 0x24) != '\0') || (*(int *)(iVar8 + 0x38) != 0)) goto LAB_2c136bea;
  }
  iVar8 = (int)param_1 * 0x70;
  if ((int)((uint)*(byte *)(iVar5 + (int)param_1 * 0x70 + 1) << 0x1f) < 0) {
    *(undefined1 *)(iVar5 + iVar8 + (uVar7 + 1) * 0x30) = 1;
LAB_2c136c1e:
    iVar5 = iVar5 + (int)param_1 * 0x70;
    if (*(char *)(iVar5 + 0xf) != '\0') {
      *(char *)(iVar5 + 0xf) = *(char *)(iVar5 + 0xf) + -1;
      *(byte *)(iVar5 + 0xe) = *(char *)(iVar5 + 0xe) + 1U & 1;
      return;
    }
  }
  else {
    iVar11 = iVar8 + uVar7 * 0x30 + iVar5;
    if (*(code **)(iVar11 + 0x3c) != (code *)0x0) {
      uStack_2c = (uint)*(ushort *)(iVar11 + 0x1c) * (uint)*(ushort *)(iVar11 + 0x1a);
      puStack_28 = *(undefined2 **)(iVar11 + 0x38);
      uStack_30 = *(uint *)(iVar11 + 0x14);
      (**(code **)(iVar11 + 0x3c))
                (param_1,*(undefined4 *)(iVar8 + (uVar7 + 1) * 0x30 + iVar5 + 4),
                 *(undefined4 *)(iVar11 + 0x10),
                 (uint)*(ushort *)(iVar11 + 0x18) * (uint)*(ushort *)(iVar11 + 0x1c));
      goto LAB_2c136c1e;
    }
    FUN_2c13635c(uRam2c136efc,param_1);
  }
  FUN_2c13635c(uRam2c136f04,uRam2c136f00,param_1);
  uVar12 = uStack_2c & 0xffff;
  uVar9 = uStack_30 & 0xffff;
  uVar7 = (uint)((ulonglong)uRam2c136ff8 * (ulonglong)(uVar12 * 0xec + 999) >> 0x20);
  if ((uVar9 + 7 & 0xffff) < uVar7 >> 6) {
    uVar7 = uVar7 >> 6;
    uVar10 = uVar7 & 0xffff;
  }
  else {
    uVar7 = uVar9 + 8 & 0xffff;
    uVar10 = uVar7;
  }
  uVar6 = (uint)((ulonglong)uRam2c136ff8 * (ulonglong)(uVar12 * 0x24 + 999) >> 0x20);
  uVar13 = uVar6 >> 6;
  if (uVar6 >> 6 < (uVar9 + 6 & 0xffff) + (uVar9 + 5 & 0xffff)) {
    uVar6 = uVar9 * 2 + 0xb & 0xffff;
    uVar13 = uVar6;
    if (uVar6 + uVar7 <= extraout_r1) goto LAB_2c136f60;
LAB_2c136fb2:
    FUN_2c135988(4,0x15c,uRam2c137008,uRam2c137004,uRam2c137000,uRam2c136ffc,0x65,extraout_r1,uVar7,
                 uVar13,uVar12);
    uVar10 = uVar10 - 1;
    uVar7 = (uVar6 - uVar9) - 6;
  }
  else {
    uVar6 = uVar13 & 0xffff;
    if (extraout_r1 < uVar13 + uVar7) goto LAB_2c136fb2;
LAB_2c136f60:
    uVar7 = extraout_r1 + 1 >> 1;
    if (uVar10 < uVar6) {
      if (uVar6 < uVar7) {
        uVar6 = uVar7;
      }
      if (uVar10 < extraout_r1 - uVar6) {
        uVar10 = extraout_r1 - uVar6;
      }
    }
    else {
      if (uVar10 < uVar7) {
        uVar10 = uVar7;
      }
      if (uVar6 < extraout_r1 - uVar10) {
        uVar6 = extraout_r1 - uVar10;
      }
    }
    uVar10 = uVar10 - 1;
    uVar7 = (uVar6 - uVar9) - 6;
    if (0xffff < uVar10) goto LAB_2c136fea;
  }
  if (uVar7 < 0x10000) {
    *puStack_28 = (short)uVar10;
    *puStack_24 = (short)uVar7;
    return;
  }
LAB_2c136fea:
  FUN_2c13635c(uRam2c13700c,uRam2c136ffc,0x65,uVar10,uVar7);
  puVar3 = _DAT_2c137054;
  iVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *_DAT_2c137054 = 0x2c13701e;
    puVar3[1] = 0x2c136ff9;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  cVar1 = *_DAT_2c137058;
  *_DAT_2c137058 = cVar1;
  if (cVar1 == '\0') {
    func_0x2c13859c(2);
  }
  if (iVar5 == 0) {
    *_DAT_2c137054 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar5);
  }
  return;
}

