/* FUN_100c1d54 @ 0x100c1d54 */

int * FUN_100c1d54(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_10119dc2(DAT_100c1d88,DAT_100c1d84,DAT_100c1d80,0x291,0,param_2);
    FUN_1011a1f0(DAT_100c1d80,0x291,param_3,param_4);
  }
  do {
    piVar1 = param_1;
    param_1 = (int *)*piVar1;
  } while (param_1 != (int *)0x0);
  return piVar1;
}

