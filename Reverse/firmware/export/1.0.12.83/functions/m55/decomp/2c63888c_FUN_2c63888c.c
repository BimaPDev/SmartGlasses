/* FUN_2c63888c @ 0x2c63888c */

void FUN_2c63888c(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x52);
  if ((bVar1 & 8) == 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_2c62bea8();
      *(uint *)(param_1 + 0x24) = bVar1 & 8;
    }
    if (param_2 == 0) {
      return;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      return;
    }
    goto LAB_2c6388b6;
  }
  *(int *)(param_1 + 0x24) = param_2;
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) | 8;
LAB_2c6388b6:
  FUN_2c637b3c(param_1);
  return;
}

