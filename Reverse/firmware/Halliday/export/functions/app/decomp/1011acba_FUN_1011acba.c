/* FUN_1011acba @ 0x1011acba */

undefined4 FUN_1011acba(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*(char *)(param_2[3] + 0x10) == '\x02') && (param_1 == 10)) {
    FUN_1011acba(0xd);
  }
  *(char *)(*param_2 + *(int *)param_2[4]) = (char)param_1;
  iVar1 = *(int *)param_2[4] + 1;
  *(int *)param_2[4] = iVar1;
  if (iVar1 == param_2[1]) {
    FUN_1011aca2(param_2);
  }
  return 0;
}

