/* FUN_2c4d129c @ 0x2c4d129c */

void FUN_2c4d129c(char *param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  if (*param_1 != '\0') {
    iVar5 = (int)*(short *)(param_2 + (uint)(byte)param_1[2] * 2);
    pbVar4 = (byte *)(param_1 + 2);
    do {
      iVar5 = iVar5 + (uint)pbVar4[1];
      uVar3 = (uint)pbVar4[5];
      iVar1 = *(int *)(param_3 + iVar5 * 4);
      pbVar2 = pbVar4 + (-1 - (int)param_1);
      if (iVar1 < 1) {
        uVar3 = -uVar3;
      }
      *(uint *)(param_3 + iVar5 * 4) = iVar1 + uVar3;
      pbVar4 = pbVar4 + 1;
    } while ((int)pbVar2 <= (int)(uint)(byte)param_1[1]);
    return;
  }
  return;
}

