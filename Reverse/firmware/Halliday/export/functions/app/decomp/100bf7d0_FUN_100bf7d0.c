/* FUN_100bf7d0 @ 0x100bf7d0 */

int FUN_100bf7d0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_1011dbf4(DAT_100bf80c,0xffffffff,param_3,param_4,param_4);
  iVar2 = 0;
  piVar1 = DAT_100bf810;
  while( true ) {
    iVar3 = *piVar1;
    if ((iVar3 != 0) && (*(byte *)(*(int *)(iVar3 + 0x54) + 0x2d) == param_1)) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    if (iVar2 == 5) {
      thunk_FUN_10113e2c(DAT_100bf80c);
      return 0;
    }
  }
  thunk_FUN_10113e2c(DAT_100bf80c);
  return iVar3;
}

