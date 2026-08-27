/* FUN_140728b0 @ 0x140728b0 */

void FUN_140728b0(byte *param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = param_1 + 0xf;
  pbVar3 = (byte *)(param_2 + 0x10);
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + -1;
    pbVar3 = pbVar3 + -1;
    *pbVar3 = bVar1 << 1 | *pbVar2 >> 7;
  } while (param_1 != pbVar2);
  *param_2 = *param_1 << 1;
  return;
}

