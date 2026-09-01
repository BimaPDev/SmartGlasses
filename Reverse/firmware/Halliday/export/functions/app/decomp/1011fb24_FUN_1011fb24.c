/* FUN_1011fb24 @ 0x1011fb24 */

uint FUN_1011fb24(int param_1)

{
  uint uVar1;
  
  if (param_1 + 0xd00d0000U < 0xc000) {
    return param_1 + 0xd00d0000U >> 1;
  }
  if (0x77fff < param_1 + 0xd0020000U) {
    if (param_1 + 0xd00e8000U < 0x8000) {
      uVar1 = (param_1 + 0xd00e8000U >> 1) + 0x40100000;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return (param_1 + 0xd0020000U >> 1) + 0x40000000;
}

