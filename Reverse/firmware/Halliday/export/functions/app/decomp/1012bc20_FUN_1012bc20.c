/* FUN_1012bc20 @ 0x1012bc20 */

void FUN_1012bc20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 100;
  *(byte *)(param_2 + 0x6c) = *(byte *)(param_2 + 0x6c) & 0xfc;
  *(undefined4 *)(param_2 + 0x58) = 0xffffffff;
  *(int *)(param_2 + 0x5c) = param_2;
  *(undefined4 *)(param_2 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(int *)(param_2 + 0x4c) = param_2;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  FUN_10124c20(param_2,8);
  FUN_10124c20(param_2,0x10);
  FUN_1012bbea(param_2,0,0,param_4);
  return;
}

