/* FUN_101192b8 @ 0x101192b8 */

void FUN_101192b8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_101192d8;
  *DAT_101192d8 = 0;
  iVar2 = FUN_1011e9ca(param_2,param_3,param_4,param_4,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

