/* FUN_2c477300 @ 0x2c477300 */

void FUN_2c477300(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if ((param_2 != (byte *)0x0) && (param_1 != 0)) {
    pbVar2 = param_2 + 6;
    pbVar1 = (byte *)(param_1 + -1);
    do {
      pbVar2 = pbVar2 + -1;
      pbVar1 = pbVar1 + 1;
      *pbVar1 = ~*pbVar2;
    } while (pbVar2 != param_2);
  }
  return;
}

