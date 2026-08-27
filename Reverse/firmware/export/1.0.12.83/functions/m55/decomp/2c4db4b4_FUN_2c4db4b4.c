/* FUN_2c4db4b4 @ 0x2c4db4b4 */

/* WARNING: Removing unreachable block (ram,0x2c4db492) */
/* WARNING: Removing unreachable block (ram,0x2c4db482) */
/* WARNING: Removing unreachable block (ram,0x2c4db476) */
/* WARNING: Removing unreachable block (ram,0x2c4db47a) */
/* WARNING: Removing unreachable block (ram,0x2c4db48a) */
/* WARNING: Removing unreachable block (ram,0x2c4db496) */

int * FUN_2c4db4b4(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[0xe];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = param_2[0xf];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = param_2[0x10];
  param_1[0x2a] = param_2[0x11];
  FUN_2c4db3e0(param_1,param_2 + 1);
  return param_1;
}

