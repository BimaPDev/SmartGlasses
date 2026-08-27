/* FUN_14038788 @ 0x14038788 */

void FUN_14038788(void)

{
  uint uVar1;
  char cVar2;
  undefined4 in_r3;
  char *pcVar3;
  char *pcVar4;
  
  if (*DAT_140387d0 != -1) {
    *DAT_140387d4 = *DAT_140387d0;
  }
  uVar1 = FUN_140e5888();
  if (uVar1 < 2) {
    *(undefined1 *)(DAT_140387d8 + 0x10) = 0xe;
  }
  cVar2 = '\x01';
  pcVar4 = DAT_140387dc + 0xa8;
  pcVar3 = DAT_140387dc;
  while( true ) {
    if (cVar2 == '\x01') {
      FUN_1403282c(*(undefined2 *)(pcVar3 + 2),pcVar3[4],*(undefined4 *)(pcVar3 + 8),1,in_r3);
      FUN_140e5398(0x10);
    }
    if (pcVar3 == pcVar4) break;
    pcVar3 = pcVar3 + 0xc;
    cVar2 = *pcVar3;
  }
  return;
}

