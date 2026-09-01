/* FUN_1006be14 @ 0x1006be14 */

int FUN_1006be14(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = -9;
  }
  else {
    pcVar2 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0x18);
    if (pcVar2 == (code *)0x0) {
      iVar1 = -0x86;
    }
    else {
      iVar1 = (*pcVar2)();
      if (iVar1 < 0) {
        FUN_100a5b78((DAT_1006be58 - DAT_1006be54) * 0x20 & 0xff00U | 0x1580011,DAT_1006be60,
                     DAT_1006be5c,iVar1);
      }
    }
  }
  return iVar1;
}

