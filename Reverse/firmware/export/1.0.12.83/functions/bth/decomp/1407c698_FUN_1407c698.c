/* FUN_1407c698 @ 0x1407c698 */

byte * FUN_1407c698(int *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (((char)param_1[3] != '\0') && (*(byte *)((int)param_1 + 10) == param_2)) {
    param_2 = (uint)(**(byte **)(*param_1 + 0x6c) >> 2);
  }
  pbVar2 = *(byte **)(*param_1 + 0x68);
  pbVar1 = pbVar2;
  if (pbVar2 != (byte *)0x0) {
    while ((pbVar1[2] == 0 || (param_2 != *pbVar1 >> 2))) {
      pbVar1 = *(byte **)(pbVar1 + 0x14);
      if (pbVar1 == (byte *)0x0) {
        while ((pbVar2[2] == 0 || ((uint)*(byte *)((int)param_1 + 0xb) != (uint)(*pbVar2 >> 2)))) {
          pbVar2 = *(byte **)(pbVar2 + 0x14);
          if (pbVar2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        pbVar1 = (byte *)0x0;
        if (*(byte *)((int)param_1 + 0xb) == param_2) {
          pbVar1 = pbVar2;
        }
        return pbVar1;
      }
    }
    return pbVar1;
  }
  return (byte *)0x0;
}

