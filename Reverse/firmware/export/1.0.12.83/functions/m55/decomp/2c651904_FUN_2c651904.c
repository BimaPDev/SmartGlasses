/* FUN_2c651904 @ 0x2c651904 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c651904(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    FUN_2c6513b0(param_1,0,param_2,_LAB_2c651958,param_4);
    iVar1 = *param_1;
    uVar2 = *(int *)(iVar1 + -0xc) + param_2;
    if ((*(uint *)(iVar1 + -8) < uVar2) || (0 < *(int *)(iVar1 + -4))) {
      FUN_2c651802(param_1,uVar2);
    }
    func_0x2c651418(*param_1 + *(int *)(*param_1 + -0xc) * 4,param_2,param_3);
    FUN_2c6514b0(*param_1 + -0xc,uVar2);
  }
  return param_1;
}

