/* FUN_2c52e868 @ 0x2c52e868 */

int FUN_2c52e868(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_2c66c4ec(param_3);
  uVar3 = uVar1;
  if (param_2 <= uVar1) {
    uVar3 = param_2;
  }
  if ((uVar3 == 0) || (iVar2 = FUN_2c66960c(param_1,param_3), iVar2 == 0)) {
    iVar2 = param_2 - uVar1;
  }
  return iVar2;
}

