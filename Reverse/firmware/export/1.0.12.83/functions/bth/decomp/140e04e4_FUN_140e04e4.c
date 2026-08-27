/* FUN_140e04e4 @ 0x140e04e4 */

void FUN_140e04e4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_140e0500;
  *DAT_140e0500 = 0;
  iVar2 = FUN_140e4570(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

