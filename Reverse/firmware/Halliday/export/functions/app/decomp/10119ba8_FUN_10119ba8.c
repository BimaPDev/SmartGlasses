/* FUN_10119ba8 @ 0x10119ba8 */

void FUN_10119ba8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10119bc8;
  *DAT_10119bc8 = 0;
  iVar2 = FUN_1011e9b4(param_2,param_3,param_4,param_4,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

