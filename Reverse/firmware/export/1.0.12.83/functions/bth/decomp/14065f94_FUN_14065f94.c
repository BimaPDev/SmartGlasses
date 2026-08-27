/* FUN_14065f94 @ 0x14065f94 */

void FUN_14065f94(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = (param_3 * param_2 + param_2) * 0x9c4 + 500;
  if (DAT_14065fd4 < uVar2) {
    if (DAT_14065fd8 < uVar2) {
      uVar1 = 30000;
    }
    else {
      uVar1 = (undefined2)
              ((uint)((int)((ulonglong)DAT_14065fe0 * (ulonglong)uVar2 >> 0x20) << 10) >> 0x10);
    }
  }
  else {
    uVar1 = 100;
  }
  *(undefined2 *)(*(int *)(DAT_14065fdc + (param_1 + 0x22) * 4) + 0x52) = uVar1;
  return;
}

