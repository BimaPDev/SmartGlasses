/* FUN_2c4dbc72 @ 0x2c4dbc72 */

/* WARNING: Removing unreachable block (ram,0x2c4dbc38) */
/* WARNING: Removing unreachable block (ram,0x2c4dbc2c) */
/* WARNING: Removing unreachable block (ram,0x2c4dbc1c) */
/* WARNING: Removing unreachable block (ram,0x2c4dbc18) */
/* WARNING: Removing unreachable block (ram,0x2c4dbc24) */
/* WARNING: Removing unreachable block (ram,0x2c4dbc34) */
/* WARNING: Removing unreachable block (ram,0x2c4dbc0c) */

int * FUN_2c4dbc72(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[0x18];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = param_2[0x19];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = param_2[0x1a];
  iVar1 = param_2[0x1b];
  param_1[0x2a] = iVar1;
  FUN_2c4db594(param_1,param_2 + 1,param_2,iVar1,param_4);
  return param_1;
}

