/* FUN_1006bc30 @ 0x1006bc30 */

int FUN_1006bc30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    pcVar2 = *(code **)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0x1c);
    if (pcVar2 == (code *)0x0) {
      iVar1 = -0x86;
    }
    else {
      iVar1 = (*pcVar2)();
      if (iVar1 < 0) {
        FUN_100a5b78((DAT_1006bc78 - DAT_1006bc74) * 0x20 & 0xff00U | 0xdd0011,DAT_1006bc80,
                     DAT_1006bc7c,iVar1,param_4);
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
  }
  return iVar1;
}

