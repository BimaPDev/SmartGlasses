/* FUN_14053e98 @ 0x14053e98 */

undefined4 FUN_14053e98(int param_1,short *param_2,int param_3)

{
  short *psVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  psVar1 = param_2 + (param_1 - 1U & 0xff) * 2 + 2;
  do {
    if (*param_2 == 0) {
      if ((int)((uint)*(byte *)(param_3 + 0x10) << 0x1f) < 0) {
        return 0x83;
      }
    }
    else if ((*(byte *)(param_3 + 0x11) & ~*(byte *)(param_2 + 1)) != 0) {
      return 0x85;
    }
    param_2 = param_2 + 2;
    param_3 = param_3 + 0x12;
  } while (param_2 != psVar1);
  return 0;
}

