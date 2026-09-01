/* FUN_101247a0 @ 0x101247a0 */

int FUN_101247a0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10087650();
  iVar2 = 0;
  for (; param_1 != 0; param_1 = (int)((100 - (uint)*(byte *)(*piVar1 + 0x19)) * param_1) / 100) {
    iVar2 = iVar2 + param_1;
  }
  return iVar2;
}

