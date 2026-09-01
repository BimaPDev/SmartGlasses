/* FUN_100f731c @ 0x100f731c */

int FUN_100f731c(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    FUN_100a5b78(DAT_100f7434 | (DAT_100f7418 - DAT_100f7414) * 0x20 & 0xff00U,DAT_100f7424,
                 DAT_100f7438,0);
    return 0;
  }
  if (param_3 == 0) {
    param_3 = 0x20;
  }
  iVar2 = param_1[2];
  if (param_3 == *(int *)(iVar2 + 0x40)) {
    iVar1 = *(int *)(iVar2 + 0x44);
    if (iVar1 != 0) goto LAB_100f7386;
    param_3 = param_1[0xb];
joined_r0x100f7368:
    if (param_3 != 0) {
      if (param_3 == *(int *)(iVar2 + 0x40)) {
        iVar1 = *(int *)(iVar2 + 0x44);
        if (iVar1 != 0) goto LAB_100f7386;
      }
      else {
        iVar1 = FUN_100f9cd4(*(undefined4 *)*param_1,param_3);
        if (iVar1 != 0) goto LAB_100f7382;
        iVar2 = param_1[2];
      }
    }
    if (*(int *)(iVar2 + 0x30) != 0) {
      return *(int *)(iVar2 + 0x30);
    }
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_100f9cd4(*(undefined4 *)*param_1,param_3);
    if (iVar1 == 0) {
      param_3 = param_1[0xb];
      iVar2 = param_1[2];
      goto joined_r0x100f7368;
    }
LAB_100f7382:
    *(int *)(iVar2 + 0x40) = param_3;
    *(int *)(iVar2 + 0x44) = iVar1;
  }
LAB_100f7386:
  iVar2 = FUN_100f625c(param_2,iVar1);
  if (iVar2 < 0) {
    FUN_100a5b78(DAT_100f7428 | (DAT_100f7418 - DAT_100f7414) * 0x20 & 0xff00U,DAT_100f7430,
                 DAT_100f742c,iVar1);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x38) * iVar2 + *(int *)(param_2 + 0x14);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (*(int *)(param_1[2] + 0x30) == 0) {
    return 0;
  }
  FUN_100a5b78(DAT_100f741c | (DAT_100f7418 - DAT_100f7414) * 0x20 & 0xff00U,DAT_100f7424,
               DAT_100f7420);
  return *(int *)(param_1[2] + 0x30);
}

