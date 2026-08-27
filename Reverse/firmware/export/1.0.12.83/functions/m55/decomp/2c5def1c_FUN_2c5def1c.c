/* FUN_2c5def1c @ 0x2c5def1c */

bool FUN_2c5def1c(int param_1)

{
  if (*(char *)(param_1 + 0x1f) != '\0') {
    return *(byte *)(param_1 + 0x21) - 3 < 2;
  }
  return *(byte *)(param_1 + 0x21) - 1 < 4;
}

