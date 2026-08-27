/* FUN_140605b0 @ 0x140605b0 */

void FUN_140605b0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_14074168();
  }
  if (param_2 == 0) {
    piVar4 = (int *)(param_1 + 0x18);
    do {
      piVar5 = piVar4 + 1;
      if (*piVar4 != 0) {
        FUN_140735a8();
      }
      piVar4 = piVar5;
    } while (piVar5 != (int *)(param_1 + 0x2c));
  }
  bVar1 = *(byte *)(param_1 + 0xc);
  FUN_14074168(param_1,param_2);
  iVar2 = DAT_1405d860;
  uVar3 = *(uint *)(DAT_1405d860 + 0xa0);
  *(undefined4 *)(DAT_1405d860 + (bVar1 + 0x1a) * 4) = 0;
  *(uint *)(iVar2 + 0xa0) = uVar3 & ~(1 << (uint)bVar1);
  return;
}

