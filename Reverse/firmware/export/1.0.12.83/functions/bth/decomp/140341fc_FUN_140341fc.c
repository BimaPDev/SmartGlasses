/* FUN_140341fc @ 0x140341fc */

void FUN_140341fc(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  
  piVar1 = DAT_14034230;
  iVar3 = *DAT_14034230;
  if (iVar3 == 0) {
    FUN_1402e55c();
    iVar3 = *piVar1;
    puVar2 = (undefined1 *)*DAT_14034234;
    if (puVar2 == (undefined1 *)0x0) goto LAB_14034212;
  }
  else {
    puVar2 = (undefined1 *)*DAT_14034234;
    if (puVar2 == (undefined1 *)0x0) {
      return;
    }
  }
  puVar2[0x36] = 0;
  *puVar2 = 0;
LAB_14034212:
  *piVar1 = iVar3;
  if (iVar3 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}

