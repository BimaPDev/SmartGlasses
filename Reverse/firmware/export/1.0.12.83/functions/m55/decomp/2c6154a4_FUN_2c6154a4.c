/* FUN_2c6154a4 @ 0x2c6154a4 */

ulonglong FUN_2c6154a4(uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_2 + -1;
  if (iVar3 < 0) {
    param_1 = param_1 - 1;
    iVar3 = param_2 + 0xb;
  }
  if (0xb < iVar3) {
    param_1 = param_1 + 1;
    iVar3 = iVar3 + -0xc;
  }
  if (iVar3 != 1) {
    uVar4 = iVar3 + (((int)((ulonglong)((longlong)DAT_2c615508 * (longlong)iVar3) >> 0x20) + iVar3
                     >> 2) - (iVar3 >> 0x1f)) * -7;
    uVar1 = uVar4 & 1;
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return CONCAT44((int)((longlong)DAT_2c615508 * (longlong)iVar3),0x1f - uVar1) &
           0xffffffff000000ff;
  }
  if ((param_1 & 3) != 0) {
    return CONCAT44(param_2,0x1c);
  }
  param_1 = DAT_2c61550c * param_1;
  if (DAT_2c615510 < (param_1 >> 2 | param_1 * 0x40000000)) {
    return CONCAT44(param_2,0x1d);
  }
  if (DAT_2c615514 < (param_1 >> 4 | param_1 * 0x10000000)) {
    uVar2 = 0x1c;
  }
  else {
    uVar2 = 0x1d;
  }
  return CONCAT44(param_2,uVar2);
}

