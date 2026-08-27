/* FUN_140dc29c @ 0x140dc29c */

void FUN_140dc29c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_140dc2b8;
  *DAT_140dc2b8 = 0;
  iVar2 = FUN_140e45b0(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

