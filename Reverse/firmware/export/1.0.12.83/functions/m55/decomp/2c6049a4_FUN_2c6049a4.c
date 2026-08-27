/* FUN_2c6049a4 @ 0x2c6049a4 */

void FUN_2c6049a4(int param_1,uint param_2)

{
  byte bVar1;
  
  FUN_2c606bc8();
  bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x19);
  if ((bVar1 & 0xf) != param_2) {
    *(byte *)(*(int *)(param_1 + 8) + 0x19) = bVar1 & 0xf0 | (byte)param_2 & 0xf;
  }
  return;
}

