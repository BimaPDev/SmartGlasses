/* FUN_10133a36 @ 0x10133a36 */

undefined4
FUN_10133a36(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100c5d4c(0xc37,4,param_3,param_4,param_1,param_2);
  if (iVar1 != 0) {
    iVar2 = iVar1 + 8;
    FUN_101327c8(iVar2,*param_1);
    FUN_101327c8(iVar2,param_2);
    uVar3 = FUN_100c756c(0xc37,iVar1);
    return uVar3;
  }
  return 0xfffffff4;
}

