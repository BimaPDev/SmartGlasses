/* FUN_1012cecc @ 0x1012cecc */

void FUN_1012cecc(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  piVar2 = (int *)FUN_1008bbb4();
  iVar3 = *(int *)(*piVar2 + 0x4c);
  piVar2 = *(int **)(iVar3 + 4);
  if (param_1 != (int *)0x0) {
    local_18 = *param_1 + *piVar2;
    local_14 = param_1[1] + piVar2[1];
    local_10 = param_1[2] + *piVar2;
    piVar1 = piVar2 + 1;
    piVar2 = &local_18;
    local_c = param_1[3] + *piVar1;
  }
  FUN_1009af58(iVar3,2,piVar2);
  FUN_1009b254(iVar3,piVar2);
  return;
}

