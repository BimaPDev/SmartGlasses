/* FUN_2c4c66ac @ 0x2c4c66ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c66ac(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 unaff_r4;
  int iVar10;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  
  piVar7 = _LAB_2c4c66f8;
  FUN_2c6741e8(0x41,_LAB_2c4c6700,_LAB_2c4c66fc);
  if (*piVar7 << 0x1f < 0) {
    if (*_LAB_2c4c6704 == 0) {
      func_0x2c4c65b4();
    }
    else {
      func_0x2c4c64bc();
    }
  }
  puVar6 = _LAB_2c4c632c;
  puVar5 = _LAB_2c4c631c;
  puVar3 = _LAB_2c4c6234;
  puVar2 = _LAB_2c4c6224;
  if ((*_LAB_2c4c6708 != 1) && (-1 < *piVar7 << 0x1e)) {
    return;
  }
  iVar9 = *_LAB_2c4c670c;
  if (iVar9 == 0) {
    fVar12 = (float)VectorSignedToFloat(*_LAB_2c4c631c,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = (float)VectorSignedToFloat(*_LAB_2c4c6320,(byte)(in_fpscr >> 0x16) & 3);
    uVar13 = VectorFloatToSignedFixed(fVar12 * fRam2c4c6324 * fVar11 * fRam2c4c6324,0x20,0x1b);
    if (*_LAB_2c4c6328 == 1) {
      iVar9 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar9 = getBasePriority();
      }
      if (iVar9 != 0x40) {
        *_LAB_2c4c632c = 0x2c4c62d2;
        puVar6[1] = unaff_lr;
      }
      iVar10 = _LAB_2c4c6330;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      *(uint *)(_LAB_2c4c6330 + 0x25c) = *(uint *)(_LAB_2c4c6330 + 0x25c) & 0xfffffffe;
      *(undefined4 *)(iVar10 + 0x260) = uVar13;
      uVar13 = *(undefined4 *)(iVar10 + 0x264);
      *(undefined4 *)(iVar10 + 0x264) = 10;
      FUN_2c673b08(1,puVar5,10,uVar13,0,unaff_r4);
      *(uint *)(iVar10 + 0x25c) = *(uint *)(iVar10 + 0x25c) | 1;
      if (iVar9 == 0) {
        *_LAB_2c4c632c = 0xffffffff;
      }
    }
    else {
      iVar9 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar9 = getBasePriority();
      }
      if (iVar9 != 0x40) {
        *_LAB_2c4c632c = 0x2c4c627a;
        puVar6[1] = unaff_lr;
      }
      iVar10 = _LAB_2c4c6330;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      *(uint *)(_LAB_2c4c6330 + 0x25c) = *(uint *)(_LAB_2c4c6330 + 0x25c) & 0xffffffef;
      *(undefined4 *)(iVar10 + 0x270) = uVar13;
      uVar13 = *(undefined4 *)(iVar10 + 0x274);
      *(undefined4 *)(iVar10 + 0x274) = 10;
      FUN_2c673b08(1,puVar5,10,uVar13,0,unaff_r4);
      *(uint *)(iVar10 + 0x25c) = *(uint *)(iVar10 + 0x25c) | 0x10;
      if (iVar9 == 0) {
        *_LAB_2c4c632c = 0xffffffff;
      }
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar9);
    }
    return;
  }
  fVar12 = (float)VectorSignedToFloat(*_LAB_2c4c6224,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorSignedToFloat(*_LAB_2c4c6228,(byte)(in_fpscr >> 0x16) & 3);
  uVar13 = VectorFloatToSignedFixed(fVar12 * fRam2c4c622c * fVar11 * fRam2c4c622c,0x20,0x1b);
  if (*_LAB_2c4c6230 == 1) {
    iVar10 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar10 = getBasePriority();
    }
    if (iVar10 != 0x40) {
      *_LAB_2c4c6234 = 0x2c4c61da;
      puVar3[1] = unaff_lr;
    }
    iVar4 = _LAB_2c4c6238;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(_LAB_2c4c6238 + 0x25c) = *(uint *)(_LAB_2c4c6238 + 0x25c) & 0xfffffffe;
    *(undefined4 *)(iVar4 + 0x260) = 10;
    uVar8 = *(undefined4 *)(iVar4 + 0x264);
    *(undefined4 *)(iVar4 + 0x264) = uVar13;
    FUN_2c673b08(1,puVar2,10,uVar8,iVar9,unaff_r4);
    *(uint *)(iVar4 + 0x25c) = *(uint *)(iVar4 + 0x25c) | 1;
    if (iVar10 == 0) {
      *_LAB_2c4c6234 = 0xffffffff;
    }
  }
  else {
    iVar10 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar10 = getBasePriority();
    }
    if (iVar10 != 0x40) {
      *_LAB_2c4c6234 = 0x2c4c6182;
      puVar3[1] = unaff_lr;
    }
    iVar4 = _LAB_2c4c6238;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(_LAB_2c4c6238 + 0x25c) = *(uint *)(_LAB_2c4c6238 + 0x25c) & 0xffffffef;
    *(undefined4 *)(iVar4 + 0x270) = 10;
    uVar8 = *(undefined4 *)(iVar4 + 0x274);
    *(undefined4 *)(iVar4 + 0x274) = uVar13;
    FUN_2c673b08(1,puVar2,10,uVar8,iVar9,unaff_r4);
    *(uint *)(iVar4 + 0x25c) = *(uint *)(iVar4 + 0x25c) | 0x10;
    if (iVar10 == 0) {
      *_LAB_2c4c6234 = 0xffffffff;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar10);
  }
  return;
}

