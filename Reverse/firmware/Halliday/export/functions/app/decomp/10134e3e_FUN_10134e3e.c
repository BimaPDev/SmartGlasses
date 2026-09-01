/* FUN_10134e3e @ 0x10134e3e */

int FUN_10134e3e(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
    iVar1 = iVar1 + (uint)*(ushort *)(param_1 + 3);
  }
  return iVar1;
}

