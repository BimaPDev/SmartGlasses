/* FUN_1006bdc4 @ 0x1006bdc4 */

int FUN_1006bdc4(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = -9;
  }
  else {
    pcVar2 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0x14);
    if (pcVar2 == (code *)0x0) {
      iVar1 = -0x86;
    }
    else {
      iVar1 = (*pcVar2)();
      if (iVar1 < 0) {
        FUN_100a5b78((DAT_1006be08 - DAT_1006be04) * 0x20 & 0xff00U | 0x1440011,DAT_1006be10,
                     DAT_1006be0c,iVar1);
      }
    }
  }
  return iVar1;
}

