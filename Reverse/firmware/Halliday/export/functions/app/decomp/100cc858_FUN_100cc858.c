/* FUN_100cc858 @ 0x100cc858 */

byte * FUN_100cc858(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 extraout_r2;
  byte *pbVar3;
  int iVar4;
  
  pbVar1 = DAT_100cc890;
  iVar4 = 0;
  pbVar3 = DAT_100cc890;
  do {
    if (*pbVar3 == param_1) {
      iVar2 = FUN_10134500(param_2,pbVar3 + 1,param_3,(uint)*pbVar3,param_4);
      param_3 = extraout_r2;
      if (iVar2 == 0) {
        return pbVar1 + iVar4 * 0x10;
      }
    }
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 0x10;
  } while (iVar4 != 9);
  return (byte *)0x0;
}

