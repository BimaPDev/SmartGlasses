/* FUN_10133de0 @ 0x10133de0 */

int FUN_10133de0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
    iVar1 = iVar1 + (uint)*(ushort *)(param_1 + 3);
  }
  return iVar1;
}

