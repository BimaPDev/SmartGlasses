/* FUN_10067f84 @ 0x10067f84 */

undefined4 FUN_10067f84(void)

{
  bool bVar1;
  
  disableIRQinterrupts();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  WaitForInterrupt();
  enableIRQinterrupts();
  InstructionSynchronizationBarrier(0xf);
  return 0;
}

