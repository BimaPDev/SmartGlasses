/* FUN_100eeec0 @ 0x100eeec0 */

undefined4 FUN_100eeec0(uint param_1)

{
  undefined4 uVar1;
  
  if ((int)((uint)*(byte *)(DAT_100eeef0 + 2) << 0x1f) < 0) {
    param_1 = FUN_100eec68();
  }
  else if (((int)param_1 < 0) || ((int)(uint)*(byte *)(*DAT_100eeef0 + 2) <= (int)param_1)) {
    return 0xffffffea;
  }
  uVar1 = FUN_100eee48(param_1 & 0xff);
  return uVar1;
}

