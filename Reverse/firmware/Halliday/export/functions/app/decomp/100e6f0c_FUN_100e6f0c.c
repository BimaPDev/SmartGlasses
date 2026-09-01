/* FUN_100e6f0c @ 0x100e6f0c */

int FUN_100e6f0c(uint param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((int)(*(ushort *)(DAT_100e6fb4 + 4) - 4) < param_3) {
    iVar2 = -0xc;
  }
  else {
    FUN_100e6c2c(0xffffffff,0xffffffff);
    iVar2 = DAT_100e6fb8;
    iVar1 = 0;
    do {
      iVar3 = iVar1 * 0x70;
      if (*(byte *)(iVar3 + DAT_100e6fb8) == param_1) {
        if ((*(int *)(DAT_100e6fb8 + iVar3 + 0x14) != 0) && (iVar1 = FUN_100cb214(), iVar1 != 0)) {
          iVar1 = FUN_10137c44(DAT_100e6fbc);
          FUN_101327a0(iVar1 + 8,param_2,param_3);
          iVar2 = FUN_10137c52(iVar3 + 0x28 + iVar2,iVar1);
          if (iVar2 < 0) {
            FUN_100a5b78((DAT_100e6fc4 - DAT_100e6fc0) * 0x20 & 0xff00U | 0x15e0011,DAT_100e6fc8,
                         iVar2);
            FUN_100c1c90(iVar1);
            param_3 = iVar2;
          }
          FUN_100e6c20();
          return param_3;
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    FUN_100e6c20();
    iVar2 = -5;
  }
  return iVar2;
}

