/* FUN_101334d6 @ 0x101334d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101334d6(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  param_1[3] = 0;
  param_1[2] = 1;
  piVar3 = (int *)*param_1;
  if (param_1 == piVar3) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar7);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar6 = 0;
  }
  else {
    iVar5 = *piVar3;
    piVar4 = (int *)piVar3[1];
    *piVar4 = iVar5;
    *(int **)(iVar5 + 4) = piVar4;
    *piVar3 = 0;
    piVar3[1] = 0;
    uVar6 = FUN_10115ecc();
    FUN_10114a14(_DAT_1011620c,uVar7);
  }
  return uVar6;
}

