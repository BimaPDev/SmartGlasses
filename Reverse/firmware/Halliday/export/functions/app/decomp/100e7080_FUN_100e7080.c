/* FUN_100e7080 @ 0x100e7080 */

undefined4 FUN_100e7080(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_100e6c2c(0xffffffff,0xffffffff,param_3,param_4,param_4);
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 0x70;
    if (*(byte *)(iVar3 + DAT_100e70cc) == param_1) {
      if (*(int *)(DAT_100e70cc + iVar3 + 0x14) != 0) {
        uVar1 = FUN_10137d14(DAT_100e70cc + iVar3 + 0x28);
        FUN_100e6c20();
        return uVar1;
      }
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  FUN_100e6c20();
  return 0xfffffffb;
}

