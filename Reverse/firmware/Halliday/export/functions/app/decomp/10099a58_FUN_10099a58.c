/* FUN_10099a58 @ 0x10099a58 */

void FUN_10099a58(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  code *pcVar6;
  undefined8 uVar7;
  int local_2c [2];
  int local_24;
  int local_20 [3];
  
  if ((-1 < (int)((uint)*(byte *)(param_1 + 0x70) << 0x1c)) || ((param_2 != 10 && (param_2 != 0xd)))
     ) {
    local_20[1] = 0;
    local_2c[0] = param_2;
    local_20[0] = param_2;
    iVar2 = FUN_10099a18(param_1,local_20);
    puVar1 = DAT_10099b88;
    if (iVar2 == 1) {
      iVar2 = (*(code *)*DAT_10099b88)(local_2c,0);
      if (*(int *)(param_1 + 0x40) != 0) {
        pcVar6 = (code *)*DAT_10099b8c;
        FUN_1012c330(param_1);
        uVar3 = (*pcVar6)();
        if (*(uint *)(param_1 + 0x40) <= uVar3) {
          return;
        }
      }
      if ((*(char **)(param_1 + 0x3c) != (char *)0x0) && (**(char **)(param_1 + 0x3c) != '\0')) {
        local_24 = 0;
        do {
          if (*(char *)(*(int *)(param_1 + 0x3c) + local_24) == '\0') {
            return;
          }
          iVar5 = (*(code *)*puVar1)(*(int *)(param_1 + 0x3c),&local_24);
        } while (iVar2 != iVar5);
      }
      if ((int)((uint)*(byte *)(param_1 + 0x70) << 0x1d) < 0) {
        FUN_100997e0(param_1);
      }
      if ((*(int *)(param_1 + 0x30) != 0) &&
         (pcVar4 = (char *)FUN_1012bec6(*(undefined4 *)(param_1 + 0x2c)), *pcVar4 == '\0')) {
        FUN_10125af4(param_1);
      }
      FUN_10098174(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x4c),local_20);
      FUN_1012c34c(param_1);
      if ((int)((uint)*(byte *)(param_1 + 0x70) << 0x1d) < 0) {
        iVar2 = FUN_1011ea10(*(undefined4 *)(param_1 + 0x34));
        iVar5 = FUN_1011ea10(local_20);
        iVar2 = FUN_10094280(*(undefined4 *)(param_1 + 0x34),iVar5 + iVar2 + 1,DAT_10099b90);
        *(int *)(param_1 + 0x34) = iVar2;
        if (iVar2 == 0) {
          uVar7 = FUN_10094174(3,DAT_10099ba0,0x92,DAT_10099b90,DAT_10099b9c,DAT_10099b98,
                               DAT_10099b94);
          FUN_10119dc2(DAT_10099ba8,DAT_10099ba4,DAT_10099ba0,0x92,uVar7);
          FUN_10119dc2(DAT_10099bac);
          FUN_1011a1f0(DAT_10099ba0,0x92,extraout_r2,extraout_r3);
        }
        if (*(int *)(param_1 + 0x34) == 0) {
          return;
        }
        FUN_10094f64(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x4c),local_20);
        FUN_1009985c(param_1);
      }
      FUN_1009964c(param_1,*(int *)(param_1 + 0x4c) + 1);
      FUN_10086f50(param_1,0x1c,0);
    }
  }
  return;
}

