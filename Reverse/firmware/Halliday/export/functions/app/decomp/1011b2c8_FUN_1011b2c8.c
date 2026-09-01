/* FUN_1011b2c8 @ 0x1011b2c8 */

undefined4 FUN_1011b2c8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_1011ea10();
    for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
      if ((*(char *)(param_1 + uVar2) == '?') || (*(char *)(param_1 + uVar2) == '*')) {
        return 1;
      }
    }
  }
  return 0;
}

