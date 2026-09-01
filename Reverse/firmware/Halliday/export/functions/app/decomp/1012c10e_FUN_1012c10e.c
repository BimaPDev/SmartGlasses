/* FUN_1012c10e @ 0x1012c10e */

uint FUN_1012c10e(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x2e);
  if ((int)((uint)*(byte *)(param_1 + 0x32) << 0x1f) < 0) {
    uVar2 = *(ushort *)(param_1 + 0x2c) / 7;
    uVar1 = uVar1 - uVar2 * (uVar1 / uVar2) & 0xffff;
  }
  return uVar1;
}

