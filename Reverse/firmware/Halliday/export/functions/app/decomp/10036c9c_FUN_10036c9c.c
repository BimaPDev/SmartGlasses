/* FUN_10036c9c @ 0x10036c9c */

void FUN_10036c9c(void)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *DAT_10036ccc;
  if (*DAT_10036cd0 != '\0') goto LAB_10036cc0;
  uVar1 = *DAT_10036cd4;
  while( true ) {
    if (*DAT_10036ccc == iVar2) break;
    FUN_1013cdc0(uVar1);
LAB_10036cc0:
    uVar1 = 6;
  }
  return;
}

