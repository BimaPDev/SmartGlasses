/* FUN_1007da08 @ 0x1007da08 */

undefined4 FUN_1007da08(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar2 = *(byte **)(param_1 + 8);
  if (*(int *)(pbVar2 + 1) == DAT_1007da48) {
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
  }
  return 0xffffffff;
}

