/* FUN_1008f77c @ 0x1008f77c */

void FUN_1008f77c(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar4;
  
  piVar1 = DAT_1008f7e4;
  FUN_10094268(*DAT_1008f7e4,DAT_1008f7e8);
  iVar3 = FUN_10094254(param_1,DAT_1008f7e8);
  piVar2 = DAT_1008f7ec;
  *piVar1 = iVar3;
  *piVar2 = iVar3;
  if (iVar3 == 0) {
    uVar4 = FUN_10094174(3,DAT_1008f7fc,0xf6,DAT_1008f7e8,DAT_1008f7f8,DAT_1008f7f4,DAT_1008f7f0);
    FUN_10119dc2(DAT_1008f804,DAT_1008f800,DAT_1008f7fc,0xf6,uVar4);
    FUN_10119dc2(DAT_1008f808);
    FUN_1011a1f0(DAT_1008f7fc,0xf6,extraout_r2,extraout_r3);
  }
  FUN_101284fe(*piVar1,param_1);
  *DAT_1008f80c = param_1;
  return;
}

