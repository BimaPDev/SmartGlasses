/* FUN_140c3dd8 @ 0x140c3dd8 */

bool FUN_140c3dd8(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (param_2 < uVar1) {
    return true;
  }
  return uVar1 + *(int *)(uVar1 - 0xc) < param_2;
}

