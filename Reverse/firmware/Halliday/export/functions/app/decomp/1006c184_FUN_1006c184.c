/* FUN_1006c184 @ 0x1006c184 */

int FUN_1006c184(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  if (param_1[1] == 0) {
    *param_1 = 0;
    iVar1 = 0;
  }
  else {
    pcVar2 = *(code **)(*(int *)(param_1[1] + 0x1c) + 0x28);
    if (pcVar2 == (code *)0x0) {
      iVar1 = -0x86;
    }
    else {
      iVar1 = (*pcVar2)();
      if (iVar1 < 0) {
        FUN_100a5b78(DAT_1006c1d0 | (DAT_1006c1cc - DAT_1006c1c8) * 0x20 & 0xff00U,DAT_1006c1d8,
                     DAT_1006c1d4,iVar1,param_4);
      }
      else {
        *param_1 = 0;
        param_1[1] = 0;
      }
    }
  }
  return iVar1;
}

