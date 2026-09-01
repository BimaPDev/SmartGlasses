/* FUN_1011c726 @ 0x1011c726 */

void FUN_1011c726(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = 0;
  for (iVar2 = 0; (char)iVar2 < param_4; iVar2 = iVar2 + 1) {
    uVar4 = *(uint *)(param_2 + iVar2 * 4);
    uVar3 = *(int *)(param_3 + iVar2 * 4) + uVar4 + uVar1;
    bVar6 = uVar4 < uVar3;
    bVar5 = uVar4 != uVar3;
    if (uVar3 < uVar4) {
      uVar4 = 1;
    }
    if (bVar6 || !bVar5) {
      uVar4 = 0;
    }
    *(uint *)(param_1 + iVar2 * 4) = uVar3;
    if (bVar5) {
      uVar1 = uVar4;
    }
  }
  return;
}

