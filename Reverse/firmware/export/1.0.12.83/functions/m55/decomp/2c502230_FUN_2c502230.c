/* FUN_2c502230 @ 0x2c502230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c502230(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x16c) + 0xa0);
  lVar1 = (ulonglong)_LAB_2c502270 * (ulonglong)*(uint *)(iVar3 + 4);
  FUN_2c62be58(*(undefined4 *)(param_1 + 0x2c),(uint)((ulonglong)lVar1 >> 0x25),iVar3,(int)lVar1);
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x16c) + 0xa0) + 8) = 0;
  FUN_2c639338(*(undefined4 *)(param_1 + 0x10),0);
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar2 = FUN_2c629df4();
  *(undefined4 *)(iVar3 + 4) = uVar2;
  return;
}

