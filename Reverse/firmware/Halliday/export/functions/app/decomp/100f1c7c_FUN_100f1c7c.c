/* FUN_100f1c7c @ 0x100f1c7c */

void FUN_100f1c7c(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = DAT_100f1ca0;
  iVar3 = *(int *)(DAT_100f1ca0 + 0x40);
  if (iVar3 == 0) {
    pcVar2 = (char *)FUN_100f0898();
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
      *(undefined4 *)(iVar1 + 0x44) = 0;
      return;
    }
  }
  else {
    *(undefined4 *)(DAT_100f1ca0 + 0x40) = 0;
    *(int *)(iVar1 + 0x44) = iVar3;
  }
  return;
}

