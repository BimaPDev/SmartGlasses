/* FUN_2c61a5f0 @ 0x2c61a5f0 */

void FUN_2c61a5f0(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 0x30;
  piVar1 = (int *)FUN_2c62ca10(param_2);
  while (piVar1 != (int *)0x0) {
    FUN_2c62c998(param_2,piVar1);
    if ((*piVar1 != 0) && (-1 < (int)((uint)*(byte *)(piVar1 + 4) << 0x1f))) {
      FUN_2c62bea8();
    }
    FUN_2c62ae04(piVar1 + 2);
    FUN_2c62bea8(piVar1);
    piVar1 = (int *)FUN_2c62ca10(param_2);
  }
  return;
}

