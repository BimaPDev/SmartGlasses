/* FUN_10072aa4 @ 0x10072aa4 */

int FUN_10072aa4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_10072aec;
  iVar3 = 0x80;
  iVar4 = param_4;
  while( true ) {
    if (param_4 < 1) {
      return 0;
    }
    if (param_4 <= iVar3) {
      iVar3 = param_4;
    }
    iVar2 = FUN_10072994(param_1,param_2,DAT_10072aec,iVar3,iVar4);
    if (iVar2 != 0) break;
    FUN_10072a48(param_1,param_3,uVar1,iVar3);
    param_2 = param_2 + iVar3;
    param_3 = param_3 + iVar3;
    param_4 = param_4 - iVar3;
  }
  return iVar2;
}

