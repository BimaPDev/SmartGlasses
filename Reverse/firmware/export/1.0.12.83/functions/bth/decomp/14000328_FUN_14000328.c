/* FUN_14000328 @ 0x14000328 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14000328(uint param_1)

{
  undefined4 uVar1;
  
  if (2 < param_1) {
    return 1;
  }
  if (((_DAT_4000008c & 0x5000) == 0x4000) || ((_DAT_4000008c & 0xa000) == 0x8000)) {
    return 0xffffffff;
  }
  if (param_1 == 1) {
    uVar1 = 0x1740;
    _DAT_4000008c = 0x1040;
  }
  else {
    if (param_1 != 2) {
      uVar1 = 0x740;
      _DAT_4000008c = 0x40;
      goto LAB_1400035c;
    }
    uVar1 = 0x3740;
    _DAT_4000008c = 0x3040;
  }
  _DAT_40000054 = _DAT_40000054 & 0xfffffdff;
  _DAT_40000000 = 0x20000;
  _DAT_40000018 = _DAT_40000018 & 0xfffa0ffc | 0x20000;
LAB_1400035c:
  FUN_14000770(2);
  _DAT_4000008c = uVar1;
  return 0;
}

