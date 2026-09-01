/* FUN_1012b284 @ 0x1012b284 */

uint FUN_1012b284(uint param_1)

{
  uint uVar1;
  
  if ((param_1 >> 4 & 0x18) == 0) {
    uVar1 = param_1 >> 4 & 0x1f;
  }
  else {
    uVar1 = 7;
  }
  return uVar1;
}

