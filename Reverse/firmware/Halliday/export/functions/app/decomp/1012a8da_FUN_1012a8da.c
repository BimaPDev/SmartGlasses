/* FUN_1012a8da @ 0x1012a8da */

void FUN_1012a8da(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (*param_2 < *param_3) {
    *param_1 = *param_2;
  }
  else {
    *param_1 = *param_3;
  }
  if (param_2[1] < param_3[1]) {
    param_1[1] = param_2[1];
  }
  else {
    param_1[1] = param_3[1];
  }
  iVar1 = param_3[3];
  if (param_3[2] < param_2[2]) {
    param_1[2] = param_2[2];
  }
  else {
    param_1[2] = param_3[2];
  }
  if (iVar1 < param_2[3]) {
    param_1[3] = param_2[3];
  }
  else {
    param_1[3] = iVar1;
  }
  return;
}

