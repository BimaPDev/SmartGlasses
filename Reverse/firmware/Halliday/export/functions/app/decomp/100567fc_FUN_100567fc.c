/* FUN_100567fc @ 0x100567fc */

int FUN_100567fc(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_10056810;
  if (*DAT_10056810 == 0) {
    iVar2 = FUN_100568bc();
    *piVar1 = *(int *)(iVar2 + 8);
  }
  return *piVar1;
}

