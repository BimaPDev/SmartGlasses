/* FUN_2c0068bc @ 0x2c0068bc */

undefined4 FUN_2c0068bc(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 0x10c) = param_4;
  if (param_3 == 0) {
    *DAT_2c0068ec = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_3);
  }
  return 0;
}

