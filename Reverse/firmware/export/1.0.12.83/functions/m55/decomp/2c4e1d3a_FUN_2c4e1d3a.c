/* FUN_2c4e1d3a @ 0x2c4e1d3a */

/* WARNING: Removing unreachable block (ram,0x2c4e1abc) */
/* WARNING: Removing unreachable block (ram,0x2c4e1aac) */
/* WARNING: Removing unreachable block (ram,0x2c4e1aa4) */
/* WARNING: Removing unreachable block (ram,0x2c4e1aa8) */
/* WARNING: Removing unreachable block (ram,0x2c4e1ab4) */
/* WARNING: Removing unreachable block (ram,0x2c4e1ac4) */

int * FUN_2c4e1d3a(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_2c4dda26(param_1,param_2 + 2,param_2,param_4,param_4);
  iVar2 = param_2[1];
  iVar1 = param_2[6];
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0xc)) = iVar1;
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = param_2[7];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = param_2[8];
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[9];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = param_2[10];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = param_2[0xb];
  FUN_2c4df4e6((int)param_1 + *(int *)(*param_1 + -0xc) + 0x10,0x100);
  return param_1;
}

