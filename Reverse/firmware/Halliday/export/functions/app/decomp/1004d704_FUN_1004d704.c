/* FUN_1004d704 @ 0x1004d704 */

void FUN_1004d704(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *DAT_1004d750;
  iVar2 = *DAT_1004d754;
  if (iVar2 == 0) {
    if (*DAT_1004d750 == iVar1) {
      return;
    }
  }
  else {
    FUN_1012bbea(*(undefined4 *)(iVar2 + 0x18),param_1,1,DAT_1004d754,param_1,iVar1,param_3);
    if (*DAT_1004d750 == iVar1) goto LAB_1004d730;
  }
  FUN_1013cdc0();
LAB_1004d730:
  FUN_10097aec(*(undefined4 *)(iVar2 + 0x14),DAT_1004d758,param_1);
  return;
}

