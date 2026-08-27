/* FUN_2c55c888 @ 0x2c55c888 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c55c888(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = _LAB_2c55c8cc;
  piVar2 = (int *)param_1[5];
  *param_1 = _LAB_2c55c8c8;
  param_1[1] = uVar1;
  if ((piVar2 != (int *)0x0) && (iVar3 = piVar2[2], piVar2[2] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar2 + 0xc))();
  }
  piVar2 = (int *)param_1[3];
  if ((piVar2 != (int *)0x0) && (iVar3 = piVar2[2], piVar2[2] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar2 + 0xc))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

