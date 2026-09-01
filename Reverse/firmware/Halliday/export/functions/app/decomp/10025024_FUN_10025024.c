/* FUN_10025024 @ 0x10025024 */

void FUN_10025024(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  int unaff_r4;
  int unaff_r7;
  
  iVar2 = *DAT_1002508c;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    FUN_101188d0(DAT_10025090,DAT_10025094,param_2,0,param_1,iVar2,param_3);
    iVar3 = *param_1;
    unaff_r4 = 0;
    while (unaff_r7 = unaff_r4, unaff_r4 = iVar3, unaff_r4 != 0) {
      iVar1 = FUN_1011ea20(unaff_r4,param_2,0x24);
      iVar3 = *(int *)(unaff_r4 + 0x30);
      if (iVar1 == 0) {
        if (unaff_r7 != 0) goto LAB_10025076;
        *param_1 = iVar3;
        goto LAB_10025068;
      }
    }
  }
  if (*DAT_1002508c != iVar2) {
    do {
      FUN_1013cdc0();
      iVar3 = extraout_r3;
LAB_10025076:
      *(int *)(unaff_r7 + 0x30) = iVar3;
LAB_10025068:
    } while (*DAT_1002508c != iVar2);
    FUN_10117e54(unaff_r4);
    return;
  }
  return;
}

