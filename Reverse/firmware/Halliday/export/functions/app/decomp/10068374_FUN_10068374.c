/* FUN_10068374 @ 0x10068374 */

void FUN_10068374(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  cVar1 = isThreadModePrivileged();
  isUsingMainStack();
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setThreadModePrivileged(cVar1 == '\x01');
    bVar2 = (bool)isThreadMode();
    if (bVar2) {
      cVar1 = isUsingMainStack();
      setStackMode(cVar1 == '\x01');
    }
  }
  InstructionSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  *(undefined4 *)(iRam100683b8 + 8) = param_1;
  FUN_1013c756();
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setProcessStackPointer(param_2);
  }
  enableFIQinterrupts();
  enableIRQinterrupts();
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar3 = FUN_10119df6(param_3,0,0,0,param_4);
  disableIRQinterrupts();
  if (*(int *)(DAT_100683f0 + 0x18) != 0) {
    *(undefined4 *)(DAT_100683f0 + 0x18) = 0;
    FUN_1013c780();
  }
  enableIRQinterrupts();
  uVar4 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  puVar5 = (undefined4 *)(DAT_100683f4 + (uVar4 - 0x10) * 8);
  (*(code *)puVar5[1])(*puVar5,puVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x100683ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100683f8)(uVar3);
  return;
}

