/* FUN_2c4dc63c @ 0x2c4dc63c */

/* WARNING: Removing unreachable block (ram,0x2c4dc61e) */
/* WARNING: Removing unreachable block (ram,0x2c4dc612) */
/* WARNING: Removing unreachable block (ram,0x2c4dc60e) */
/* WARNING: Removing unreachable block (ram,0x2c4dc618) */
/* WARNING: Removing unreachable block (ram,0x2c4dc624) */

int * FUN_2c4dc63c(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[5];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = param_2[6];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = param_2[7];
  FUN_2c4ddaec(param_1,param_2 + 1);
  return param_1;
}

