/* FUN_1407358c @ 0x1407358c */

undefined4 FUN_1407358c(int param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0xb) != '\0')) {
    *(char *)(param_1 + 0xb) = *(char *)(param_1 + 0xb) + '\x01';
    *(undefined1 *)(param_1 + 0x2c) = 0xa5;
    return 0;
  }
  return 1;
}

