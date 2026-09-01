/* FUN_1009eb2c @ 0x1009eb2c */

undefined4 *
FUN_1009eb2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r2;
  int *piVar4;
  int *extraout_r3;
  undefined4 *puVar5;
  undefined4 *puVar6;
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
  puVar5 = (undefined4 *)*DAT_1009eb6c;
  if (puVar5 == (undefined4 *)0x0) {
LAB_1009eb46:
    puVar5 = (undefined4 *)0x0;
  }
  else {
    piVar4 = DAT_1009eb6c;
    puVar6 = (undefined4 *)*puVar5;
    while (iVar3 = FUN_1011ea18(puVar5[1],param_1,param_3,piVar4,param_4), iVar3 != 0) {
      if (puVar6 == (undefined4 *)0x0) goto LAB_1009eb46;
      piVar4 = extraout_r3;
      puVar5 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
      param_3 = extraout_r2;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar7);
  }
  InstructionSynchronizationBarrier(0xf);
  return puVar5;
}

