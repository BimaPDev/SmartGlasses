/* FUN_2c49d154 @ 0x2c49d154 */

int FUN_2c49d154(void)

{
  int iVar1;
  
  iVar1 = DAT_2c49d178;
  if (*(int *)(DAT_2c49d178 + 0x48) != 1) {
    return 0x14;
  }
  if (-1 < *DAT_2c49d17c) {
    return *DAT_2c49d17c;
  }
  FUN_2c49cbf8(DAT_2c49d178);
  return *(int *)(iVar1 + 0x20);
}

