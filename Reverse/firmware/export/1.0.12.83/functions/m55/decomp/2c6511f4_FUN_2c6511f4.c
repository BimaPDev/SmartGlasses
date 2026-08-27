/* FUN_2c6511f4 @ 0x2c6511f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c6511f4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    FUN_2c650c38(param_1,0,param_2,_LAB_2c651248,param_4);
    iVar1 = *param_1;
    uVar2 = *(int *)(iVar1 + -0xc) + param_2;
    if ((*(uint *)(iVar1 + -8) < uVar2) || (0 < *(int *)(iVar1 + -4))) {
      FUN_2c6510f6(param_1,uVar2);
    }
    FUN_2c650c9e(*(int *)(*param_1 + -0xc) + *param_1,param_2,param_3);
    FUN_2c650d4c(*param_1 + -0xc,uVar2);
  }
  return param_1;
}

