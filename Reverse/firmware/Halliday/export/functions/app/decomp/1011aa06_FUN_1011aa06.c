/* FUN_1011aa06 @ 0x1011aa06 */

uint FUN_1011aa06(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (2 < param_2 - 1U) {
    uVar2 = FUN_1011a9aa();
    return uVar2;
  }
  if (param_1 + 0xf0000000 < 0x4000000) {
    if ((param_1 & 0xff000000) == 0x10000000) {
      iVar1 = FUN_100567fc();
      param_1 = param_1 + 0x4000000 + iVar1;
    }
    else if ((param_1 & 0xff000000) == 0x12000000) {
      param_1 = param_1 + 0x2000000;
    }
  }
  return param_1;
}

