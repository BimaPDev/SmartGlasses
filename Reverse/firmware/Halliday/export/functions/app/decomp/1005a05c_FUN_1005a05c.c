/* FUN_1005a05c @ 0x1005a05c */

bool FUN_1005a05c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_1011ea18(param_1,DAT_1005a07c);
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_1011ea18(param_1,DAT_1005a080);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

