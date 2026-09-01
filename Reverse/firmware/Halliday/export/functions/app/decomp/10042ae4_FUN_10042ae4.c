/* FUN_10042ae4 @ 0x10042ae4 */

void FUN_10042ae4(void)

{
  int iVar1;
  
  iVar1 = *DAT_10042b34;
  FUN_100a2324();
  FUN_1011aab8(1);
  FUN_1011aabe(1);
  if (*DAT_10042b38 == '\0') {
    if (*DAT_10042b34 == iVar1) {
      return;
    }
  }
  else {
    *DAT_10042b38 = '\0';
    if (*DAT_10042b34 == iVar1) goto LAB_10042b18;
  }
  FUN_1013cdc0();
LAB_10042b18:
  FUN_10042a74();
  return;
}

