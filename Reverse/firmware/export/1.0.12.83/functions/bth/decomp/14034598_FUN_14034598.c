/* FUN_14034598 @ 0x14034598 */

void FUN_14034598(undefined1 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_140345c8;
  iVar2 = *DAT_140345c8;
  if (iVar2 == 0) {
    FUN_1402e55c();
    iVar2 = *piVar1;
    if (*DAT_140345cc != 0) {
      *(undefined1 *)(*DAT_140345cc + 0x18) = param_1;
    }
  }
  else {
    if (*DAT_140345cc == 0) {
      return;
    }
    *(undefined1 *)(*DAT_140345cc + 0x18) = param_1;
  }
  if (iVar2 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}

