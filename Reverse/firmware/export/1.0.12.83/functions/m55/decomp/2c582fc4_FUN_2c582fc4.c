/* FUN_2c582fc4 @ 0x2c582fc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c582fc4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[10];
  *param_1 = _LAB_2c58300c;
  if ((piVar2 != (int *)0x0) && (iVar1 = piVar2[1], piVar2[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*piVar2 + 8))(piVar2);
    iVar1 = piVar2[2];
    piVar2[2] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
  }
  *param_1 = _LAB_2c583010;
  if ((undefined4 *)param_1[3] != param_1 + 5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  return param_1;
}

