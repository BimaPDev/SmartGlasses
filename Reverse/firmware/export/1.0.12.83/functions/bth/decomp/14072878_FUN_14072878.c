/* FUN_14072878 @ 0x14072878 */

void FUN_14072878(int param_1,int param_2,int param_3,char param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar3 = (int)(char)(param_4 + -1);
  if (-1 < iVar3) {
    iVar5 = iVar3 + 1;
    pbVar4 = (byte *)(param_2 + iVar5);
    pbVar1 = (byte *)(param_1 + iVar5);
    pbVar2 = (byte *)(param_3 + iVar5);
    do {
      pbVar4 = pbVar4 + -1;
      pbVar2 = pbVar2 + -1;
      iVar3 = (int)(char)((char)iVar3 + -1);
      pbVar1 = pbVar1 + -1;
      *pbVar1 = *pbVar4 ^ *pbVar2;
    } while (iVar3 != -1);
    return;
  }
  return;
}

