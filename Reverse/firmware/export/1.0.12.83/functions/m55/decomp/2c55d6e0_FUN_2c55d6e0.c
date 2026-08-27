/* FUN_2c55d6e0 @ 0x2c55d6e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c55d6e0(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = _LAB_2c55d71c;
  piVar2 = (int *)param_1[5];
  *param_1 = _LAB_2c55d718;
  param_1[1] = uVar1;
  if ((piVar2 != (int *)0x0) && (iVar3 = piVar2[2], piVar2[2] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar2 + 0xc))();
  }
  piVar2 = (int *)param_1[3];
  if ((piVar2 != (int *)0x0) && (iVar3 = piVar2[2], piVar2[2] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar2 + 0xc))();
  }
  return param_1;
}

