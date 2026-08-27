/* FUN_2c482a9c @ 0x2c482a9c */

void FUN_2c482a9c(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    pbVar2 = (byte *)(param_2 + -1);
    pbVar1 = (byte *)(param_1 + -1);
    do {
      pbVar2 = pbVar2 + 1;
      pbVar1 = pbVar1 + 1;
      *pbVar1 = ~*pbVar2;
    } while (pbVar2 != (byte *)(param_2 + 5));
  }
  return;
}

