/* FUN_100dd8a8 @ 0x100dd8a8 */

int FUN_100dd8a8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (param_1 != 0) {
    uVar1 = 0;
    do {
      uVar3 = uVar1;
      if ((*DAT_100dd8e0 & 0x7f) >> 4 <= (uVar3 & 0xff)) {
        return 0;
      }
      uVar1 = uVar3 + 1;
    } while (param_1 != *(int *)(uVar3 * 0x148 + 0x148 + DAT_100dd8e4));
    iVar2 = uVar3 * 0x148 + DAT_100dd8e8;
  }
  return iVar2;
}

