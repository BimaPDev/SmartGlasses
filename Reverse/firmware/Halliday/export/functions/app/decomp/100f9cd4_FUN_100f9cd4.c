/* FUN_100f9cd4 @ 0x100f9cd4 */

uint FUN_100f9cd4(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x5c) == 0) ||
       (uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x5c) + 0xc) + 0xc))(),
       *(uint *)(param_1 + 0x10) <= uVar1)) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}

