/* FUN_100cc7d4 @ 0x100cc7d4 */

byte * FUN_100cc7d4(uint param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar1 = DAT_100cc810;
  iVar4 = 0;
  pbVar3 = DAT_100cc810;
  do {
    if (*pbVar3 == param_1) {
      iVar2 = FUN_10134500(pbVar3 + 1,param_2);
      if (iVar2 == 0) {
        return pbVar1 + iVar4 * 0xc;
      }
    }
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 0xc;
  } while (iVar4 != 9);
  return (byte *)0x0;
}

