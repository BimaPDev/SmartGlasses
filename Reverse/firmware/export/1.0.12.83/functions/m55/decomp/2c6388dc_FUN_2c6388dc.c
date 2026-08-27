/* FUN_2c6388dc @ 0x2c6388dc */

void FUN_2c6388dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  byte bVar2;
  
  FUN_2c62e838(param_1,DAT_2c63895c);
  FUN_2c62e838(param_1,DAT_2c638960);
  uVar1 = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  bVar2 = *(byte *)(param_1 + 0x52) & 7;
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xdf | (param_2 - 3U < 3) << 5;
  if (bVar2 == 1) {
    if (*(int *)(param_1 + 0x30) == -1) goto LAB_2c63891c;
    FUN_2c637248(param_1);
    bVar2 = *(byte *)(param_1 + 0x52) & 7;
    uVar1 = extraout_r1_00;
  }
  if ((bVar2 == 2) && (*(int *)(param_1 + 0x34) != -1)) {
    FUN_2c637248(param_1);
    uVar1 = extraout_r1;
  }
LAB_2c63891c:
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xf8 | (byte)param_2 & 7;
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  FUN_2c637b3c(param_1,uVar1,*(int *)(param_1 + 0x24),param_4);
  return;
}

