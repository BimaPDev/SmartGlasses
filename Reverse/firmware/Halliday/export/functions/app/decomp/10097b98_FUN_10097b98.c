/* FUN_10097b98 @ 0x10097b98 */

void FUN_10097b98(int param_1,int param_2)

{
  byte bVar1;
  
  FUN_100932b0(param_1,DAT_10097bf4);
  FUN_100932b0(param_1,DAT_10097bf8);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  bVar1 = *(byte *)(param_1 + 0x54);
  *(byte *)(param_1 + 0x54) = bVar1 & 0xdf | (param_2 - 2U < 3) << 5;
  if (((bVar1 & 7) == 1) && (*(int *)(param_1 + 0x34) != -1)) {
    FUN_10096eec(param_1);
  }
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xf8 | (byte)param_2 & 7;
  FUN_100974b8(param_1);
  return;
}

