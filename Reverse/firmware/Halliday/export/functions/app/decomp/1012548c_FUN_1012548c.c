/* FUN_1012548c @ 0x1012548c */

byte FUN_1012548c(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0x22) >> 6;
  }
  return bVar1;
}

