/* FUN_10139378 @ 0x10139378 */

undefined4 FUN_10139378(int param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    return *(undefined4 *)(param_1 + (*(byte *)(param_1 + 0x1a) + 4) * 4);
  }
  return 0;
}

