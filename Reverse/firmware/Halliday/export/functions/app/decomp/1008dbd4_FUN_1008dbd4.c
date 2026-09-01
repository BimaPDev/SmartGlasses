/* FUN_1008dbd4 @ 0x1008dbd4 */

int FUN_1008dbd4(undefined4 *param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  FUN_10128176(param_1,0x28);
  if ((param_2 == 0) ||
     ((iVar4 = FUN_101277b8(param_2), iVar4 == 0 && (*(int *)(param_2 + 8) == 0)))) {
    iVar4 = 0;
  }
  else {
    *(undefined2 *)(param_1 + 2) = param_3;
    *(char *)(param_1 + 4) = (char)iVar4;
    param_1[3] = param_4;
    if (iVar4 == 1) {
      iVar4 = FUN_1011ea10(param_2);
      iVar4 = FUN_10094254(iVar4 + 1,DAT_1008dcec);
      param_1[1] = iVar4;
      if (iVar4 == 0) {
        uVar5 = FUN_10094174(3,DAT_1008dcfc,0x7d,DAT_1008dcec,DAT_1008dcf8,DAT_1008dcf4,DAT_1008dcf0
                            );
        FUN_10119dc2(DAT_1008dd04,DAT_1008dd00,DAT_1008dcfc,0x7d,uVar5);
        FUN_10119dc2(DAT_1008dd08);
        FUN_1011a1f0(DAT_1008dcfc,0x7d,extraout_r2,extraout_r3);
      }
      if (param_1[1] == 0) {
        FUN_10094174(2,DAT_1008dcfc,0x7f,DAT_1008dcec,DAT_1008dd0c);
        return 0;
      }
      FUN_1011e9f0(param_1[1],param_2);
    }
    else {
      param_1[1] = param_2;
    }
    puVar2 = (undefined4 *)FUN_1012b06a(DAT_1008dd10);
    uVar1 = DAT_1008dd10;
    iVar4 = 0;
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)FUN_1012b076(uVar1,puVar2)) {
      if ((((code *)*puVar2 != (code *)0x0) && (puVar2[1] != 0)) &&
         (iVar4 = (*(code *)*puVar2)(puVar2,param_2,param_1 + 5), iVar4 == 1)) {
        pcVar3 = (code *)puVar2[1];
        *param_1 = puVar2;
        iVar4 = (*pcVar3)(puVar2,param_1);
        if (iVar4 == 1) {
          return 1;
        }
        FUN_10128176(param_1 + 5,4);
        param_1[8] = 0;
        param_1[6] = 0;
        param_1[9] = 0;
        param_1[7] = 0;
      }
    }
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_10094268(param_1[1],DAT_1008dcec);
    }
  }
  return iVar4;
}

