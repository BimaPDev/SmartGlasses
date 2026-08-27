/* FUN_2c4dc7ac @ 0x2c4dc7ac */

/* WARNING: Removing unreachable block (ram,0x2c4dc78a) */
/* WARNING: Removing unreachable block (ram,0x2c4dc77a) */
/* WARNING: Removing unreachable block (ram,0x2c4dc776) */
/* WARNING: Removing unreachable block (ram,0x2c4dc782) */
/* WARNING: Removing unreachable block (ram,0x2c4dc792) */

int * FUN_2c4dc7ac(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[0xd];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = param_2[0xe];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = param_2[0xf];
  FUN_2c4dc6f4(param_1,param_2 + 1);
  return param_1;
}

