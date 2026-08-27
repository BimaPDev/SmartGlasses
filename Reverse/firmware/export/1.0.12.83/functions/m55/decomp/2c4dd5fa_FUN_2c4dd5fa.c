/* FUN_2c4dd5fa @ 0x2c4dd5fa */

bool FUN_2c4dd5fa(int param_1,uint param_2)

{
  if (param_2 == 0xffffffff) {
    return true;
  }
  if ((param_2 < 0x10) && ((1 << (param_2 & 0xff) & *(uint *)(param_1 + 0x38)) == 0)) {
    return param_2 <= *(uint *)(param_1 + 0x28);
  }
  return false;
}

