/* FUN_140a1f1c @ 0x140a1f1c */

void FUN_140a1f1c(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_140a1f30;
  if (*DAT_140a1f30 != 0) {
    return;
  }
  iVar2 = FUN_140e5138(DAT_140a1f34);
  *piVar1 = iVar2;
  return;
}

