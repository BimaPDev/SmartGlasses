/* FUN_1013cefe @ 0x1013cefe */

void FUN_1013cefe(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = param_1[1];
  if ((param_1 != (int *)*param_1) && (iVar2 != 0)) {
    iVar1 = *(int *)(iVar2 + 8);
    if (iVar1 != 0) {
      iVar1 = iVar1 + -0x60;
    }
    if (param_3 != 0) {
      param_3 = param_3 + -0x60;
    }
    iVar2 = FUN_1013cbd6(iVar1,param_3,(int *)*param_1,iVar2,param_4);
    if ((iVar2 < 1) && (piVar4 = (int *)*param_1, param_1 != piVar4)) {
      for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        iVar2 = piVar4[2];
        if (iVar2 != 0) {
          iVar2 = iVar2 + -0x60;
        }
        iVar2 = FUN_1013cbd6(param_3,iVar2);
        if (0 < iVar2) {
          puVar3 = (undefined4 *)piVar4[1];
          *param_2 = (int)piVar4;
          param_2[1] = (int)puVar3;
          *puVar3 = param_2;
          piVar4[1] = (int)param_2;
          return;
        }
        if (piVar4 == (int *)param_1[1]) break;
      }
    }
  }
  puVar3 = (undefined4 *)param_1[1];
  *param_2 = (int)param_1;
  param_2[1] = (int)puVar3;
  *puVar3 = param_2;
  param_1[1] = (int)param_2;
  return;
}

