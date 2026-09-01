/* FUN_10127012 @ 0x10127012 */

void FUN_10127012(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_10125af4();
  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) {
    iVar1 = FUN_1008af34(param_1);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = 0;
    bVar3 = *(int *)(iVar1 + 0x10) == param_1;
  }
  else {
    bVar3 = false;
    iVar1 = 0;
  }
  FUN_1008af98(param_1);
  if (iVar2 != 0) {
    FUN_10126802(iVar2);
    FUN_10086f50(iVar2,0x22,0);
    FUN_10086f50(iVar2,0x24,0);
  }
  if (bVar3) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}

