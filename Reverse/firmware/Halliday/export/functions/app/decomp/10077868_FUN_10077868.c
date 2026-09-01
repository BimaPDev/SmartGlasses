/* FUN_10077868 @ 0x10077868 */

undefined4 FUN_10077868(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 < 8) {
    if (param_1 == 0) {
      if (-1 < (int)(*DAT_10077900 << 0x18)) {
        FUN_100a5b78(DAT_10077904 | (DAT_100778f0 - DAT_100778ec) * 0x20 & 0xff00U,DAT_100778fc,
                     DAT_10077908);
        return 0xffffffff;
      }
      if ((*DAT_10077900 & 0x38) != 0) {
        param_2 = param_2 + 8 & 0xff;
      }
      *DAT_10077900 = *DAT_10077900 & 0xffffffc0 | param_2;
      return 0;
    }
    uVar1 = (DAT_100778f0 - DAT_100778ec) * 0x20 & 0xff00U | 0x16a0011;
    uVar2 = DAT_1007790c;
  }
  else {
    uVar1 = DAT_100778f4 | (DAT_100778f0 - DAT_100778ec) * 0x20 & 0xff00U;
    uVar2 = DAT_100778f8;
    param_1 = param_2;
  }
  FUN_100a5b78(uVar1,DAT_100778fc,uVar2,param_1);
  return 0xffffffea;
}

