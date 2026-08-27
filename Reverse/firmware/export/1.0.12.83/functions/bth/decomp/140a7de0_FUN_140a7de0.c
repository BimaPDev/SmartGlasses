/* FUN_140a7de0 @ 0x140a7de0 */

void FUN_140a7de0(void)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = DAT_140a7e44;
  pcVar1 = DAT_140a7e40;
  if (*DAT_140a7e40 == '\0') {
    if (*DAT_140a7e44 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_140a7e68,DAT_140a7e5c);
    }
    iVar4 = FUN_140e5138(DAT_140a7e48);
    piVar3 = DAT_140a7e4c;
    *piVar2 = iVar4;
    if (*piVar3 == 0) {
      iVar4 = FUN_140e5668(DAT_140a7e58);
      *piVar3 = iVar4;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a7e60,DAT_140a7e5c);
      }
    }
    piVar2 = DAT_140a7e50;
    if (*DAT_140a7e50 == 0) {
      iVar4 = FUN_140b4ca8(DAT_140a7e64,0);
      *piVar2 = iVar4;
    }
    FUN_1409b088();
    FUN_140b4be0(1,DAT_140a7e54);
    FUN_1409d4bc();
    *pcVar1 = '\x01';
  }
  return;
}

