/* FUN_2c4decac @ 0x2c4decac */

/* WARNING: Removing unreachable block (ram,0x2c4dec8e) */
/* WARNING: Removing unreachable block (ram,0x2c4dec84) */
/* WARNING: Removing unreachable block (ram,0x2c4dec88) */
/* WARNING: Removing unreachable block (ram,0x2c4dec94) */

int * FUN_2c4decac(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[1];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = param_2[2];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = param_2[3];
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    FUN_2c4dfc14(iVar1);
    FUN_2c4dfafa(iVar1);
  }
  return param_1;
}

