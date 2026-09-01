/* FUN_10099ca4 @ 0x10099ca4 */

void FUN_10099ca4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_1c [2];
  
  if (param_2 == 0) {
    uVar6 = FUN_10094174(3,DAT_10099df0,0x10f,DAT_10099df4,DAT_10099dec,DAT_10099de8,DAT_10099de4);
    FUN_10119dc2(DAT_10099dfc,DAT_10099df8,DAT_10099df0,0x10f,uVar6);
    FUN_10119dc2(DAT_10099e00);
    FUN_1011a1f0(DAT_10099df0,0x10f,extraout_r2,extraout_r3);
  }
  FUN_1012c34c(param_1);
  if ((*(int *)(param_1 + 0x3c) == 0) && (*(int *)(param_1 + 0x40) == 0)) {
    FUN_10097998(*(undefined4 *)(param_1 + 0x2c),param_2);
    FUN_1009964c(param_1,0x7fff);
  }
  else {
    FUN_10097998(*(undefined4 *)(param_1 + 0x2c),DAT_10099e04);
    FUN_1009964c(param_1,0x7fff);
    puVar2 = DAT_10099e0c;
    puVar1 = DAT_10099e08;
    if ((*(byte *)(param_1 + 0x70) & 4) != 0) {
      **(undefined1 **)(param_1 + 0x34) = 0;
    }
    local_1c[0] = 0;
    while (*(char *)(param_2 + local_1c[0]) != '\0') {
      (*(code *)*puVar1)(param_2,local_1c);
      uVar5 = (*(code *)*puVar2)();
      FUN_10099a58(param_1,uVar5);
    }
  }
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (pcVar3 = (char *)FUN_1012bec6(*(undefined4 *)(param_1 + 0x2c)), *pcVar3 == '\0')) {
    FUN_10125af4(param_1);
  }
  if ((int)((uint)*(byte *)(param_1 + 0x70) << 0x1d) < 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    iVar4 = FUN_1011ea10(param_2);
    iVar4 = FUN_10094280(uVar5,iVar4 + 1,DAT_10099df4);
    *(int *)(param_1 + 0x34) = iVar4;
    if (iVar4 == 0) {
      uVar6 = FUN_10094174(3,DAT_10099df0,0x130,DAT_10099df4,DAT_10099dec,DAT_10099e14,DAT_10099e10)
      ;
      FUN_10119dc2(DAT_10099dfc,DAT_10099df8,DAT_10099df0,0x130,uVar6);
      FUN_10119dc2(DAT_10099e00);
      FUN_1011a1f0(DAT_10099df0,0x130,extraout_r2_00,extraout_r3_00);
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      return;
    }
    FUN_1011e9f0(*(int *)(param_1 + 0x34),param_2);
    FUN_1009985c(param_1);
  }
  FUN_10086f50(param_1,0x1c,0);
  return;
}

