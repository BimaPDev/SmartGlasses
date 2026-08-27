/* FUN_2c49d248 @ 0x2c49d248 */

int FUN_2c49d248(void)

{
  int iVar1;
  
  iVar1 = DAT_2c49d270;
  if (*(int *)(DAT_2c49d270 + 0x48) != 1) {
    return -1;
  }
  if (-3000 < *DAT_2c49d274) {
    return *DAT_2c49d274;
  }
  FUN_2c49cb44(DAT_2c49d270);
  return *(int *)(iVar1 + 0x2c);
}

