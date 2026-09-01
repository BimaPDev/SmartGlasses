/* FUN_1005ddc8 @ 0x1005ddc8 */

int FUN_1005ddc8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_1005de24;
  if (*DAT_1005de24 == 0) {
    FUN_10119dc2(DAT_1005de30,DAT_1005de2c,DAT_1005de28,0xb4,param_1,param_2);
    FUN_1011a1f0(DAT_1005de28,0xb4,param_3,0);
  }
  iVar2 = 0;
  do {
    iVar4 = iVar2 + 1;
    if (*(byte *)(iVar2 * 0x18 + *piVar1 + 0x19) == param_1) {
      iVar3 = iVar2 * 0x18 + *piVar1 + 0x10;
      iVar2 = FUN_1005dd4c(iVar3);
      if (iVar2 == 0) {
        return iVar3;
      }
    }
    iVar2 = iVar4;
  } while (iVar4 != 0x1e);
  return 0;
}

