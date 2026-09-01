/* FUN_10030658 @ 0x10030658 */

void FUN_10030658(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *DAT_1003072c;
  iVar6 = *DAT_10030730;
  if (iVar6 != 0) {
    iVar2 = (**(code **)(PTR_DAT_10030734 + 8))();
    if (iVar2 != 0) goto LAB_10030692;
    FUN_10030490(8);
    FUN_10094ab8(*(undefined4 *)(iVar6 + 0x38));
    *(undefined4 *)(iVar6 + 0x38) = 0;
  }
LAB_10030684:
  do {
    while( true ) {
      if (*DAT_1003072c == iVar5) {
        return;
      }
      FUN_1013cdc0();
LAB_10030692:
      FUN_100a5b78(((int)PTR_DAT_1003073c - (int)PTR_DAT_10030738) * 0x20 & 0xff00U | 0x4a0032,
                   PTR_s_timer_cb_10030740,PTR_s_layout__d__timer____d_10030744,
                   *(undefined1 *)(iVar6 + 0x80),*(undefined1 *)(iVar6 + 0x81));
      cVar1 = *(char *)(iVar6 + 0x80);
      if (cVar1 != '\x05') break;
      bVar4 = *(char *)(iVar6 + 0x81) + 1;
      *(byte *)(iVar6 + 0x81) = bVar4;
      if (0xb < bVar4) {
        uVar3 = 7;
LAB_100306d2:
        FUN_10030490(uVar3);
        *(undefined1 *)(iVar6 + 0x81) = 0;
      }
    }
    if (cVar1 != '\n') {
      if (cVar1 != '\x06') break;
      bVar4 = *(char *)(iVar6 + 0x81) + 1;
      *(byte *)(iVar6 + 0x81) = bVar4;
      if (0xb < bVar4) {
        FUN_10030490(3);
        *(undefined1 *)(iVar6 + 0x81) = 0;
      }
      goto LAB_10030716;
    }
    bVar4 = *(char *)(iVar6 + 0x81) + 1;
    *(byte *)(iVar6 + 0x81) = bVar4;
    if (0xb < bVar4) {
      uVar3 = 9;
      goto LAB_100306d2;
    }
  } while( true );
  if (cVar1 == '\x03') {
LAB_10030716:
    *(char *)(iVar6 + 0x82) = *(char *)(iVar6 + 0x82) + '\x01';
  }
  goto LAB_10030684;
}

