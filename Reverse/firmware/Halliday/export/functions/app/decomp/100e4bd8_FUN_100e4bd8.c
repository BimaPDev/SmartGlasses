/* FUN_100e4bd8 @ 0x100e4bd8 */

int FUN_100e4bd8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (param_1 != 0) {
    uVar1 = 0;
    do {
      uVar3 = uVar1;
      if ((*DAT_100e4c0c & 0x7f) >> 4 <= (uVar3 & 0xff)) {
        return 0;
      }
      uVar1 = uVar3 + 1;
    } while (param_1 != *(int *)(uVar3 * 0xb8 + 0xb8 + DAT_100e4c10));
    iVar2 = uVar3 * 0xb8 + DAT_100e4c14;
  }
  return iVar2;
}

