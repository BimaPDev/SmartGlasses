/* FUN_1001754c @ 0x1001754c */

void FUN_1001754c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = DAT_100175e4;
  iVar5 = *DAT_100175e8;
  if (*DAT_100175e4 == 0) {
    iVar3 = thunk_FUN_1009f30c(0xb4,DAT_100175fc,param_3,0,param_1,iVar5,param_3);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      if (*DAT_100175e8 == iVar5) {
        return;
      }
    }
    else {
      FUN_1011ea48(iVar3,0,0xb4);
      FUN_1011aab8(1);
      FUN_100efdb4(1,0);
      if (*DAT_100175e8 == iVar5) {
        uVar2 = (DAT_100175ec - DAT_100175f0) * 0x20 & 0xff00U | 0x14c0031;
        uVar4 = DAT_10017600;
        goto LAB_10017584;
      }
    }
LAB_10017568:
    FUN_1013cdc0();
  }
  else if (*DAT_100175e8 != iVar5) goto LAB_10017568;
  uVar2 = (DAT_100175ec - DAT_100175f0) * 0x20 & 0xff00U | 0x13c0021;
  uVar4 = DAT_100175f4;
LAB_10017584:
  FUN_100a5b78(uVar2,DAT_100175f8,uVar4);
  return;
}

