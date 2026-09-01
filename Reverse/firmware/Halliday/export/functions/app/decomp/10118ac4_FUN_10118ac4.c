/* FUN_10118ac4 @ 0x10118ac4 */

int FUN_10118ac4(byte *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = param_2;
  while( true ) {
    if (param_2 + param_3 == pbVar2) {
      return 0;
    }
    uVar3 = (uint)*param_1;
    uVar1 = (uint)*pbVar2;
    if ((*(byte *)(uVar3 + DAT_10118b04) & 3) == 1) {
      uVar3 = uVar3 + 0x20;
    }
    if ((*(byte *)(DAT_10118b04 + uVar1) & 3) == 1) {
      uVar1 = uVar1 + 0x20;
    }
    if (uVar3 - uVar1 != 0) break;
    pbVar2 = pbVar2 + 1;
    param_1 = param_1 + 1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return uVar3 - uVar1;
}

