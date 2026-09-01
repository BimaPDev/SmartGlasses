/* FUN_1011e51c @ 0x1011e51c */

void FUN_1011e51c(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  
  sVar2 = *param_3;
  if (*param_2 <= *param_3) {
    sVar2 = *param_2;
  }
  sVar1 = param_2[1];
  *param_1 = sVar2;
  sVar2 = param_3[1];
  if (sVar1 <= param_3[1]) {
    sVar2 = sVar1;
  }
  sVar1 = param_2[2];
  param_1[1] = sVar2;
  sVar2 = param_3[2];
  if (param_3[2] < sVar1) {
    sVar2 = sVar1;
  }
  param_1[2] = sVar2;
  sVar2 = param_3[3];
  if (param_3[3] < param_2[3]) {
    sVar2 = param_2[3];
  }
  param_1[3] = sVar2;
  return;
}

