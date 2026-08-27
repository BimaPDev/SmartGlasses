/* FUN_140779e0 @ 0x140779e0 */

undefined4 FUN_140779e0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1407772c(param_1,param_3,0);
  if (iVar1 != 0) {
    if ((param_2 != 0) && (param_3 != 0)) {
      FUN_14075468(iVar1,param_2,param_3);
    }
    *(byte *)(iVar1 + 5) = *(byte *)(iVar1 + 5) | 8;
    uVar2 = FUN_1407780c(iVar1);
    return uVar2;
  }
  return 1;
}

