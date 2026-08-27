/* FUN_2c63730a @ 0x2c63730a */

void FUN_2c63730a(undefined4 param_1,int param_2)

{
  byte bVar1;
  char in_NG;
  
  if ((in_NG != '\0') && (*(int *)(param_2 + 0x2c) != 0)) {
    FUN_2c62bea8();
  }
  bVar1 = *(byte *)(param_2 + 0x52);
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(byte *)(param_2 + 0x52) = bVar1 & 0xbf;
  if (-1 < (int)((uint)bVar1 << 0x1c)) {
    FUN_2c62bea8(*(undefined4 *)(param_2 + 0x24));
  }
  FUN_2c62bea8(*(undefined4 *)(param_2 + 0x28));
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

