/* FUN_100edb14 @ 0x100edb14 */

void FUN_100edb14(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10115464();
  iVar2 = FUN_10088f7c();
  if (iVar2 != 0) {
    if (*DAT_100edb44 == 0) {
      *DAT_100edb44 = iVar1;
    }
    else if (*DAT_100edb44 != iVar1) {
      FUN_1011dc50(DAT_100edb48,param_1,iVar1);
      return;
    }
  }
  return;
}

