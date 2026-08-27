/* FUN_2c0068c8 @ 0x2c0068c8 */

undefined4
FUN_2c0068c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  
  *param_4 = param_2;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_3);
  }
  return 0;
}

