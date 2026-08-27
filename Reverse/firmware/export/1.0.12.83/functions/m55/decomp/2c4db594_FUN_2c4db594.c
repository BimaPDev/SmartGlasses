/* FUN_2c4db594 @ 0x2c4db594 */

/* WARNING: Removing unreachable block (ram,0x2c4db578) */
/* WARNING: Removing unreachable block (ram,0x2c4db56c) */
/* WARNING: Removing unreachable block (ram,0x2c4db55c) */
/* WARNING: Removing unreachable block (ram,0x2c4db558) */
/* WARNING: Removing unreachable block (ram,0x2c4db564) */
/* WARNING: Removing unreachable block (ram,0x2c4db574) */
/* WARNING: Removing unreachable block (ram,0x2c4db54c) */

int * FUN_2c4db594(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[0x13];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x20) = param_2[0x14];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x30) = param_2[0x15];
  iVar1 = param_2[0x16];
  param_1[0x2a] = iVar1;
  FUN_2c4db4b4(param_1,param_2 + 1,param_2,iVar1,param_4);
  return param_1;
}

