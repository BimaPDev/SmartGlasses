/* FUN_1409d310 @ 0x1409d310 */

undefined4 FUN_1409d310(uint param_1)

{
  ushort uVar1;
  
  param_1 = param_1 & ~((int)param_1 >> 0x1f);
  if (0xf < (int)param_1) {
    param_1 = 0x10;
  }
  FUN_1402a6e8(4,0x1d4e,DAT_1409d354,DAT_1409d350,DAT_1409d34c,param_1);
  uVar1 = *DAT_1409d358;
  *DAT_1409d35c = (char)param_1;
  if (-1 < (int)((uint)uVar1 << 0x18)) {
    FUN_1409cfbc(param_1);
  }
  return 0;
}

