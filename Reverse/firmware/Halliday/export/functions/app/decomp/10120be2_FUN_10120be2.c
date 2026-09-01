/* FUN_10120be2 @ 0x10120be2 */

void FUN_10120be2(int param_1,uint *param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = 0;
  piVar5 = *(int **)(param_1 + 0xc);
  iVar6 = param_4;
  for (uVar3 = 0; iVar1 = (uint)*(byte *)(*piVar5 + 0xb) * (uint)*(byte *)(*piVar5 + 10),
      iVar1 - uVar3 != 0 && (int)uVar3 <= iVar1; uVar3 = uVar3 + 1) {
    uVar2 = 1 << (uVar3 & 0xff);
    if ((uVar2 & param_3) != 0) {
      FUN_1011ea40(param_4 + uVar3 * 0x200,param_5 + iVar4,0x200,uVar2,iVar6);
      iVar4 = iVar4 + 0x200;
    }
  }
  *param_2 = *param_2 | param_3;
  return;
}

