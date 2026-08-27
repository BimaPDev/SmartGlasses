/* FUN_2c651034 @ 0x2c651034 */

int * FUN_2c651034(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_1;
  uVar3 = *(undefined4 *)(iVar2 + -0xc);
  FUN_2c650c38(param_1,uVar3,param_3,DAT_2c6510a4,param_1,param_2);
  iVar1 = FUN_2c650c54(param_1,param_2);
  if ((iVar1 == 0) && (*(int *)(iVar2 + -4) < 1)) {
    if ((uint)(param_2 - iVar2) < param_3) {
      if (param_2 != iVar2) {
        FUN_2c650c86(iVar2,param_2,param_3);
      }
    }
    else {
      FUN_2c650c6e(iVar2,param_2,param_3);
    }
    FUN_2c650d4c(*param_1 + -0xc,param_3);
  }
  else {
    param_1 = (int *)FUN_2c651010(param_1,0,uVar3,param_2,param_3);
  }
  return param_1;
}

