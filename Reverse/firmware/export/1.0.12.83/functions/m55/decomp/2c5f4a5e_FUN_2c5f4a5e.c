/* FUN_2c5f4a5e @ 0x2c5f4a5e */

undefined4 FUN_2c5f4a5e(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  byte in_r12;
  
  if (param_3 - 9 < 2) {
    while ((in_r12 & 0x20) != 0) {
      param_3 = (uint)*(byte *)(param_4 + 1);
      param_4 = param_4 + 1;
      in_r12 = *(byte *)(param_2 + param_3);
    }
    param_1 = 0;
    if (8 < param_3) {
      if (param_3 < 0xb) {
        param_1 = 2;
      }
      else if (param_3 == 0xd) {
        param_1 = 2;
      }
      else {
        param_1 = 0;
      }
    }
  }
  return param_1;
}

