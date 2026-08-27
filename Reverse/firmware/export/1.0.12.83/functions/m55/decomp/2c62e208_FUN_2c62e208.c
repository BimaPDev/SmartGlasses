/* FUN_2c62e208 @ 0x2c62e208 */

int FUN_2c62e208(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  sVar1 = (short)param_1 +
          ((short)((uint)((int)((ulonglong)((longlong)DAT_2c62e274 * (longlong)param_1) >> 0x20) +
                         param_1) >> 8) - (short)(param_1 >> 0x1f)) * -0x168;
  uVar2 = (uint)sVar1;
  if ((int)uVar2 < 0) {
    uVar2 = (uint)(short)(sVar1 + 0x168);
  }
  if ((int)uVar2 < 0x5a) {
    return (int)*(short *)(DAT_2c62e278 + uVar2 * 2);
  }
  uVar2 = uVar2 & 0xffff;
  if (uVar2 - 0x5a < 0x5a) {
    return (int)*(short *)(DAT_2c62e278 + (0xb4 - uVar2 & 0xffff) * 2);
  }
  uVar3 = uVar2 - 0xb4 & 0xffff;
  if (uVar3 < 0x5a) {
    return (int)-*(short *)(DAT_2c62e278 + uVar3 * 2);
  }
  return (int)-*(short *)(DAT_2c62e278 + (0x168 - uVar2 & 0xffff) * 2);
}

