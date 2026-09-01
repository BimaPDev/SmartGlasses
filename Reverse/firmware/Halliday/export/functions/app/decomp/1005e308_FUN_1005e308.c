/* FUN_1005e308 @ 0x1005e308 */

undefined4 FUN_1005e308(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x318) == 2) {
    FUN_100a5b78(DAT_1005e358 | (DAT_1005e354 - DAT_1005e350) * 0x20 & 0xff00U,DAT_1005e360,
                 DAT_1005e35c);
    *(byte *)(param_1 + 0x31c) = *(byte *)(param_1 + 0x31c) | 1;
    FUN_10114490(param_1 + 0xa8,param_1 + 0x94);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

