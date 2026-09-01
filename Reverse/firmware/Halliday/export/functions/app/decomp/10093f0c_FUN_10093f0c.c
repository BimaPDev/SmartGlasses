/* FUN_10093f0c @ 0x10093f0c */

undefined2 FUN_10093f0c(int *param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if (param_2 == (undefined1 *)0x0) {
    FUN_10094174(2,DAT_10094010,0x3c,DAT_1009400c,DAT_10094008);
    uVar1 = 0xb;
  }
  else {
    iVar2 = FUN_10093ee0(*param_2);
    if (iVar2 == 0) {
      FUN_10094174(2,DAT_10094010,0x44,DAT_1009400c,DAT_10094014,param_2);
      uVar1 = 3;
    }
    else if ((*(code **)(iVar2 + 4) == (code *)0x0) ||
            (iVar3 = (**(code **)(iVar2 + 4))(), iVar3 != 0)) {
      if (*(code **)(iVar2 + 8) == (code *)0x0) {
        FUN_10094174(2,DAT_10094010,0x50,DAT_1009400c,DAT_1009401c,param_2);
        uVar1 = 9;
      }
      else {
        if (param_2[1] == ':') {
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 1;
        }
        iVar3 = (**(code **)(iVar2 + 8))(iVar2,param_2,param_3);
        if (iVar3 - 1U < 0xfffffffd || iVar3 == -2) {
          *param_1 = iVar3;
          param_1[1] = iVar2;
          uVar1 = 0;
          if (*(short *)(iVar2 + 2) != 0) {
            iVar2 = FUN_10094254(0x10,DAT_1009400c);
            param_1[2] = iVar2;
            if (iVar2 == 0) {
              uVar5 = FUN_10094174(3,DAT_10094010,0x60,DAT_1009400c,DAT_10094028,DAT_10094024,
                                   DAT_10094020);
              FUN_10119dc2(DAT_10094030,DAT_1009402c,DAT_10094010,0x60,uVar5);
              FUN_10119dc2(DAT_10094034);
              FUN_1011a1f0(DAT_10094010,0x60,extraout_r2,extraout_r3);
            }
            FUN_1012af64(param_1[2],0x10);
            puVar4 = (undefined4 *)param_1[2];
            uVar1 = 0;
            *puVar4 = 0xffffffff;
            puVar4[1] = 0xfffffffe;
          }
        }
        else {
          uVar1 = 0xc;
        }
      }
    }
    else {
      FUN_10094174(2,DAT_10094010,0x4a,DAT_1009400c,DAT_10094018,param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}

