/* FUN_2c557060 @ 0x2c557060 */

int * FUN_2c557060(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (int)(param_1 + 2);
  iVar1 = FUN_2c48e42c(param_2,param_3);
  if ((iVar1 == 0) || (iVar2 = FUN_2c48e82c(), iVar2 != 0)) {
    FUN_2c556e78(param_1,0,param_1[1],DAT_2c5570c8,0);
    iVar2 = FUN_2c48e84c(iVar1);
  }
  else {
    iVar2 = FUN_2c48e84c(iVar1);
  }
  if (iVar2 == 0) {
    return param_1;
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar3 = FUN_2c66c4ec(uVar4);
  FUN_2c556e78(param_1,0,param_1[1],uVar4,uVar3);
  return param_1;
}

