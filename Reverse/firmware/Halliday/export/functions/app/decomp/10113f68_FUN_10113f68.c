/* FUN_10113f68 @ 0x10113f68 */

undefined4 FUN_10113f68(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  puVar6 = (uint *)*param_1;
  if (puVar6 == (uint *)0x0) {
    uVar2 = 0;
    if ((param_3 | param_4) != 0) {
      iVar3 = FUN_10114f68(param_1 + 2,uVar7,param_1 + 3,param_3 | param_4,param_3,param_4,param_3);
      if (iVar3 != 0) {
        return 0;
      }
      return *(undefined4 *)(*(int *)(DAT_10113fcc + 8) + 0x14);
    }
  }
  else {
    puVar4 = (uint *)param_1[1];
    uVar5 = *puVar6 & 0xfffffffc;
    *param_1 = uVar5;
    if (puVar6 == puVar4) {
      param_1[1] = uVar5;
    }
    uVar2 = FUN_1013c93c(puVar6,1,puVar4,uVar5,param_1,param_2);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar7);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar2;
}

