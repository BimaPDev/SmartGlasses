/* FUN_100b6474 @ 0x100b6474 */

int FUN_100b6474(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1;
  iVar6 = param_2;
  iVar2 = thunk_FUN_10115958();
  piVar1 = DAT_100b64f8;
  iVar4 = param_2;
  while( true ) {
    if (iVar4 == 0) {
      return param_2;
    }
    iVar3 = FUN_100a07a0(*(undefined4 *)(*piVar1 + 0xc),param_1,iVar4,*piVar1,iVar5,iVar6);
    if (0 < iVar3) {
      iVar4 = iVar4 - iVar3;
      param_1 = param_1 + iVar3;
    }
    iVar3 = thunk_FUN_10115958();
    if (param_3 <= (uint)(iVar3 - iVar2)) break;
    FUN_1011dbc8(1);
  }
  if (iVar4 == 0) {
    return param_2;
  }
  FUN_100a5b78((DAT_100b64ec - DAT_100b64e8) * 0x20 & 0xff00U | 0xb60012,DAT_100b64f4,DAT_100b64f0,
               param_2 - iVar4,iVar4);
  return param_2 - iVar4;
}

