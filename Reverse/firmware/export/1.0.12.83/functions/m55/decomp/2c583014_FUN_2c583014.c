/* FUN_2c583014 @ 0x2c583014 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c583014(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[10];
  *param_1 = _LAB_2c583064;
  if ((piVar3 != (int *)0x0) && (iVar2 = piVar3[1], piVar3[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*piVar3 + 8))(piVar3);
    iVar2 = piVar3[2];
    piVar3[2] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
  }
  uVar1 = _LAB_2c583068;
  *param_1 = _LAB_2c583068;
  if ((undefined4 *)param_1[3] != param_1 + 5) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,param_1,uVar1,param_1 + 5,param_4);
}

