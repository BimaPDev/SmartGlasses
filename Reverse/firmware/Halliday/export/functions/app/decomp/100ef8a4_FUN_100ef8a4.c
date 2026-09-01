/* FUN_100ef8a4 @ 0x100ef8a4 */

int FUN_100ef8a4(uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(DAT_100ef8cc + 1);
  do {
    uVar1 = uVar1 - 1;
    if (uVar1 == 0xffffffff) {
      return 0;
    }
  } while (*(ushort *)(*DAT_100ef8cc + uVar1 * 0xc) != param_1);
  return *DAT_100ef8cc + uVar1 * 0xc;
}

