/* FUN_2c4f5ef0 @ 0x2c4f5ef0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f5ef0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_r3;
  undefined1 *extraout_r3;
  undefined1 *puVar5;
  undefined4 extraout_r3_00;
  undefined4 uVar6;
  
  puVar5 = _LAB_2c4f5f9c;
  piVar1 = _LAB_2c4f5f98;
  iVar3 = *_LAB_2c4f5f98;
  *_LAB_2c4f5f9c = 0;
  if (iVar3 != 0) {
    FUN_2c64730c();
    puVar5 = extraout_r3;
  }
  iVar3 = FUN_2c647174(0xffff,0,0,puVar5,in_r3);
  *piVar1 = iVar3;
  uVar6 = 0;
  if (piVar1[1] != 0) {
    FUN_2c64730c(piVar1[1]);
    uVar6 = extraout_r3_00;
  }
  iVar3 = FUN_2c647174(0xffff,0,0,uVar6,in_r3);
  piVar1[1] = iVar3;
  if (piVar1[2] != 0) {
    FUN_2c64730c(piVar1[2]);
  }
  iVar3 = _LAB_2c4f5fa0;
  iVar4 = FUN_2c647174(0xffff,0);
  iVar2 = _LAB_2c4f5fa4;
  piVar1[3] = 0;
  piVar1[2] = iVar4;
  piVar1[0xd] = iVar2;
  *(undefined1 *)((int)piVar1 + 0x42) = 1;
  *(undefined2 *)(piVar1 + 0xf) = 0x800;
  *(undefined2 *)(piVar1 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 4) = 0;
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  func_0x2c4f6954(iVar3,iVar2,0x800);
  iVar2 = _LAB_2c4f5fa8;
  piVar1[8] = 0;
  piVar1[0xe] = iVar2;
  *(undefined2 *)((int)piVar1 + 0x3e) = 0x800;
  piVar1 = _LAB_2c4f5fac;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  func_0x2c4f6954(iVar3 + 0x14,iVar2,0x800);
  if (*piVar1 != 0) {
    return;
  }
  iVar3 = FUN_2c6440f0(_LAB_2c4f5fb0);
  *piVar1 = iVar3;
  return;
}

