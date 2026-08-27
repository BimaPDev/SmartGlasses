/* FUN_2c4c7fe0 @ 0x2c4c7fe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4c7fe0(int param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_lr;
  
  FUN_2c6741e8(0x42,_LAB_2c4c8238,_LAB_2c4c8234,param_2);
  puVar6 = _LAB_2c4c8244;
  if (param_1 == 0) {
    FUN_2c6741e8(0x41,_LAB_2c4c82a8,_LAB_2c4c8234);
    uVar9 = 3;
  }
  else {
    uVar13 = param_2 & 1;
    if (((uVar13 != 0) && (*_LAB_2c4c823c == 0)) ||
       ((uVar14 = param_2 & 2, uVar14 != 0 && (*_LAB_2c4c8240 == 0)))) {
      FUN_2c6741e8(0x42,_LAB_2c4c82a4,_LAB_2c4c8234,param_2);
      return 3;
    }
    iVar12 = 0;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      iVar12 = getBasePriority();
    }
    if (iVar12 != 0x40) {
      *_LAB_2c4c8244 = 0x2c4c802a;
      puVar6[1] = unaff_lr;
    }
    pcVar8 = _LAB_2c4c82ac;
    piVar7 = _LAB_2c4c824c;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(0x40);
    }
    cVar1 = *_LAB_2c4c8248;
    cVar2 = *_LAB_2c4c82ac;
    piVar5 = _LAB_2c4c824c;
    if (uVar13 != 0) {
      if (*_LAB_2c4c824c << 0x1f < 0) {
        FUN_2c674668(_LAB_2c4c8254,param_1,0x154);
      }
      pcVar11 = _LAB_2c4c8248;
      if (*_LAB_2c4c8250 != 0xffff) {
        *_LAB_2c4c8254 = *_LAB_2c4c8250;
      }
      iVar10 = *_LAB_2c4c8258;
      if ((iVar10 == 1) || (*piVar7 << 0x1e < 0)) {
        FUN_2c674668(_LAB_2c4c8268,param_1 + 0x154);
        pcVar11 = _LAB_2c4c8248;
      }
      if (*_LAB_2c4c825c != 0xffff) {
        _LAB_2c4c8254[0x55] = *_LAB_2c4c825c;
      }
      if (*pcVar11 == '\0') {
        *pcVar11 = '\x01';
        *_LAB_2c4c8260 = 0;
        if (*piVar7 << 0x1f < 0) {
          FUN_2c674668(_LAB_2c4c8264,_LAB_2c4c8254,0x154);
        }
        if ((iVar10 == 1) || (piVar5 = _LAB_2c4c824c, *piVar7 << 0x1e < 0)) {
          FUN_2c674668(_LAB_2c4c826c,_LAB_2c4c8268,0x154);
          piVar5 = _LAB_2c4c824c;
        }
      }
      else {
        *_LAB_2c4c8260 = 1;
        piVar5 = _LAB_2c4c824c;
      }
    }
    _LAB_2c4c824c = piVar5;
    if (uVar14 != 0) {
      if (*piVar5 << 0x1f < 0) {
        FUN_2c674668(_LAB_2c4c827c,param_1 + 0x2a8,0x154);
      }
      if (*_LAB_2c4c8270 != 0xffff) {
        _LAB_2c4c8254[0xaa] = *_LAB_2c4c8270;
      }
      if (*piVar5 << 0x1e < 0) {
        FUN_2c674668(_LAB_2c4c8284,param_1 + 0x3fc,0x154);
      }
      if (*_LAB_2c4c8274 != 0xffff) {
        _LAB_2c4c8254[0xff] = *_LAB_2c4c8274;
      }
      if (*pcVar8 == '\0') {
        *pcVar8 = '\x01';
        *_LAB_2c4c8278 = 0;
        if (*piVar5 << 0x1f < 0) {
          FUN_2c674668(_LAB_2c4c8280,_LAB_2c4c827c,0x154);
        }
        if (*piVar5 << 0x1e < 0) {
          FUN_2c674668(_LAB_2c4c8288,_LAB_2c4c8284,0x154);
        }
      }
      else {
        *_LAB_2c4c8278 = 1;
      }
    }
    if (iVar12 == 0) {
      *_LAB_2c4c8244 = 0xffffffff;
    }
    puVar6 = _LAB_2c4c8290;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(iVar12);
    }
    puVar4 = _LAB_2c4c829c;
    if ((uVar13 != 0) && (cVar1 == '\0')) {
      FUN_2c6741e8(0x41,_LAB_2c4c828c,_LAB_2c4c8234);
      FUN_2c4c6784(1);
      FUN_2c4c26a8(*puVar6);
      FUN_2c4c261c(*puVar6,*_LAB_2c4c8294);
      puVar4 = _LAB_2c4c829c;
    }
    _LAB_2c4c829c = puVar4;
    if ((uVar14 != 0) && (cVar2 == '\0')) {
      FUN_2c6741e8(0x41,_LAB_2c4c8298,_LAB_2c4c8234);
      FUN_2c4c6784(2);
      FUN_2c4c26a8(*puVar4);
      FUN_2c4c261c(*puVar4,*_LAB_2c4c82a0);
      return 0;
    }
    uVar9 = 0;
  }
  return uVar9;
}

