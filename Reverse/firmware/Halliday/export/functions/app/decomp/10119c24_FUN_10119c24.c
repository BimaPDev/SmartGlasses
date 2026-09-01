/* FUN_10119c24 @ 0x10119c24 */

void FUN_10119c24(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10119c40;
  *DAT_10119c40 = 0;
  iVar2 = FUN_1011e9ce(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

