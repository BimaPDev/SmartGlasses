/* FUN_10097aec @ 0x10097aec */

void FUN_10097aec(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = FUN_10094174(3,DAT_10097b84,0x96,DAT_10097b88,DAT_10097b80,DAT_10097b7c,DAT_10097b78);
    FUN_10119dc2(DAT_10097b90,DAT_10097b8c,DAT_10097b84,0x96,uVar3);
    FUN_10119dc2(DAT_10097b94);
    FUN_1011a1f0(DAT_10097b84,0x96,extraout_r2,extraout_r3);
  }
  FUN_10125af4(param_1);
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      bVar1 = *(byte *)(param_1 + 0x54);
      if ((bVar1 & 8) == 0) {
        FUN_10094268(*(int *)(param_1 + 0x2c),DAT_10097b88);
        *(uint *)(param_1 + 0x2c) = bVar1 & 8;
      }
    }
    uVar2 = FUN_10095000(param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xf7;
  }
  FUN_100974b8(param_1);
  return;
}

