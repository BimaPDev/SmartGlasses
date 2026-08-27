/* FUN_140d1918 @ 0x140d1918 */

bool FUN_140d1918(uint *param_1,uint param_2)

{
  if (param_2 < *param_1) {
    return true;
  }
  return param_1[1] + *param_1 < param_2;
}

