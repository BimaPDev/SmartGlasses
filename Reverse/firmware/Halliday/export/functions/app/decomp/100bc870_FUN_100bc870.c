/* FUN_100bc870 @ 0x100bc870 */

void FUN_100bc870(void)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = DAT_100bc8f0;
  puVar2 = DAT_100bc8ec;
  puVar1 = DAT_100bc8ec + 2;
  if (*(int *)puVar1 != 0x10) {
    if ((*(byte *)((int)DAT_100bc8ec + 1) & 8) == 0) {
      *(byte *)((int)DAT_100bc8ec + 1) = *(byte *)((int)DAT_100bc8ec + 1) & 0xef;
      if (*(int *)puVar1 != 0x20) {
        FUN_100bc52c(1);
      }
      FUN_100bb198(0x1b,0);
      *puVar2 = *puVar2 & 0xfdef;
      if ((*(int *)(puVar2 + 2) != 0x20) || (*(int *)(puVar2 + 4) != 0)) {
        FUN_100bb198(0x15,0);
      }
      FUN_100bc840(0);
      return;
    }
  }
  *(byte *)((int)DAT_100bc8ec + 1) = *(byte *)((int)DAT_100bc8ec + 1) | 0x10;
  FUN_100a5b78((iVar3 - DAT_100bc8f4) * 0x20 & 0xff00U | 0x13a0031,DAT_100bc8fc,DAT_100bc8f8);
  return;
}

