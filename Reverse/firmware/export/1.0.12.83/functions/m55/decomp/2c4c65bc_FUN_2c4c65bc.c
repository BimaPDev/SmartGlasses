/* FUN_2c4c65bc @ 0x2c4c65bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c65bc(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  uint in_fpscr;
  float in_s13;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  puVar2 = _LAB_2c4c66a4;
  fVar6 = (float)VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = (float)VectorSignedToFloat(*param_3,(byte)(in_fpscr >> 0x16) & 3);
  uVar7 = VectorFloatToSignedFixed(fVar6 * in_s13 * fVar5 * in_s13,0x20,0x1b);
  if (*_LAB_2c4c66a0 == 1) {
    iVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar4 = getBasePriority();
    }
    if (iVar4 != 0x40) {
      *_LAB_2c4c66a4 = 0x2c4c664a;
      puVar2[1] = unaff_lr;
    }
    iVar3 = _LAB_2c4c66a8;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(_LAB_2c4c66a8 + 0x25c) = *(uint *)(_LAB_2c4c66a8 + 0x25c) & 0xffffffef;
    *(undefined4 *)(iVar3 + 0x270) = uVar7;
    uVar7 = *(undefined4 *)(iVar3 + 0x274);
    *(undefined4 *)(iVar3 + 0x274) = 10;
    FUN_2c673b08(1,param_2,10,uVar7,param_4);
    *(uint *)(iVar3 + 0x25c) = *(uint *)(iVar3 + 0x25c) | 0x10;
    if (iVar4 == 0) {
      *_LAB_2c4c66a4 = 0xffffffff;
    }
  }
  else {
    iVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar4 = getBasePriority();
    }
    if (iVar4 != 0x40) {
      *_LAB_2c4c66a4 = 0x2c4c65f2;
      puVar2[1] = unaff_lr;
    }
    iVar3 = _LAB_2c4c66a8;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(_LAB_2c4c66a8 + 0x25c) = *(uint *)(_LAB_2c4c66a8 + 0x25c) & 0xfffffffe;
    *(undefined4 *)(iVar3 + 0x260) = uVar7;
    uVar7 = *(undefined4 *)(iVar3 + 0x264);
    *(undefined4 *)(iVar3 + 0x264) = 10;
    FUN_2c673b08(1,param_2,10,uVar7,param_4);
    *(uint *)(iVar3 + 0x25c) = *(uint *)(iVar3 + 0x25c) | 1;
    if (iVar4 == 0) {
      *_LAB_2c4c66a4 = 0xffffffff;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return;
}

