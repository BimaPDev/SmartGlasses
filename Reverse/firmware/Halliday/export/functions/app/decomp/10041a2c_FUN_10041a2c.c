/* FUN_10041a2c @ 0x10041a2c */

void FUN_10041a2c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_10041a64;
  iVar1 = FUN_1000eb84();
  if (iVar1 == 0) {
    if (*DAT_10041a64 == iVar2) {
      return;
    }
  }
  else if (*DAT_10041a64 == iVar2) goto LAB_10041a4c;
  FUN_1013cdc0();
LAB_10041a4c:
  FUN_100d4440(0xcb,0x8e,0);
  return;
}

