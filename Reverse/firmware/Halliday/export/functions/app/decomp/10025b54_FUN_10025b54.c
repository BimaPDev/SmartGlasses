/* FUN_10025b54 @ 0x10025b54 */

void FUN_10025b54(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *DAT_10025bb4;
  iVar3 = *DAT_10025bb8;
  if (iVar3 == 0) {
    if (*DAT_10025bb4 == iVar1) {
      return;
    }
  }
  else {
    if (param_1 < 9) {
      iVar2 = param_1 * 0x19e;
      FUN_1011ea38(iVar3 + iVar2,iVar2 + 0x19e + iVar3,param_1 * DAT_10025bbc + 0xe8e,iVar2,param_1)
      ;
    }
    param_1 = iVar3 + 0xe8e;
    if (*DAT_10025bb4 == iVar1) goto LAB_10025b96;
  }
  param_1 = FUN_1013cdc0(param_1);
LAB_10025b96:
  FUN_1011ea48(param_1,0,0x19e);
  return;
}

