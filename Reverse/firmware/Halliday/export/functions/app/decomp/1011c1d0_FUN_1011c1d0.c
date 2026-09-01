/* FUN_1011c1d0 @ 0x1011c1d0 */

int FUN_1011c1d0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_10057234();
  if (iVar1 != 0) {
    uVar2 = FUN_10056618();
    param_2 = param_2 / uVar2;
  }
  if (*(uint *)(param_1 + 8) < param_2) {
    iVar1 = param_2 - *(int *)(param_1 + 8);
  }
  else {
    iVar1 = 0;
  }
  iVar3 = FUN_10057234();
  if (iVar3 != 0) {
    iVar3 = FUN_10056618();
    iVar1 = iVar3 * iVar1;
  }
  return iVar1;
}

