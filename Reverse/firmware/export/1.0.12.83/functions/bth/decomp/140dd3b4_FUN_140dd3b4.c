/* FUN_140dd3b4 @ 0x140dd3b4 */

int FUN_140dd3b4(byte *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    pbVar3 = (byte *)(param_2 + -1);
    pbVar4 = param_1;
    do {
      uVar1 = (uint)*pbVar4;
      pbVar3 = pbVar3 + 1;
      if ((uVar1 != *pbVar3) || (pbVar4 + 1 == param_1 + param_3)) break;
      pbVar4 = pbVar4 + 1;
    } while (uVar1 != 0);
    iVar2 = uVar1 - *pbVar3;
  }
  return iVar2;
}

