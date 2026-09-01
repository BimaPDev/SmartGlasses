/* FUN_100dc888 @ 0x100dc888 */

void FUN_100dc888(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_1c;
  
  local_1c = -1;
  iVar1 = FUN_10131c38();
  if (iVar1 != 0) {
    FUN_100d5808(iVar1,&local_1c);
    iVar2 = thunk_FUN_10115958();
    iVar4 = local_1c;
    iVar3 = FUN_100d584c(iVar1);
    if ((local_1c == 0) || ((uint)(iVar2 - iVar4) < 0x1f5)) {
      if ((iVar3 != 0) && (iVar1 = FUN_101165e0(iVar3), iVar1 == 0)) {
        FUN_101164a0(iVar3,DAT_100dc964,param_1);
        FUN_10116500(iVar3,(iVar4 + 500) - iVar2,0);
      }
    }
    else {
      if ((iVar3 != 0) && (iVar4 = FUN_101165e0(), iVar4 != 0)) {
        FUN_10116598(iVar3);
      }
      FUN_1013199c(param_1);
      iVar4 = FUN_10131c54(param_1,0x13);
      uVar5 = (DAT_100dc950 - DAT_100dc954) * 0x20 & 0xff00;
      if (iVar4 == 0) {
        FUN_100d5604(iVar1,3);
      }
      else {
        FUN_100a5b78(uVar5 | 0x1e40031,DAT_100dc95c,DAT_100dc958);
      }
      FUN_101319b8(param_1);
      FUN_100a5b78(uVar5 | 0x1e80031,DAT_100dc95c,DAT_100dc960);
    }
  }
  return;
}

