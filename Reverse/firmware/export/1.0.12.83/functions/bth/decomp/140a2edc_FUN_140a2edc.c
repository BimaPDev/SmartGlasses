/* FUN_140a2edc @ 0x140a2edc */

uint FUN_140a2edc(uint param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar3;
  byte *pbVar2;
  
  uVar3 = ~param_1;
  if (param_3 != 0) {
    pbVar2 = param_2;
    do {
      pbVar1 = pbVar2 + 1;
      uVar3 = *(uint *)(DAT_140a2f04 + ((*pbVar2 ^ uVar3) & 0xff) * 4) ^ uVar3 >> 8;
      pbVar2 = pbVar1;
    } while (pbVar1 != param_2 + param_3);
    param_1 = ~uVar3;
  }
  return param_1;
}

