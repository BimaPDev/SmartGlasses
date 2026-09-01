/* FUN_10068ef0 @ 0x10068ef0 */

undefined4 FUN_10068ef0(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  puVar3 = DAT_10068f84;
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
  *DAT_10068f84 = *DAT_10068f84 | 0x80000000;
  FUN_1013d9c0(200);
  if (-1 < *DAT_10068f88 << 0x1f) {
    FUN_10119dc2(DAT_10068f8c);
    FUN_10068e74();
  }
  uVar6 = DAT_10068fa0;
  puVar5 = DAT_10068f9c;
  piVar4 = DAT_10068f88;
  iVar8 = 5;
  do {
    *puVar5 = uVar6;
    FUN_1013d9c0(10);
    if (*piVar4 << 0x1e < 0) {
      uVar6 = 0;
      *param_2 = *(undefined4 *)((DAT_10068f94 + param_1) * 4);
      goto LAB_10068f5e;
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_10119dc2(DAT_10068f90,param_1);
  uVar6 = 0xfffffff7;
LAB_10068f5e:
  *puVar3 = *puVar3 & 0x7fffffff;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar7);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar6;
}

