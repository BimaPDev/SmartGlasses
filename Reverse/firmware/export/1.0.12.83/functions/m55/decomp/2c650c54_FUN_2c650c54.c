/* FUN_2c650c54 @ 0x2c650c54 */

bool FUN_2c650c54(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (param_2 < uVar1) {
    return true;
  }
  return uVar1 + *(int *)(uVar1 - 0xc) < param_2;
}

