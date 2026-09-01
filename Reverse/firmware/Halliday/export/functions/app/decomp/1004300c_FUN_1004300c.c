/* FUN_1004300c @ 0x1004300c */

void FUN_1004300c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *DAT_10043064;
  uVar2 = FUN_100a5b78((DAT_10043068 - DAT_1004306c) * 0x20 & 0xff00U | 0x5e0031,DAT_10043074,
                       DAT_10043070,DAT_1004306c,param_1,iVar4,param_3);
  if ((*DAT_10043078 == -1) && (*DAT_1004307c != '\0')) {
    *DAT_10043080 = 1;
    uVar2 = FUN_10042c20();
  }
  if (*DAT_10043064 != iVar4) {
    uVar2 = FUN_1013cdc0();
  }
  iVar3 = *DAT_10042ff8;
  iVar4 = FUN_100a2338();
  if (iVar4 == 0) {
    if (*DAT_10042ff8 == iVar3) {
      return;
    }
  }
  else {
    uVar1 = FUN_10057648(1);
    FUN_100a5b78((DAT_10042ffc - DAT_10043000) * 0x20 & 0xff00U | 0x560031,DAT_10043008,DAT_10043004
                 ,uVar1,uVar2);
    if (*DAT_10042ff8 == iVar3) goto LAB_10042fe0;
  }
  FUN_1013cdc0();
LAB_10042fe0:
  FUN_100a2310();
  return;
}

