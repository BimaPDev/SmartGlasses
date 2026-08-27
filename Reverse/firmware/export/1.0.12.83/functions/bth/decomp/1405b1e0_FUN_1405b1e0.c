/* FUN_1405b1e0 @ 0x1405b1e0 */

undefined4 FUN_1405b1e0(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    if (*(int *)(DAT_1405b1f4 + param_1 * 4) != 0) {
      uVar1 = FUN_1406d73c();
      return uVar1;
    }
  }
  return 0;
}

