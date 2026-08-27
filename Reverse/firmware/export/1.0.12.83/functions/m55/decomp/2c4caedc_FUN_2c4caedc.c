/* FUN_2c4caedc @ 0x2c4caedc */

undefined4 FUN_2c4caedc(int param_1,uint param_2,uint param_3)

{
  if (param_1 == 0) {
    return 0x2001;
  }
  if (param_2 == 0x21) {
    if (-1 < (int)param_3) {
      return 0;
    }
    return 0x200a;
  }
  if (param_2 < 0x22) {
    if (param_2 == 3) {
      if (1 < param_3) {
        return 0x200a;
      }
      FUN_2c4d70e4(param_1 + 0x1c4,param_3 ^ 1);
      return 0;
    }
    if (param_2 != 0x20) {
      return 0x200a;
    }
    param_3 = param_3 & 0xfc;
  }
  else {
    if (param_2 != 0x603) {
      if (param_2 != 0x1000) {
        return 0x200a;
      }
      *(uint *)(param_1 + 0x14d8) = param_3;
      *(undefined1 *)(param_1 + 0x14dc) = 0;
      return 0;
    }
    param_3 = FUN_2c4d3af8(*(undefined4 *)(param_1 + 0x14),5,1);
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
  }
  if (param_3 != 0) {
    return 0x200a;
  }
  return 0;
}

