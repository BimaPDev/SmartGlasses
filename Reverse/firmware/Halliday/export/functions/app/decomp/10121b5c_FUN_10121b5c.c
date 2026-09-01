/* FUN_10121b5c @ 0x10121b5c */

uint FUN_10121b5c(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0xc);
  uVar5 = 0;
  iVar3 = iVar6;
  uVar2 = 0;
  while ((uVar2 & 0xff) < (uint)*(byte *)(iVar6 + 0x20)) {
    pbVar1 = (byte *)(iVar3 + 0x30);
    uVar4 = (uint)*pbVar1 * *(int *)(iVar3 + 0x34);
    iVar3 = iVar3 + 0x1c;
    if (param_2 <= uVar4 && uVar4 - param_2 != 0) goto LAB_10121b8a;
    param_2 = param_2 - uVar4;
    uVar5 = *pbVar1 + uVar5 & 0xff;
    uVar2 = uVar2 + 1;
  }
  if ((uint)*(byte *)(iVar6 + 0x20) == (uVar2 & 0xff)) {
    uVar2 = 0xff;
  }
  else {
LAB_10121b8a:
    uVar2 = param_2 / *(uint *)(uVar2 * 0x1c + iVar6 + 0x34) + uVar5 & 0xff;
  }
  return uVar2;
}

