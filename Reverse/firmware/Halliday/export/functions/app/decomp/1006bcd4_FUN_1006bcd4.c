/* FUN_1006bcd4 @ 0x1006bcd4 */

int FUN_1006bcd4(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = -9;
  }
  else {
    pcVar2 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 8);
    if (pcVar2 == (code *)0x0) {
      iVar1 = -0x86;
    }
    else {
      iVar1 = (*pcVar2)();
      if (iVar1 < 0) {
        FUN_100a5b78((DAT_1006bd18 - DAT_1006bd14) * 0x20 & 0xff00U | 0x1080011,DAT_1006bd20,
                     DAT_1006bd1c,iVar1);
      }
    }
  }
  return iVar1;
}

