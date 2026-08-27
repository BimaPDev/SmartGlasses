/* FUN_1404ca68 @ 0x1404ca68 */

undefined4 FUN_1404ca68(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0xf) {
    if (param_1 != 0) {
      FUN_1402a6e8(4,0x5b1,DAT_1404cab0,DAT_1404caac,DAT_1404caa8,DAT_1404caa4,param_1);
      return 0;
    }
    if (*(char *)(DAT_1404caa0 + 6) != '\0') {
      uVar1 = FUN_14095e18();
      return uVar1;
    }
  }
  return 0;
}

