/* FUN_100831e8 @ 0x100831e8 */

int FUN_100831e8(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((((param_2 & 3) == 0) && (param_2 != (param_2 / 100) * 100)) ||
     (param_2 == (param_2 / 400) * 400)) {
    uVar1 = (uint)(param_1 == 1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 + *(byte *)(DAT_1008321c + param_1);
}

