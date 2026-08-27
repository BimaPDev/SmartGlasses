/* FUN_2c623e50 @ 0x2c623e50 */

uint FUN_2c623e50(int param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 != 0) {
    pbVar3 = (byte *)(param_1 + -1);
    uVar1 = 0xffffffff;
    pbVar2 = pbVar3 + param_2;
    do {
      pbVar3 = pbVar3 + 1;
      uVar1 = *(uint *)(DAT_2c623e80 + ((*pbVar3 ^ uVar1) & 0xff) * 4) ^ uVar1 >> 8;
    } while (pbVar2 != pbVar3);
    return ~uVar1;
  }
  return 0;
}

