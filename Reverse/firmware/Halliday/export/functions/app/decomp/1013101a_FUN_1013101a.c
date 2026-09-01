/* FUN_1013101a @ 0x1013101a */

byte * FUN_1013101a(byte *param_1,uint param_2)

{
  if (*param_1 != param_2) {
    if (param_1[0xc] == param_2) {
      return param_1 + 0xc;
    }
    param_1 = (byte *)0x0;
  }
  return param_1;
}

