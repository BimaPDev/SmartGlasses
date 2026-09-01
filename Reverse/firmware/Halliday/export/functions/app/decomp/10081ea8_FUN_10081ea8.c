/* FUN_10081ea8 @ 0x10081ea8 */

undefined4 FUN_10081ea8(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar2 = *(byte **)(param_1 + 8);
  if (*(int *)(pbVar2 + 1) == DAT_10081ef8) {
    pbVar3 = pbVar2 + 10;
    for (iVar4 = 0; iVar4 < (int)(uint)*pbVar2; iVar4 = iVar4 + 1) {
      iVar1 = 0;
      while ((pbVar3[iVar1] == 0xff || (*(byte *)(param_2 + iVar1) == pbVar3[iVar1]))) {
        iVar1 = iVar1 + 1;
        if (iVar1 == 4) {
          *param_3 = pbVar3;
          return 0;
        }
      }
      pbVar3 = pbVar3 + 0x3c;
    }
    FUN_10119dc2(DAT_10081efc);
  }
  else {
    FUN_10119dc2(DAT_10081f00,*(int *)(pbVar2 + 1),param_3,pbVar2,param_4);
  }
  return 0xffffffff;
}

