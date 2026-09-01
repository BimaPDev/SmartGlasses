/* FUN_100bf6e4 @ 0x100bf6e4 */

int FUN_100bf6e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_1011dbf4(DAT_100bf730,0xffffffff,param_3,param_4,param_4);
  iVar2 = 0;
  piVar1 = DAT_100bf734;
  while( true ) {
    iVar4 = *piVar1;
    if ((iVar4 != 0) &&
       ((((iVar3 = *(int *)(iVar4 + 0x54), *(int *)(iVar3 + 0x18) == param_1 ||
          (*(int *)(iVar3 + 0x1c) == param_1)) || (*(int *)(iVar3 + 0x20) == param_1)) ||
        (*(int *)(iVar3 + 0x24) == param_1)))) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    if (iVar2 == 5) {
      thunk_FUN_10113e2c(DAT_100bf730);
      return 0;
    }
  }
  thunk_FUN_10113e2c(DAT_100bf730);
  return iVar4;
}

