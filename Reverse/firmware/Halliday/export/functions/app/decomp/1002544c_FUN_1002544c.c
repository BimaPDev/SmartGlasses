/* FUN_1002544c @ 0x1002544c */

void FUN_1002544c(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10025478;
  iVar2 = *DAT_1002547c;
  if (*DAT_10025478 != 0) {
    FUN_10127012();
    *piVar1 = 0;
  }
  if (*DAT_1002547c != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

