/* FUN_140b4c68 @ 0x140b4c68 */

undefined4 FUN_140b4c68(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_140b4c98;
  if (*DAT_140b4c98 == 0) {
    iVar2 = FUN_140e5668(DAT_140b4ca0);
    *piVar1 = iVar2;
    iVar2 = *DAT_140b4c9c;
    piVar1 = DAT_140b4c9c;
  }
  else {
    iVar2 = *DAT_140b4c9c;
    piVar1 = DAT_140b4c9c;
  }
  if (iVar2 != 0) {
    DAT_140b4c9c = piVar1;
    return 0;
  }
  DAT_140b4c9c = piVar1;
  iVar2 = FUN_140e5668(DAT_140b4ca4);
  *piVar1 = iVar2;
  return 0;
}

