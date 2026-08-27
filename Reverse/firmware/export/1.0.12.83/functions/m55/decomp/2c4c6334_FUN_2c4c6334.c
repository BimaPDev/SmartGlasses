/* FUN_2c4c6334 @ 0x2c4c6334 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c6334(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  puVar2 = _LAB_2c4c63c4;
  fVar7 = (float)VectorSignedToFloat(*_LAB_2c4c63b8,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorSignedToFloat(*_LAB_2c4c63bc,(byte)(in_fpscr >> 0x16) & 3);
  uVar8 = VectorFloatToSignedFixed(fVar7 * fRam2c4c63c0 * fVar6 * fRam2c4c63c0,0x20,0x1b);
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *_LAB_2c4c63c4 = 0x2c4c636a;
    puVar2[1] = unaff_lr;
  }
  iVar3 = _LAB_2c4c63c8;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  *(uint *)(_LAB_2c4c63c8 + 0x25c) = *(uint *)(_LAB_2c4c63c8 + 0x25c) & 0xfffffeff;
  *(undefined4 *)(iVar3 + 0x280) = 10;
  uVar4 = *(undefined4 *)(iVar3 + 0x284);
  *(undefined4 *)(iVar3 + 0x284) = uVar8;
  FUN_2c673b08(1,param_2,10,uVar4,param_4);
  *(uint *)(iVar3 + 0x25c) = *(uint *)(iVar3 + 0x25c) | 0x100;
  if (iVar5 == 0) {
    *_LAB_2c4c63c4 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  return;
}

