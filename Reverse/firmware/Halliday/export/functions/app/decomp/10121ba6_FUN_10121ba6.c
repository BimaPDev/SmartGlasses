/* FUN_10121ba6 @ 0x10121ba6 */

int FUN_10121ba6(int param_1,uint param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0xc);
  iVar3 = iVar6;
  for (uVar5 = 0; (int)uVar5 < (int)(uint)*(byte *)(iVar6 + 0x20); uVar5 = uVar5 + 1) {
    pbVar1 = (byte *)(iVar3 + 0x30);
    piVar2 = (int *)(iVar3 + 0x34);
    iVar3 = iVar3 + 0x1c;
    uVar4 = (uint)*pbVar1 * *piVar2;
    if (param_2 <= uVar4 && uVar4 - param_2 != 0) goto LAB_10121bcc;
    param_2 = param_2 - uVar4;
  }
  if (*(byte *)(iVar6 + 0x20) == uVar5) {
    iVar3 = -1;
  }
  else {
LAB_10121bcc:
    uVar5 = *(uint *)(uVar5 * 0x1c + iVar6 + 0x34);
    iVar3 = param_2 - uVar5 * (param_2 / uVar5);
  }
  return iVar3;
}

