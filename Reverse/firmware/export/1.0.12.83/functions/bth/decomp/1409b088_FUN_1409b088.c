/* FUN_1409b088 @ 0x1409b088 */

undefined4 FUN_1409b088(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_1409b0ac;
  if (*DAT_1409b0ac != 0) {
    *(undefined1 *)(DAT_1409b0b0 + 0x19) = 0xff;
    return 0;
  }
  iVar3 = FUN_140e5138(DAT_1409b0b4);
  iVar2 = DAT_1409b0b0;
  *piVar1 = iVar3;
  *(undefined1 *)(iVar2 + 0x19) = 0xff;
  return 0;
}

