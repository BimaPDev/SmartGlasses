/* FUN_1008234c @ 0x1008234c */

int FUN_1008234c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  
  iVar1 = FUN_10081e24();
  if (iVar1 == 0) {
    FUN_10081e6c();
    uVar2 = FUN_10061948();
    *DAT_100823a4 = uVar2;
    uVar2 = extraout_r2;
    if ((*DAT_100823a8 == '\0') ||
       (iVar1 = FUN_10082294(DAT_100823ac), uVar2 = extraout_r2_00, iVar1 == 0)) {
      if (*DAT_100823b4 == '\0') {
        FUN_10119dc2(DAT_100823bc,DAT_100823b8);
        FUN_10081e54();
        goto LAB_10082392;
      }
      iVar1 = FUN_1007dbdc(DAT_100823ac,param_2,uVar2,*DAT_100823b4,param_4);
    }
    else {
      FUN_10119dc2(DAT_100823b0);
    }
    FUN_10081e54();
  }
  else {
LAB_10082392:
    iVar1 = -1;
  }
  return iVar1;
}

