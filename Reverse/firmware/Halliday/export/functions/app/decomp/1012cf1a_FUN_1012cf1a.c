/* FUN_1012cf1a @ 0x1012cf1a */

undefined4 FUN_1012cf1a(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  
  if (param_3 < 0xfd) {
    param_2 = param_2 & 0xffffff | param_3 << 0x18;
  }
  if (param_4 == 0x41f) {
    param_2 = ((param_2 & 0xffff) >> 8) << 0x10 | (param_2 & 0xff0000) << 8 | param_2 >> 0x18 |
              (param_2 & 0xff) << 8;
  }
  else {
    bVar1 = param_4 == 0x420;
    if (param_4 < 0x420) {
      if (param_4 == 0x400) {
        param_2 = param_2 & 0xff00 |
                  param_2 & 0xff000000 | (param_2 & 0xff) << 0x10 | (param_2 & 0xffffff) >> 0x10;
        goto LAB_1012cf58;
      }
      bVar1 = param_4 == 0x401;
    }
    if (!bVar1) {
      return 0;
    }
  }
LAB_1012cf58:
  *param_1 = param_2;
  return 1;
}

