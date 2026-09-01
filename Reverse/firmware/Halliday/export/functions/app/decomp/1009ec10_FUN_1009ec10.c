/* FUN_1009ec10 @ 0x1009ec10 */

undefined4 FUN_1009ec10(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  puVar4 = (undefined4 *)thunk_FUN_1009f30c(0x10,DAT_1009ec5c);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[2] = param_2;
    puVar4[3] = 0xffffffff;
    *puVar4 = 0;
    puVar3 = DAT_1009ec60;
    puVar4[1] = param_1;
    if ((undefined4 *)puVar3[1] == (undefined4 *)0x0) {
      *puVar3 = puVar4;
      puVar3[1] = puVar4;
    }
    else {
      *(undefined4 *)puVar3[1] = puVar4;
      puVar3[1] = puVar4;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return 1;
}

