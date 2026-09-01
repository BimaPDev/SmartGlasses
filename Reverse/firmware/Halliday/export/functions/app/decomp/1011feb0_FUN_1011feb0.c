/* FUN_1011feb0 @ 0x1011feb0 */

uint FUN_1011feb0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (uint)(param_1 * 300) >> 10;
  }
  return uVar1;
}

