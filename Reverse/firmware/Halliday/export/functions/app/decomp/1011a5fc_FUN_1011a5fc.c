/* FUN_1011a5fc @ 0x1011a5fc */

undefined4 FUN_1011a5fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = param_1;
  uVar1 = FUN_10055288(param_3);
  iVar2 = FUN_10054e2c(param_1,param_2,uVar1,0,uVar3,param_2,param_3);
  if (iVar2 == 0) {
    FUN_10054e90(uVar1);
    uVar1 = 0;
  }
  return uVar1;
}

