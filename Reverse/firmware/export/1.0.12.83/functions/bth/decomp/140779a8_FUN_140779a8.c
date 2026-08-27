/* FUN_140779a8 @ 0x140779a8 */

undefined4 FUN_140779a8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1407772c(param_1,param_3,0);
  if (iVar1 == 0) {
    return 1;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_14075468(iVar1,param_2,param_3);
    uVar2 = FUN_1407780c(iVar1);
    return uVar2;
  }
  uVar2 = FUN_1407780c(iVar1);
  return uVar2;
}

