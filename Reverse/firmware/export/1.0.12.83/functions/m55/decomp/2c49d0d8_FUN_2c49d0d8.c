/* FUN_2c49d0d8 @ 0x2c49d0d8 */

int FUN_2c49d0d8(void)

{
  int iVar1;
  
  iVar1 = DAT_2c49d100;
  if (*(int *)(DAT_2c49d100 + 0x48) != 1) {
    return -1;
  }
  if (-3000 < *DAT_2c49d104) {
    return *DAT_2c49d104;
  }
  FUN_2c49cb44(DAT_2c49d100);
  return *(int *)(iVar1 + 0x2c);
}

