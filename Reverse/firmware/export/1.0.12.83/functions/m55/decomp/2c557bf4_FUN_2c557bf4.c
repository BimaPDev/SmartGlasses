/* FUN_2c557bf4 @ 0x2c557bf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c557bf4(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[4];
  *param_1 = _LAB_2c557c28;
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[2], piVar1[2] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[2];
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[2], piVar1[2] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*piVar1 + 0xc))();
  }
  return param_1;
}

