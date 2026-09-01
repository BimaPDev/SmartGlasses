/* FUN_100862e0 @ 0x100862e0 */

undefined1 FUN_100862e0(uint param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1 < 5) {
    uVar2 = FUN_1008679c(*(undefined4 *)(DAT_10086304 + param_1 * 4));
    if (uVar2 < 0x17) {
      uVar1 = *(undefined1 *)(DAT_10086308 + uVar2);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

