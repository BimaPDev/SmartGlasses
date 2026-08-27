/* FUN_2c4c64c4 @ 0x2c4c64c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c64c4(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  uint in_fpscr;
  float in_s13;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  puVar2 = _LAB_2c4c65ac;
  fVar7 = (float)VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorSignedToFloat(*param_3,(byte)(in_fpscr >> 0x16) & 3);
  uVar8 = VectorFloatToSignedFixed(fVar7 * in_s13 * fVar6 * in_s13,0x20,0x1b);
  if (*_LAB_2c4c65a8 == 1) {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *_LAB_2c4c65ac = 0x2c4c6552;
      puVar2[1] = unaff_lr;
    }
    iVar3 = _LAB_2c4c65b0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(_LAB_2c4c65b0 + 0x25c) = *(uint *)(_LAB_2c4c65b0 + 0x25c) & 0xffffffef;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    uVar4 = *(undefined4 *)(iVar3 + 0x274);
    *(undefined4 *)(iVar3 + 0x274) = uVar8;
    FUN_2c673b08(1,param_2,10,uVar4,param_4);
    *(uint *)(iVar3 + 0x25c) = *(uint *)(iVar3 + 0x25c) | 0x10;
    if (iVar5 == 0) {
      *_LAB_2c4c65ac = 0xffffffff;
    }
  }
  else {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *_LAB_2c4c65ac = 0x2c4c64fa;
      puVar2[1] = unaff_lr;
    }
    iVar3 = _LAB_2c4c65b0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(_LAB_2c4c65b0 + 0x25c) = *(uint *)(_LAB_2c4c65b0 + 0x25c) & 0xfffffffe;
    *(undefined4 *)(iVar3 + 0x260) = 10;
    uVar4 = *(undefined4 *)(iVar3 + 0x264);
    *(undefined4 *)(iVar3 + 0x264) = uVar8;
    FUN_2c673b08(1,param_2,10,uVar4,param_4);
    *(uint *)(iVar3 + 0x25c) = *(uint *)(iVar3 + 0x25c) | 1;
    if (iVar5 == 0) {
      *_LAB_2c4c65ac = 0xffffffff;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  return;
}

