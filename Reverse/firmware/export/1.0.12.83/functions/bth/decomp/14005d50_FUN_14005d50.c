/* FUN_14005d50 @ 0x14005d50 */

/* WARNING: Removing unreachable block (ram,0x14003a18) */

undefined4 FUN_14005d50(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_14005d70 + 0x14);
  if ((iVar1 != 0) &&
     ((*(int **)(iVar1 + 0x38) <= *(int **)(iVar1 + 0x30) ||
      (**(int **)(iVar1 + 0x30) != DAT_14005d74)))) {
    return 0;
  }
  return param_1;
}

