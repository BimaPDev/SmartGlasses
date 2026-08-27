/* FUN_14043500 @ 0x14043500 */

undefined4 FUN_14043500(int param_1,int *param_2)

{
  if (*(char *)(DAT_14043530 + param_1 * 0x38 + 0x443) != '\0') {
    *param_2 = param_1 * 0x38 + DAT_14043530 + 0x44a;
    return 1;
  }
  *param_2 = param_1 * 0x38 + DAT_14043530 + 0x444;
  return 0;
}

