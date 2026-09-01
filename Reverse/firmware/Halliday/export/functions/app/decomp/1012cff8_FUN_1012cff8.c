/* FUN_1012cff8 @ 0x1012cff8 */

undefined4 FUN_1012cff8(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_1006bd74(param_2);
  if (-1 < iVar2) {
    *param_3 = iVar2;
    return 0;
  }
  if (iVar2 < 1) {
    if (iVar2 < -0x16) {
      if (iVar2 == -0x86) {
        return 9;
      }
      if (iVar2 == -0x1b) {
        uVar1 = 4;
      }
      else {
        uVar1 = 0xc;
      }
      return uVar1;
    }
    switch(iVar2) {
    case 0:
      return 0;
    case -0x16:
      return 0xb;
    case -0x10:
      return 7;
    case -0xd:
      return 6;
    case -0xc:
      return 10;
    case -9:
      return 2;
    case -5:
      return 1;
    case -2:
      return 3;
    }
  }
  return 0xc;
}

