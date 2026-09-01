/* FUN_10068bb4 @ 0x10068bb4 */

undefined4 FUN_10068bb4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  
  FUN_10068b84(DAT_10068bcc,5,param_3,param_4,param_4);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  software_interrupt(2);
  return 4;
}

