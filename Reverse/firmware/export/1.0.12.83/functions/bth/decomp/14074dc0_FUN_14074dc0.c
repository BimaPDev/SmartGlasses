/* FUN_14074dc0 @ 0x14074dc0 */

void FUN_14074dc0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  FUN_14074d80();
  uVar2 = 0;
  pcVar4 = DAT_14074e10;
  do {
    while( true ) {
      if (*DAT_14074e0c < (uint)(*(int *)(pcVar4 + 0x14) + *(int *)(pcVar4 + 0x10))) {
        uVar3 = (*(int *)(pcVar4 + 0x14) + *(int *)(pcVar4 + 0x10)) - *DAT_14074e0c;
      }
      else {
        uVar3 = 1;
      }
      uVar1 = uVar2;
      if (((*pcVar4 == '\x01') && (pcVar4[1] == '\x01')) && (uVar1 = uVar3, uVar2 != 0)) break;
      uVar2 = uVar1;
      pcVar4 = pcVar4 + 0x28;
      if (DAT_14074e10 + 0x640 == pcVar4) {
        return;
      }
    }
    pcVar4 = pcVar4 + 0x28;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
  } while (DAT_14074e10 + 0x640 != pcVar4);
  return;
}

