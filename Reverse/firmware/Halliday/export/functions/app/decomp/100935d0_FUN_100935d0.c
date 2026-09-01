/* FUN_100935d0 @ 0x100935d0 */

undefined4 FUN_100935d0(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((((param_1 == 0x202e) || (param_1 - 0xfe70 < 0x90)) || (param_1 - 0x590 < 0x170)) ||
     (param_1 - 0xfb1d < 0x2e3)) {
    uVar4 = 1;
  }
  else {
    uVar2 = 0;
    do {
      uVar3 = (uint)*(byte *)(DAT_10093624 + (uVar2 & 0xffff));
      if (uVar3 == 0) {
        iVar1 = FUN_10093574();
        if (iVar1 == 0) {
          return 0;
        }
        return 0x21;
      }
      uVar2 = uVar2 + 1;
    } while (param_1 != uVar3);
    uVar4 = 0x20;
  }
  return uVar4;
}

