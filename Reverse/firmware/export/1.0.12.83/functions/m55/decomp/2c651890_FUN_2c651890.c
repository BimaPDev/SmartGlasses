/* FUN_2c651890 @ 0x2c651890 */

int * FUN_2c651890(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 != 0) {
    FUN_2c6513b0(param_1,0,param_3,DAT_2c651900);
    iVar3 = *param_1;
    uVar2 = *(int *)(iVar3 + -0xc) + param_3;
    if ((*(uint *)(iVar3 + -8) < uVar2) || (0 < *(int *)(iVar3 + -4))) {
      iVar1 = FUN_2c6513cc(param_1,param_2);
      if (iVar1 == 0) {
        FUN_2c651802(param_1,uVar2);
        param_2 = (param_2 - iVar3) + *param_1;
      }
      else {
        FUN_2c651802(param_1,uVar2);
      }
    }
    FUN_2c6513e8(*param_1 + *(int *)(*param_1 + -0xc) * 4,param_2,param_3);
    FUN_2c6514b0(*param_1 + -0xc,uVar2);
  }
  return param_1;
}

