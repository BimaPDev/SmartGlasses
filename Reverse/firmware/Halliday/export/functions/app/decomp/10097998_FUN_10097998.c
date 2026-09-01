/* FUN_10097998 @ 0x10097998 */

void FUN_10097998(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined8 uVar4;
  
  FUN_10125af4();
  iVar2 = *(int *)(param_1 + 0x2c);
  if (param_2 == 0) {
    param_2 = iVar2;
  }
  if (iVar2 == param_2) {
    if (-1 < (int)((uint)*(byte *)(param_1 + 0x54) << 0x1c)) {
      uVar3 = FUN_10095250();
      iVar2 = FUN_10094280(*(undefined4 *)(param_1 + 0x2c),uVar3,DAT_10097acc);
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 == 0) {
        uVar4 = FUN_10094174(3,DAT_10097adc,0x66,DAT_10097acc,DAT_10097ad8,DAT_10097ad4,DAT_10097ad0
                             ,param_4);
        FUN_10119dc2(DAT_10097ae4,DAT_10097ae0,DAT_10097adc,0x66,uVar4);
        FUN_10119dc2(DAT_10097ae8);
        FUN_1011a1f0(DAT_10097adc,0x66,extraout_r2,extraout_r3);
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
        return;
      }
      FUN_100952c4(*(int *)(param_1 + 0x2c));
      if (*(int *)(param_1 + 0x2c) == 0) {
        uVar4 = FUN_10094174(3,DAT_10097adc,0x6e,DAT_10097acc,DAT_10097ad8,DAT_10097ad4,DAT_10097ad0
                            );
        FUN_10119dc2(DAT_10097ae4,DAT_10097ae0,DAT_10097adc,0x6e,uVar4);
        FUN_10119dc2(DAT_10097ae8);
        FUN_1011a1f0(DAT_10097adc,0x6e,extraout_r2_00,extraout_r3_00);
        if (*(int *)(param_1 + 0x2c) == 0) {
          return;
        }
      }
      goto LAB_10097a4a;
    }
  }
  else if ((iVar2 != 0) && (bVar1 = *(byte *)(param_1 + 0x54), (bVar1 & 8) == 0)) {
    FUN_10094268(iVar2,DAT_10097acc);
    *(uint *)(param_1 + 0x2c) = bVar1 & 8;
  }
  uVar3 = FUN_10095250(param_2);
  iVar2 = FUN_10094254(uVar3,DAT_10097acc);
  *(int *)(param_1 + 0x2c) = iVar2;
  if (iVar2 == 0) {
    uVar4 = FUN_10094174(3,DAT_10097adc,0x7d,DAT_10097acc,DAT_10097ad8,DAT_10097ad4,DAT_10097ad0,
                         param_4);
    FUN_10119dc2(DAT_10097ae4,DAT_10097ae0,DAT_10097adc,0x7d,uVar4);
    FUN_10119dc2(DAT_10097ae8);
    FUN_1011a1f0(DAT_10097adc,0x7d,extraout_r2_01,extraout_r3_01);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  FUN_100952c4(param_2);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xf7;
LAB_10097a4a:
  FUN_100974b8(param_1);
  return;
}

