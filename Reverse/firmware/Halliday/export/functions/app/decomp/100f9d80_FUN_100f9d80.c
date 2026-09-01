/* FUN_100f9d80 @ 0x100f9d80 */

undefined4 FUN_100f9d80(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0x24;
  }
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) != 0)) {
    *(int **)(iVar1 + 0x58) = param_1;
    return 0;
  }
  return 0x23;
}

