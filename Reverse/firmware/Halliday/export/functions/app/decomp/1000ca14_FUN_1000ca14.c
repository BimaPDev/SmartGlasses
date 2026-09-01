/* FUN_1000ca14 @ 0x1000ca14 */

void FUN_1000ca14(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1000ca5c;
  if ((*(byte *)(param_1 + 3) & 0xfd) == 0x10) {
    FUN_1011aab8(1);
    if (*DAT_1000ca5c == iVar1) goto LAB_1000ca3e;
  }
  else if (*DAT_1000ca5c == iVar1) {
    return;
  }
  FUN_1013cdc0();
LAB_1000ca3e:
  FUN_1011aabe(1);
  return;
}

