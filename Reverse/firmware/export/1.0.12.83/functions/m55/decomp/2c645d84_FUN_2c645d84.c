/* FUN_2c645d84 @ 0x2c645d84 */

/* WARNING: Removing unreachable block (ram,0x2c6438a8) */

undefined4 FUN_2c645d84(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_2c645da4 + 0x14);
  if ((iVar1 != 0) &&
     ((*(int **)(iVar1 + 0x38) <= *(int **)(iVar1 + 0x30) ||
      (**(int **)(iVar1 + 0x30) != DAT_2c645da8)))) {
    return 0;
  }
  return param_1;
}

