/* FUN_1005eee0 @ 0x1005eee0 */

void FUN_1005eee0(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  FUN_1005ee80();
  *DAT_1005ef1c = 0x40000000;
  FUN_1005eea4();
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2 + param_3;
    for (; param_2 != puVar1; param_2 = param_2 + 1) {
      FUN_1005eea4(*param_2);
    }
  }
  *DAT_1005ef20 = 0x40000000;
  FUN_1011a71c(DAT_1005ef24,6,0x40000000,param_4);
  return;
}

