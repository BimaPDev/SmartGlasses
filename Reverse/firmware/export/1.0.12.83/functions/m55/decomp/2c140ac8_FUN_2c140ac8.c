/* FUN_2c140ac8 @ 0x2c140ac8 */

/* WARNING: Removing unreachable block (ram,0x2c13ec70) */

undefined4 FUN_2c140ac8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c140ae8 + 0x14);
  if ((iVar1 != 0) &&
     ((*(int **)(iVar1 + 0x38) <= *(int **)(iVar1 + 0x30) ||
      (**(int **)(iVar1 + 0x30) != DAT_2c140aec)))) {
    return 0;
  }
  return param_1;
}

