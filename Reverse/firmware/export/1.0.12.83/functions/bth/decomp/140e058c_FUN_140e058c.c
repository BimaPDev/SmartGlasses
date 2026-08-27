/* FUN_140e058c @ 0x140e058c */

void FUN_140e058c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_140e05ac;
  *DAT_140e05ac = 0;
  iVar2 = FUN_140e4590(param_2,param_3,param_4,param_4,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

