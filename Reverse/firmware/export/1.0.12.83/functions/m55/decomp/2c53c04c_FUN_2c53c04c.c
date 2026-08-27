/* FUN_2c53c04c @ 0x2c53c04c */

bool FUN_2c53c04c(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    return *(int *)(param_1 + 0xc) != 0;
  }
  return false;
}

