/* FUN_100bedc0 @ 0x100bedc0 */

void FUN_100bedc0(void)

{
  int *piVar1;
  int iVar2;
  char local_11 [5];
  
  piVar1 = DAT_100bee1c;
  if (*DAT_100bee1c != 0) {
    FUN_100be278(1);
    if (*DAT_100bee20 != 0) {
      FUN_101324d6(*piVar1);
    }
    iVar2 = FUN_100beda8(local_11);
    if (iVar2 == 0) {
      *(char *)(piVar1 + 4) = local_11[0];
    }
    FUN_100a5b78((DAT_100bee28 - DAT_100bee24) * 0x20 & 0xff00U | 0x4a80032,DAT_100bee30,
                 DAT_100bee2c,iVar2,(int)local_11[0]);
  }
  *(byte *)(piVar1 + 5) = *(byte *)(piVar1 + 5) & 0xfd;
  return;
}

