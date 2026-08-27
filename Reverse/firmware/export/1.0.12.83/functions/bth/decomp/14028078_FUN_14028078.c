/* FUN_14028078 @ 0x14028078 */

undefined4 FUN_14028078(int param_1,int param_2)

{
  param_2 = param_2 * 16000;
  if ((param_2 != 0) && (param_2 == 0 || param_2 + -1 != 0)) {
    *(int *)(DAT_140280a8 + param_1 * 4) = param_2 + -1;
    return 0;
  }
  *(undefined4 *)(DAT_140280a8 + param_1 * 4) = 1;
  return 0;
}

