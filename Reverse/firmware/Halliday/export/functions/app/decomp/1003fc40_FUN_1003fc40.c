/* FUN_1003fc40 @ 0x1003fc40 */

void FUN_1003fc40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_1003fc70;
  iVar1 = FUN_1012d144(DAT_1003fc74,0,param_3,0,param_1,iVar2,param_3);
  if (*DAT_1003fc70 != iVar2) {
    FUN_1013cdc0(iVar1 != 0);
  }
  return;
}

