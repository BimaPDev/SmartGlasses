/* FUN_2c65173c @ 0x2c65173c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c65173c(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *param_1;
  uVar4 = *(undefined4 *)(iVar3 + -0xc);
  FUN_2c6513b0(param_1,uVar4,param_3,_LAB_2c6517b0,param_1,param_2);
  iVar2 = FUN_2c6513cc(param_1,param_2);
  if ((iVar2 == 0) && (*(int *)(iVar3 + -4) < 1)) {
    uVar1 = param_2 - iVar3 >> 2;
    if (uVar1 < param_3) {
      if (uVar1 != 0) {
        FUN_2c651400(iVar3,param_2,param_3);
      }
    }
    else {
      FUN_2c6513e8(iVar3,param_2,param_3);
    }
    FUN_2c6514b0(*param_1 + -0xc,param_3);
  }
  else {
    param_1 = (int *)FUN_2c651718(param_1,0,uVar4,param_2,param_3);
  }
  return param_1;
}

