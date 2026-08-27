/* FUN_1405b698 @ 0x1405b698 */

uint FUN_1405b698(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(DAT_1405b6e8 + 0x28);
  if ((uVar2 <= param_1) && ((int)param_1 <= (int)(uVar2 + 7))) {
    return param_1 - uVar2 & 0xff;
  }
  uVar2 = (uint)*(ushort *)(DAT_1405b6e8 + 0x26);
  if ((uVar2 <= param_1) && ((int)param_1 <= (int)(uVar2 + 10))) {
    uVar1 = (param_1 - uVar2 & 0xffff) + 8 & 0xffff;
    if (0xd < uVar1) {
      if (-1 < (int)((uint)*(byte *)(DAT_1405b6e8 + 0x50) << 0x1e)) {
        uVar1 = (uint)(ushort)((short)(param_1 - uVar2) + 10);
      }
      if ((0xe < uVar1) && (-1 < (int)((uint)*(byte *)(DAT_1405b6e8 + 0x50) << 0x1f))) {
        uVar1 = uVar1 + 2;
      }
    }
    return uVar1 & 0xff;
  }
  return 0x13;
}

