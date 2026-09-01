/* FUN_101189fc @ 0x101189fc */

void FUN_101189fc(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10118a18;
  *DAT_10118a18 = 0;
  iVar2 = FUN_10068bd0(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

