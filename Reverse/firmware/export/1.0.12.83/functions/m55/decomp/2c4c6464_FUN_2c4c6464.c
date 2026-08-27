/* FUN_2c4c6464 @ 0x2c4c6464 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c6464(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar6;
  undefined4 extraout_r1_01;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_r4;
  int iVar9;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  
  piVar5 = _LAB_2c4c64a8;
  FUN_2c6741e8(0x41,_LAB_2c4c64b0,_LAB_2c4c64ac);
  uVar6 = extraout_r1;
  if (*piVar5 << 0x1f < 0) {
    if (*_LAB_2c4c64b4 == 0) {
      FUN_2c4c63cc();
      uVar6 = extraout_r1_00;
    }
    else {
      FUN_2c4c6334();
      uVar6 = extraout_r1_01;
    }
  }
  puVar4 = _LAB_2c4c613c;
  puVar2 = _LAB_2c4c60a4;
  if (*piVar5 << 0x1e < 0) {
    iVar8 = *_LAB_2c4c64b8;
    if (iVar8 == 0) {
      fVar11 = (float)VectorSignedToFloat(*_LAB_2c4c6130,(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = (float)VectorSignedToFloat(*_LAB_2c4c6134,(byte)(in_fpscr >> 0x16) & 3);
      uVar12 = VectorFloatToSignedFixed(fVar11 * fRam2c4c6138 * fVar10 * fRam2c4c6138,0x20,0x1b);
      iVar8 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        *_LAB_2c4c613c = 0x2c4c60e2;
        puVar4[1] = unaff_lr;
      }
      iVar9 = _LAB_2c4c6140;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      *(uint *)(_LAB_2c4c6140 + 0x25c) = *(uint *)(_LAB_2c4c6140 + 0x25c) & 0xffffefff;
      *(undefined4 *)(iVar9 + 0x290) = uVar12;
      uVar12 = *(undefined4 *)(iVar9 + 0x294);
      *(undefined4 *)(iVar9 + 0x294) = 10;
      FUN_2c673b08(1,uVar6,10,uVar12,0,unaff_r4);
      *(uint *)(iVar9 + 0x25c) = *(uint *)(iVar9 + 0x25c) | 0x1000;
      if (iVar8 == 0) {
        *_LAB_2c4c613c = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar8);
      }
      return;
    }
    fVar11 = (float)VectorSignedToFloat(*_LAB_2c4c6098,(byte)(in_fpscr >> 0x16) & 3);
    fVar10 = (float)VectorSignedToFloat(*_LAB_2c4c609c,(byte)(in_fpscr >> 0x16) & 3);
    uVar12 = VectorFloatToSignedFixed(fVar11 * fRam2c4c60a0 * fVar10 * fRam2c4c60a0,0x20,0x1b);
    iVar9 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar9 = getBasePriority();
    }
    if (iVar9 != 0x40) {
      *_LAB_2c4c60a4 = 0x2c4c604a;
      puVar2[1] = unaff_lr;
    }
    iVar3 = _LAB_2c4c60a8;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(_LAB_2c4c60a8 + 0x25c) = *(uint *)(_LAB_2c4c60a8 + 0x25c) & 0xffffefff;
    *(undefined4 *)(iVar3 + 0x290) = 10;
    uVar7 = *(undefined4 *)(iVar3 + 0x294);
    *(undefined4 *)(iVar3 + 0x294) = uVar12;
    FUN_2c673b08(1,uVar6,10,uVar7,iVar8,unaff_r4);
    *(uint *)(iVar3 + 0x25c) = *(uint *)(iVar3 + 0x25c) | 0x1000;
    if (iVar9 == 0) {
      *_LAB_2c4c60a4 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar9);
    }
    return;
  }
  return;
}

