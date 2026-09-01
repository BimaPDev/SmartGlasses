/* FUN_10122306 @ 0x10122306 */

uint FUN_10122306(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  uVar1 = 0;
  pbVar3 = param_1;
  do {
    pbVar2 = pbVar3 + 1;
    uVar1 = (uint)*pbVar3 + (uVar1 >> 1) + uVar1 * 0x80 & 0xff;
    pbVar3 = pbVar2;
  } while (pbVar2 != param_1 + 0xb);
  return uVar1;
}

