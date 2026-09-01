/* FUN_1006bd24 @ 0x1006bd24 */

int FUN_1006bd24(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = -9;
  }
  else {
    pcVar2 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0xc);
    if (pcVar2 == (code *)0x0) {
      iVar1 = -0x86;
    }
    else {
      iVar1 = (*pcVar2)();
      if (iVar1 < 0) {
        FUN_100a5b78((DAT_1006bd68 - DAT_1006bd64) * 0x20 & 0xff00U | 0x11c0011,DAT_1006bd70,
                     DAT_1006bd6c,iVar1);
      }
    }
  }
  return iVar1;
}

