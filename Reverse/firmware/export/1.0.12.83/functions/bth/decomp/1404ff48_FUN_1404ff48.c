/* FUN_1404ff48 @ 0x1404ff48 */

void FUN_1404ff48(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  FUN_14098338();
  iVar4 = DAT_1404ffe0;
  if (*DAT_1404ffdc == '\0') {
    *DAT_1404ffdc = '\x01';
    if (*(char *)(iVar4 + 0x14) != '\0') {
      iVar4 = FUN_1404a1b4(0);
      iVar5 = FUN_14098380();
      *(int *)(iVar4 + 0xd4) = iVar5;
      *(int *)(iVar4 + 0x20) = iVar5;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14050004);
      }
      FUN_140983c4();
      uVar2 = DAT_1404ffe4;
      *(undefined4 *)(iVar4 + 0xd8) = 0;
      *(undefined1 *)(iVar4 + 0xde) = 0;
      *(undefined1 *)(iVar4 + 0xe0) = 0xff;
      FUN_140983e4(uVar2);
      thunk_FUN_14086798(DAT_1404ffe8);
    }
    iVar4 = DAT_1404fff0;
    pcVar3 = DAT_1404ffec;
    cVar1 = *DAT_1404ffec;
    *(undefined1 *)(DAT_1404fff0 + 0x120) = 0;
    *(undefined1 *)(iVar4 + 0x145) = 0;
    if (cVar1 != '\x01') {
      FUN_1402a6e8(4,0x4c4,DAT_14050000,DAT_1404fffc,DAT_1404fff8,DAT_1404fff4,0,1);
      *pcVar3 = '\x01';
      FUN_14032d30(0);
      return;
    }
  }
  return;
}

