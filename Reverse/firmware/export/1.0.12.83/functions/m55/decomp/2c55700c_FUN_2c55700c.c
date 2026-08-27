/* FUN_2c55700c @ 0x2c55700c */

int FUN_2c55700c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_2c48e42c();
  if ((iVar1 == 0) || (iVar2 = FUN_2c48e82c(), iVar2 != 0)) {
    iVar1 = -(param_4 ^ 1);
  }
  else {
    iVar2 = FUN_2c48e84c(iVar1);
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar1 + 0x10);
      uVar3 = FUN_2c66c4ec(uVar4);
      FUN_2c556e78(param_3,0,*(undefined4 *)(param_3 + 4),uVar4,uVar3);
      return 0;
    }
    iVar1 = -1;
  }
  return iVar1;
}

