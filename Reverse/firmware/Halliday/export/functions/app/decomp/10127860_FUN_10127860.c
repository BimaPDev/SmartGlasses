/* FUN_10127860 @ 0x10127860 */

uint FUN_10127860(uint param_1,uint param_2)

{
  if (param_2 < 0xfd) {
    if (2 < param_2) {
      return (param_1 * param_2 * 0x8081 & 0x7fffffff) >> 0x17;
    }
    param_1 = 0;
  }
  return param_1;
}

