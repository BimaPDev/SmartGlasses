/* FUN_2c4c63cc @ 0x2c4c63cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c63cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  puVar2 = _LAB_2c4c645c;
  fVar6 = (float)VectorSignedToFloat(*_LAB_2c4c6450,(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = (float)VectorSignedToFloat(*_LAB_2c4c6454,(byte)(in_fpscr >> 0x16) & 3);
  uVar7 = VectorFloatToSignedFixed(fVar6 * fRam2c4c6458 * fVar5 * fRam2c4c6458,0x20,0x1b);
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *_LAB_2c4c645c = 0x2c4c6402;
    puVar2[1] = unaff_lr;
  }
  iVar3 = _LAB_2c4c6460;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  *(uint *)(_LAB_2c4c6460 + 0x25c) = *(uint *)(_LAB_2c4c6460 + 0x25c) & 0xfffffeff;
  *(undefined4 *)(iVar3 + 0x280) = uVar7;
  uVar7 = *(undefined4 *)(iVar3 + 0x284);
  *(undefined4 *)(iVar3 + 0x284) = 10;
  FUN_2c673b08(1,param_2,10,uVar7,param_4);
  *(uint *)(iVar3 + 0x25c) = *(uint *)(iVar3 + 0x25c) | 0x100;
  if (iVar4 == 0) {
    *_LAB_2c4c645c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return;
}

