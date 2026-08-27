/* FUN_2c4f56d8 @ 0x2c4f56d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f56d8(void)

{
  bool bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_r3;
  int iVar7;
  undefined4 unaff_lr;
  
  puVar3 = _LAB_2c4f57bc;
  pcVar2 = _LAB_2c4f57b8;
  if (*_LAB_2c4f57b8 != '\0') {
    return;
  }
  *_LAB_2c4f57bc = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3 = _LAB_2c4f57c0;
  iVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    *_LAB_2c4f57c0 = 0x2c4f56fa;
    puVar3[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c674268(_LAB_2c4f57c4,0,0xa00,0x40,in_r3);
  func_0x2c6739a8(_LAB_2c4f57bc,0xa00,_LAB_2c4f57c4);
  if (iVar7 == 0) {
    *_LAB_2c4f57c0 = 0xffffffff;
  }
  uVar5 = _LAB_2c4f57cc;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar7);
  }
  *_LAB_2c4f57c8 = 0;
  uVar5 = FUN_2c6441a4(uVar5);
  piVar4 = _LAB_2c4f57d4;
  *_LAB_2c4f57d0 = uVar5;
  uVar5 = FUN_2c6441a4(_LAB_2c4f57d8,0);
  iVar7 = *piVar4;
  *_LAB_2c4f57dc = uVar5;
  if (iVar7 == 0) {
    iVar7 = FUN_2c64419c(_LAB_2c4f57fc);
    *piVar4 = iVar7;
  }
  piVar4 = _LAB_2c4f57e0;
  if (*_LAB_2c4f57e0 == 0) {
    iVar7 = FUN_2c647174(8);
    *piVar4 = iVar7;
  }
  uVar6 = FUN_2c4c2c50(_LAB_2c4f57e4,0x1000);
  uVar5 = _LAB_2c4f57ec;
  *_LAB_2c4f57e8 = uVar6;
  iVar7 = FUN_2c6442a4(uVar5,0);
  *_LAB_2c4f57f0 = iVar7;
  if (iVar7 == 0) {
    FUN_2c6741e8(0x1290,_LAB_2c4f5808);
  }
  piVar4 = _LAB_2c4f57f4;
  if (*_LAB_2c4f57f4 == 0) {
    iVar7 = FUN_2c6440f0(_LAB_2c4f5804);
    *piVar4 = iVar7;
  }
  piVar4 = _LAB_2c4f57f8;
  if (*_LAB_2c4f57f8 == 0) {
    iVar7 = FUN_2c6440f0(_LAB_2c4f5800);
    *piVar4 = iVar7;
  }
  *pcVar2 = '\x01';
  return;
}

