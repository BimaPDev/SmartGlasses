/* FUN_1012d0fc @ 0x1012d0fc */

bool FUN_1012d0fc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_10115464();
  iVar1 = FUN_1009eaf4();
  if ((iVar1 != 0) && (-1 < *(int *)(iVar1 + 0xc))) {
    FUN_1005c270();
  }
  iVar2 = FUN_10063eb0(param_1,0x14,param_2);
  if (iVar1 != 0) {
    uVar3 = FUN_100a25dc(5000);
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
  }
  return iVar2 == 0;
}

