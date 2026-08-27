/* FUN_2c65233c @ 0x2c65233c */

undefined4 FUN_2c65233c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_2c669494(4,0,param_3,param_4,param_1,param_2,param_3,param_4);
  iVar2 = FUN_2c66b624(uVar1,DAT_2c6523a8);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_2c66c4ec(uVar1);
    iVar2 = iVar2 + 1;
    iVar3 = thunk_FUN_2c64ca5c(iVar2);
    FUN_2c674668(iVar3,uVar1,iVar2);
    FUN_2c669494(4,DAT_2c6523a8);
  }
  uVar1 = FUN_2c66de7c(param_2,param_3,param_4);
  if (iVar3 != 0) {
    FUN_2c669494(4,iVar3);
    thunk_FUN_2c669588(iVar3);
  }
  return uVar1;
}

