/* FUN_100c9b88 @ 0x100c9b88 */

int FUN_100c9b88(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1011daf0(param_1,param_2,DAT_100c9bb4,param_4,param_4);
  if (iVar1 == -1) {
    iVar1 = FUN_100c9a20();
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_1011daf0(param_1,param_2,DAT_100c9bb4);
  }
  if (iVar1 == 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -5;
  }
  return iVar1;
}

