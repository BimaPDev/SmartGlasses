/* FUN_100c7f60 @ 0x100c7f60 */

undefined4 FUN_100c7f60(int param_1)

{
  if (*(int *)(DAT_100c7f84 + 0x174) != 0) {
    return 0xffffff88;
  }
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    *(int *)(DAT_100c7f84 + 0x174) = param_1;
    return 0;
  }
  return 0xffffffea;
}

