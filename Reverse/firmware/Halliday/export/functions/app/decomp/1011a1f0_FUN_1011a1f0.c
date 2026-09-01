/* FUN_1011a1f0 @ 0x1011a1f0 */

undefined4 FUN_1011a1f0(void)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  software_interrupt(2);
  return 4;
}

