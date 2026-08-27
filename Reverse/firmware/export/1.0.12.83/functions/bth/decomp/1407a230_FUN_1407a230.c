/* FUN_1407a230 @ 0x1407a230 */

bool FUN_1407a230(int *param_1)

{
  bool bVar1;
  
  if ((((((*param_1 == 0) || (*(char *)(*param_1 + 4) == '\0')) &&
        ((param_1[1] == 0 || (*(char *)(param_1[1] + 4) == '\0')))) &&
       ((param_1[2] == 0 || (*(char *)(param_1[2] + 4) == '\0')))) &&
      ((param_1[8] == 0 || (*(char *)(param_1[8] + 4) == '\0')))) &&
     ((((param_1[5] == 0 || (*(char *)(param_1[5] + 4) == '\0')) &&
       ((param_1[4] == 0 || (*(char *)(param_1[4] + 4) == '\0')))) &&
      ((param_1[7] == 0 || (*(char *)(param_1[7] + 4) == '\0')))))) {
    bVar1 = false;
    if (param_1[6] != 0) {
      return *(char *)(param_1[6] + 4) != '\0';
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

