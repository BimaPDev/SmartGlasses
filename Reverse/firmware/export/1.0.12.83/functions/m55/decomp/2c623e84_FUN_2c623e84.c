/* FUN_2c623e84 @ 0x2c623e84 */

bool FUN_2c623e84(int param_1,char *param_2)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  if ((int)*param_2 == 0) {
    return false;
  }
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if (((((int)pcVar2 - (int)param_2 == 4) && ((uint)*(byte *)(param_1 + 4) == (int)*param_2)) &&
      ((uint)*(byte *)(param_1 + 5) == (int)param_2[1])) &&
     ((uint)*(byte *)(param_1 + 6) == (int)param_2[2])) {
    bVar1 = (uint)*(byte *)(param_1 + 7) == (int)param_2[3];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

