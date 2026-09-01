/* FUN_10064adc @ 0x10064adc */

void FUN_10064adc(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_10064b04;
  if ((*DAT_10064b04 != 0) && (*DAT_10064b04 == param_1)) {
    FUN_1011ea48(DAT_10064b04 + 1,0,0x10);
    *piVar1 = 0;
  }
  FUN_1012d1f4(param_1);
  return;
}

