/* FUN_100018ac @ 0x100018ac */

undefined4 * FUN_100018ac(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  while( true ) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    puVar3 = (undefined4 *)*param_1;
    if (puVar3 != (undefined4 *)0x0) {
      param_2 = (undefined4 *)param_1[1];
      uVar5 = *puVar3;
      *param_1 = uVar5;
      if (puVar3 == param_2) {
        param_1[1] = uVar5;
      }
      *puVar3 = 0;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
    InstructionSynchronizationBarrier(0xf);
    if (puVar3 != (undefined4 *)0x0) goto LAB_10001904;
    uVar6 = FUN_100030c8(0,param_2,uVar4);
    if ((int)uVar6 != 0) break;
    FUN_10003058(param_1 + 2,(int)((ulonglong)uVar6 >> 0x20),0xffffffff,0xffffffff);
    param_2 = extraout_r1;
  }
  puVar3 = (undefined4 *)FUN_100031f8(DAT_10001910,0xd9,DAT_1000190c,DAT_10001908);
LAB_10001904:
  return puVar3 + -0x27;
}

