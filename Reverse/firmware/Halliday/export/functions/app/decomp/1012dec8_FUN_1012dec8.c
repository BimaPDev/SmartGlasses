/* FUN_1012dec8 @ 0x1012dec8 */

undefined4 FUN_1012dec8(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 6) {
    return 0x8000;
  }
  if (param_1 == 0x16) {
    uVar1 = 0x2000;
  }
  else {
    uVar1 = 0x4000;
  }
  return uVar1;
}

