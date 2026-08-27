/* FUN_2c482148 @ 0x2c482148 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c482148(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = _LAB_2c482168;
  if (*_LAB_2c482168 != 0) {
    *_LAB_2c48216c = param_1;
    return;
  }
  iVar3 = FUN_2c64419c(_LAB_2c482170);
  puVar2 = _LAB_2c48216c;
  *piVar1 = iVar3;
  *puVar2 = param_1;
  return;
}

