/* FUN_100998a8 @ 0x100998a8 */

void FUN_100998a8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined8 uVar7;
  int local_1c [2];
  
  if (param_2 == 0) {
    uVar7 = FUN_10094174(3,DAT_100999f0,0xa4,DAT_100999f4,DAT_100999ec,DAT_100999e8,DAT_100999e4);
    FUN_10119dc2(DAT_100999fc,DAT_100999f8,DAT_100999f0,0xa4,uVar7);
    FUN_10119dc2(DAT_10099a00);
    FUN_1011a1f0(DAT_100999f0,0xa4,extraout_r2,extraout_r3);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x70) << 0x1d) < 0) {
    FUN_100997e0(param_1);
  }
  puVar2 = DAT_10099a08;
  puVar1 = DAT_10099a04;
  if ((*(int *)(param_1 + 0x3c) == 0) && (*(int *)(param_1 + 0x40) == 0)) {
    iVar4 = FUN_10099a18(param_1,param_2);
    if (iVar4 == 1) {
      if ((*(int *)(param_1 + 0x30) != 0) &&
         (pcVar5 = (char *)FUN_1012bec6(*(undefined4 *)(param_1 + 0x2c)), *pcVar5 == '\0')) {
        FUN_10125af4(param_1);
      }
      FUN_10098174(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x4c),param_2);
      FUN_1012c34c(param_1);
      if ((int)((uint)*(byte *)(param_1 + 0x70) << 0x1d) < 0) {
        iVar4 = FUN_1011ea10(*(undefined4 *)(param_1 + 0x34));
        iVar6 = FUN_1011ea10(param_2);
        iVar4 = FUN_10094280(*(undefined4 *)(param_1 + 0x34),iVar6 + iVar4 + 1,DAT_100999f4);
        *(int *)(param_1 + 0x34) = iVar4;
        if (iVar4 == 0) {
          uVar7 = FUN_10094174(3,DAT_100999f0,0xc4,DAT_100999f4,DAT_100999ec,DAT_10099a10,
                               DAT_10099a0c);
          FUN_10119dc2(DAT_100999fc,DAT_100999f8,DAT_100999f0,0xc4,uVar7);
          FUN_10119dc2(DAT_10099a00);
          FUN_1011a1f0(DAT_100999f0,0xc4,extraout_r2_00,extraout_r3_00);
        }
        if (*(int *)(param_1 + 0x34) == 0) {
          return;
        }
        FUN_10094f64(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x4c),param_2);
        FUN_1009985c(param_1);
      }
      iVar6 = *(int *)(param_1 + 0x4c);
      iVar4 = (*(code *)*DAT_10099a14)(param_2);
      FUN_1009964c(param_1,iVar4 + iVar6);
      FUN_10086f50(param_1,0x1c,0);
    }
  }
  else {
    local_1c[0] = 0;
    while (*(char *)(param_2 + local_1c[0]) != '\0') {
      (*(code *)*puVar1)(param_2,local_1c);
      uVar3 = (*(code *)*puVar2)();
      FUN_10099a58(param_1,uVar3);
    }
  }
  return;
}

