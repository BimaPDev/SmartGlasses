/* FUN_100a6148 @ 0x100a6148 */

uint FUN_100a6148(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(DAT_100a61a4 + 2);
  uVar3 = uVar4 & 2;
  if ((*(byte *)(DAT_100a61a4 + 2) & 2) != 0) {
    uVar1 = FUN_1012db86(param_2,param_3);
    uVar3 = FUN_1012dcac(param_1,param_2,uVar1);
  }
  if ((int)(uVar4 << 0x1d) < 0) {
    uVar2 = FUN_100a65e4(param_1,param_2,param_3);
    uVar3 = uVar3 | uVar2;
  }
  if ((int)(uVar4 << 0x1c) < 0) {
    uVar3 = 0xfffffffb;
  }
  else if (((int)(uVar4 << 0x1b) < 0) && ((code *)*DAT_100a61a8 != (code *)0x0)) {
    (*(code *)*DAT_100a61a8)(param_2,param_3,*DAT_100a61ac);
  }
  return uVar3;
}

