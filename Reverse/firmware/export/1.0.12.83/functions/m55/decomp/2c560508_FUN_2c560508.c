/* FUN_2c560508 @ 0x2c560508 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c560508(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = _LAB_2c560558;
  if (param_1[7] != 0) {
    FUN_2c58d410(param_1 + 7);
  }
  if (param_1[6] != 0) {
    FUN_2c58d410(param_1 + 6);
  }
  piVar2 = (int *)param_1[5];
  if ((piVar2 != (int *)0x0) && (iVar1 = piVar2[1], piVar2[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*piVar2 + 8))(piVar2);
    iVar1 = piVar2[2];
    piVar2[2] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1);
}

