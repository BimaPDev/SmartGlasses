/* FUN_140dfd54 @ 0x140dfd54 */

void FUN_140dfd54(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_140dfd74;
  *DAT_140dfd74 = 0;
  iVar2 = FUN_140e4550(param_2,param_3,param_3,0,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}

