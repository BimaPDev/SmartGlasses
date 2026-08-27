/* FUN_2c651180 @ 0x2c651180 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c651180(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 != 0) {
    FUN_2c650c38(param_1,0,param_3,_LAB_2c6511f0);
    iVar3 = *param_1;
    uVar2 = *(int *)(iVar3 + -0xc) + param_3;
    if ((*(uint *)(iVar3 + -8) < uVar2) || (0 < *(int *)(iVar3 + -4))) {
      iVar1 = FUN_2c650c54(param_1,param_2);
      if (iVar1 == 0) {
        FUN_2c6510f6(param_1,uVar2);
        param_2 = (param_2 - iVar3) + *param_1;
      }
      else {
        FUN_2c6510f6(param_1,uVar2);
      }
    }
    FUN_2c650c6e(*(int *)(*param_1 + -0xc) + *param_1,param_2,param_3);
    FUN_2c650d4c(*param_1 + -0xc,uVar2);
  }
  return param_1;
}

