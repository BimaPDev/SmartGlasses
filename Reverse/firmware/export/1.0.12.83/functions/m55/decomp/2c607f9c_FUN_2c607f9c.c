/* FUN_2c607f9c @ 0x2c607f9c */

uint FUN_2c607f9c(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (((param_2 & 0x6000) == 0x2000) && (uVar1 = param_2 & 0xffff9fff, (int)uVar1 < 0x7d1)) {
    if (1000 < (int)uVar1) {
      uVar1 = 1000 - uVar1;
    }
    param_2 = (uint)(short)((short)(int)((longlong)DAT_2c608028 * (longlong)(int)(uVar1 * param_4)
                                        >> 0x25) - (short)((int)(uVar1 * param_4) >> 0x1f));
  }
  if (((param_3 & 0x6000) == 0x2000) && (uVar1 = param_3 & 0xffff9fff, (int)uVar1 < 0x7d1)) {
    if (1000 < (int)uVar1) {
      uVar1 = 1000 - uVar1;
    }
    uVar1 = (uint)(short)((short)(int)((longlong)DAT_2c608028 * (longlong)(int)(uVar1 * param_4) >>
                                      0x25) - (short)((int)(uVar1 * param_4) >> 0x1f));
    if ((int)uVar1 <= (int)param_1) {
      param_1 = uVar1;
    }
    if ((int)param_1 < (int)param_2) {
      param_1 = param_2;
    }
    return param_1;
  }
  if ((int)param_3 <= (int)param_1) {
    param_1 = param_3;
  }
  if ((int)param_1 < (int)param_2) {
    param_1 = param_2;
  }
  return param_1;
}

