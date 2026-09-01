/* FUN_1012a9f8 @ 0x1012a9f8 */

bool FUN_1012a9f8(int *param_1,int *param_2)

{
  if (((*param_1 <= param_2[2]) && (*param_2 <= param_1[2])) && (param_1[1] <= param_2[3])) {
    return param_2[1] <= param_1[3];
  }
  return false;
}

