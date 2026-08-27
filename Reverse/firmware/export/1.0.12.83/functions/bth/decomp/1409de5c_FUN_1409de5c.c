/* FUN_1409de5c @ 0x1409de5c */

void FUN_1409de5c(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_1409de70;
  if (*DAT_1409de70 != 0) {
    return;
  }
  iVar2 = FUN_1409e794();
  *piVar1 = iVar2;
  return;
}

