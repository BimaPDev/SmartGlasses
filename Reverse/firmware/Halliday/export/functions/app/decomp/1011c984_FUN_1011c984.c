/* FUN_1011c984 @ 0x1011c984 */

void FUN_1011c984(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  for (iVar2 = 0; (char)iVar2 < param_4; iVar2 = iVar2 + 1) {
    uVar4 = *(uint *)(param_2 + iVar2 * 4);
    uVar3 = (uVar4 - uVar1) - *(int *)(param_3 + iVar2 * 4);
    *(uint *)(param_1 + iVar2 * 4) = uVar3;
    if (uVar4 != uVar3) {
      uVar1 = (uint)(uVar4 < uVar3);
    }
  }
  return;
}

