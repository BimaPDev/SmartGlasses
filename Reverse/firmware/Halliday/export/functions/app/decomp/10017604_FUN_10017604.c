/* FUN_10017604 @ 0x10017604 */

void FUN_10017604(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1001765c;
  if (*DAT_10017660 == 0) {
    if (*DAT_1001765c == iVar1) {
      return;
    }
  }
  else {
    thunk_FUN_10138be0(1,0,param_3,*DAT_10017660,param_1,iVar1,param_3);
    if (*DAT_1001765c == iVar1) goto LAB_1001762c;
  }
  FUN_1013cdc0();
LAB_1001762c:
  FUN_100a5b78(DAT_1001766c | (DAT_10017668 - DAT_10017664) * 0x20 & 0xff00U,DAT_10017674,
               DAT_10017670);
  return;
}

