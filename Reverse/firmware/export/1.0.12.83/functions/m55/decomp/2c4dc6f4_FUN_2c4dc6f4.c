/* FUN_2c4dc6f4 @ 0x2c4dc6f4 */

/* WARNING: Removing unreachable block (ram,0x2c4dc6d2) */
/* WARNING: Removing unreachable block (ram,0x2c4dc6c2) */
/* WARNING: Removing unreachable block (ram,0x2c4dc6be) */
/* WARNING: Removing unreachable block (ram,0x2c4dc6ca) */
/* WARNING: Removing unreachable block (ram,0x2c4dc6da) */

int * FUN_2c4dc6f4(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[9];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = param_2[10];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = param_2[0xb];
  FUN_2c4dc63c(param_1,param_2 + 1);
  return param_1;
}

