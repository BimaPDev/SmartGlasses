/* FUN_1006bc84 @ 0x1006bc84 */

int FUN_1006bc84(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = -9;
  }
  else {
    pcVar2 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 4);
    if (pcVar2 == (code *)0x0) {
      iVar1 = -0x86;
    }
    else {
      iVar1 = (*pcVar2)();
      if (iVar1 < 0) {
        FUN_100a5b78((DAT_1006bcc8 - DAT_1006bcc4) * 0x20 & 0xff00U | 0xf40011,DAT_1006bcd0,
                     DAT_1006bccc,iVar1);
      }
    }
  }
  return iVar1;
}

