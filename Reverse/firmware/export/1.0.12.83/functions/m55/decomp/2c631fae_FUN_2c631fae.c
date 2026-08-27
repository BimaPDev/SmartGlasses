/* FUN_2c631fae @ 0x2c631fae */

void FUN_2c631fae(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_1 != 0) {
    FUN_2c6043d8();
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  bVar1 = *(byte *)(param_2 + 0x3c);
  if ((bVar1 & 0x10) != 0) {
    return;
  }
  FUN_2c62bea8(*(undefined4 *)(param_2 + 0x30));
  *(uint *)(param_2 + 0x30) = bVar1 & 0x10;
  return;
}

