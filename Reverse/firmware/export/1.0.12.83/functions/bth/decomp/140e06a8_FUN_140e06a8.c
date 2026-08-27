/* FUN_140e06a8 @ 0x140e06a8 */

int FUN_140e06a8(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  iVar5 = *(int *)(param_2 + 0x10);
  iVar1 = 0;
  puVar6 = (uint *)(param_2 + 0x14);
  do {
    iVar1 = iVar1 + 1;
    uVar3 = param_3 * (*puVar6 & 0xffff) + param_4;
    uVar4 = param_3 * (*puVar6 >> 0x10) + (uVar3 >> 0x10);
    param_4 = uVar4 >> 0x10;
    *puVar6 = (uVar3 & 0xffff) + uVar4 * 0x10000;
    puVar6 = puVar6 + 1;
  } while (iVar1 < iVar5);
  iVar1 = param_2;
  if (param_4 != 0) {
    if (*(int *)(param_2 + 8) <= iVar5) {
      iVar1 = FUN_140e05e4(param_1,*(int *)(param_2 + 4) + 1);
      iVar2 = iVar1;
      if (iVar1 == 0) {
        iVar2 = FUN_140da8c8(DAT_140e0734,0xb5,0,DAT_140e0730);
      }
      FUN_140e5278(iVar2 + 0xc,param_2 + 0xc,(*(int *)(param_2 + 0x10) + 2) * 4);
      FUN_140e0664(param_1,param_2);
    }
    *(uint *)(iVar1 + iVar5 * 4 + 0x14) = param_4;
    *(int *)(iVar1 + 0x10) = iVar5 + 1;
  }
  return iVar1;
}

