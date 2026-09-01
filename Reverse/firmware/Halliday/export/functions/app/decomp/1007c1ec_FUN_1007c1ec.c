/* FUN_1007c1ec @ 0x1007c1ec */

undefined4 FUN_1007c1ec(int param_1)

{
  undefined4 uVar1;
  
  FUN_1007c0ec();
  if (param_1 == 0) {
    if (-1 < *(int *)(DAT_1007c218 + 0x1d0) << 0xf) {
      return 0;
    }
    uVar1 = 0;
  }
  else {
    if (*(int *)(DAT_1007c218 + 0x1d0) << 0xf < 0) {
      return 0;
    }
    uVar1 = 0x10000;
  }
  FUN_1007c100(0x30000,uVar1);
  return 0;
}

