/* FUN_2c6513cc @ 0x2c6513cc */

bool FUN_2c6513cc(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (param_2 < uVar1) {
    return true;
  }
  return uVar1 + *(int *)(uVar1 - 0xc) * 4 < param_2;
}

