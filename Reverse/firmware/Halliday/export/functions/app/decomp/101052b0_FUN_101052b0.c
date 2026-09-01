/* FUN_101052b0 @ 0x101052b0 */

uint FUN_101052b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + param_3 * 4 + 0x10c);
  if (param_2 < 0) {
    uVar2 = param_2 - iVar1;
    uVar2 = uVar2 & (int)uVar2 >> 0x1f;
  }
  else {
    uVar2 = iVar1 + param_2;
    uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  }
  return uVar2;
}

