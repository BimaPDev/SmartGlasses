/* FUN_14075660 @ 0x14075660 */

void FUN_14075660(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_14075688;
  if (*DAT_14075688 == 0) {
    iVar2 = FUN_140e5138(DAT_14075694);
    *piVar1 = iVar2;
  }
  piVar1 = DAT_1407568c;
  if (*DAT_1407568c != 0) {
    return;
  }
  iVar2 = FUN_140e52f8(DAT_14075690,0);
  *piVar1 = iVar2;
  return;
}

