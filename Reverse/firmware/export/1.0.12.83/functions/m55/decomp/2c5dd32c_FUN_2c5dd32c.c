/* FUN_2c5dd32c @ 0x2c5dd32c */

undefined4 FUN_2c5dd32c(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc);
  }
  return DAT_2c5dd338;
}

