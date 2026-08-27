/* FUN_14063254 @ 0x14063254 */

void FUN_14063254(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 == 0) && (*(int *)(param_1 + 0x10) != 0)) {
    FUN_140735a8();
  }
  bVar1 = *(byte *)(param_1 + 0xc);
  FUN_14074168(param_1,param_2);
  iVar2 = DAT_1405d860;
  uVar3 = *(uint *)(DAT_1405d860 + 0xa0);
  *(undefined4 *)(DAT_1405d860 + (bVar1 + 0x1a) * 4) = 0;
  *(uint *)(iVar2 + 0xa0) = uVar3 & ~(1 << (uint)bVar1);
  return;
}

