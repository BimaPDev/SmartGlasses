/* FUN_2c66960c @ 0x2c66960c */

int FUN_2c66960c(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)(param_2 + -1);
  pbVar2 = param_1 + param_3;
  while( true ) {
    if (param_1 == pbVar2) {
      return 0;
    }
    pbVar1 = pbVar1 + 1;
    if ((uint)*param_1 != (uint)*pbVar1) break;
    param_1 = param_1 + 1;
  }
  return (uint)*param_1 - (uint)*pbVar1;
}

