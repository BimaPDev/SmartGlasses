/* FUN_1012ce84 @ 0x1012ce84 */

bool FUN_1012ce84(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xe);
  if (uVar1 != 0x426) {
    if (uVar1 < 0x427) {
      if (9 < (uVar1 - 0x401 & 0xffff)) {
        return false;
      }
      return (1 << (uVar1 - 0x401 & 0xff) & 0x281U) != 0;
    }
    if (uVar1 != 0x42a) {
      return uVar1 == 0x803;
    }
  }
  return true;
}

