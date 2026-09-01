/* FUN_100fb334 @ 0x100fb334 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100fb334(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_2c [2];
  
  local_2c[0] = 0;
  if (((param_1 == (int *)0x0) || (param_3 == (int *)0x0)) || (iVar6 = *param_3, iVar6 == 0)) {
    return 6;
  }
  iVar7 = *param_1;
  if (iVar7 < 1) {
    if (iVar7 == 0) {
      _MasterStackPointer = *param_3;
      _Reset = param_3[1];
      _NMI = param_3[2];
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x100fb40c);
      (*pcVar4)();
    }
    piVar1 = (int *)0x0;
    local_2c[0] = 6;
    goto LAB_100fb3cc;
  }
  iVar5 = *(int *)(iVar6 + 100);
  piVar1 = (int *)(**(code **)(iVar5 + 4))(iVar5,iVar7);
  if (piVar1 == (int *)0x0) {
    local_2c[0] = 0x40;
    goto LAB_100fb3cc;
  }
  FUN_1011ea48(piVar1,0,iVar7);
  iVar7 = *param_3;
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  pcVar4 = (code *)param_1[1];
  local_2c[0] = 0;
  piVar1[3] = (int)param_1;
  *piVar1 = iVar7;
  piVar1[1] = iVar2;
  piVar1[2] = iVar3;
  if (pcVar4 == (code *)0x0) {
LAB_100fb39c:
    iVar7 = FUN_100fb280(iVar5,4,*(int *)(iVar6 + 0x24),*(int *)(iVar6 + 0x24) + 1,
                         *(undefined4 *)(iVar6 + 0x28),local_2c);
    *(int *)(iVar6 + 0x28) = iVar7;
    if (local_2c[0] == 0) {
      iVar5 = *(int *)(iVar6 + 0x24);
      *(int *)(iVar6 + 0x24) = iVar5 + 1;
      *(int **)(iVar7 + iVar5 * 4) = piVar1;
      goto LAB_100fb3cc;
    }
  }
  else {
    local_2c[0] = (*pcVar4)(piVar1,param_2);
    if (local_2c[0] == 0) goto LAB_100fb39c;
  }
  iVar6 = *(int *)(*piVar1 + 100);
  if (*(code **)(piVar1[3] + 8) != (code *)0x0) {
    (**(code **)(piVar1[3] + 8))(piVar1);
  }
  (**(code **)(iVar6 + 8))(iVar6,piVar1);
  piVar1 = (int *)0x0;
LAB_100fb3cc:
  if (param_4 != (int *)0x0) {
    *param_4 = (int)piVar1;
  }
  return local_2c[0];
}

