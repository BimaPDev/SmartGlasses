/* FUN_14087b38 @ 0x14087b38 */

int FUN_14087b38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_1407772c(0xc13,0xf8,0,param_4,param_4);
  if (iVar2 != 0) {
    uVar3 = FUN_14075458(iVar2,0xf8);
    FUN_140bd528(uVar3,param_1);
    cVar1 = FUN_1407780c(iVar2);
    return (int)cVar1;
  }
  return 1;
}

