/* FUN_1011aa9a @ 0x1011aa9a */

void FUN_1011aa9a(void)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}

