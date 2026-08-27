/* FUN_14098328 @ 0x14098328 */

undefined4 FUN_14098328(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, *(char *)(param_1 + 0x90) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}

