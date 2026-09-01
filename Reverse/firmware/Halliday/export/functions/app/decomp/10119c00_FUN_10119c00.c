/* FUN_10119c00 @ 0x10119c00 */

void FUN_10119c00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10119c20;
  *DAT_10119c20 = 0;
  iVar2 = FUN_1011e9e0(param_2,param_3,param_3,0,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

