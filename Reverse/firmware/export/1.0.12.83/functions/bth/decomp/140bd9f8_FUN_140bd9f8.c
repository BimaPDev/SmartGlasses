/* FUN_140bd9f8 @ 0x140bd9f8 */

byte FUN_140bd9f8(int param_1,byte param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  byte local_10 [4];
  int local_c;
  
  pbVar2 = local_10;
  local_c = *DAT_140bda70;
  local_10[0] = param_2;
  pbVar3 = local_10;
  while( true ) {
    pbVar1 = pbVar3 + 1;
    *pbVar1 = param_2 << 1;
    if ((char)*pbVar3 < '\0') {
      *pbVar1 = param_2 << 1 ^ 0x1b;
    }
    if (pbVar1 == local_10 + 3) break;
    param_2 = *pbVar1;
    pbVar3 = pbVar1;
  }
  uVar4 = 0;
  bVar5 = 0;
  do {
    if ((param_1 >> (uVar4 & 0xff)) << 0x1f < 0) {
      bVar5 = bVar5 ^ *pbVar2;
    }
    uVar4 = uVar4 + 1;
    pbVar2 = pbVar2 + 1;
  } while (uVar4 != 4);
  if (*DAT_140bda70 != local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return bVar5;
}

