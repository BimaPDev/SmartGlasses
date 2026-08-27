/* FUN_140738f8 @ 0x140738f8 */

undefined4 FUN_140738f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  bVar1 = *(byte *)(param_1 + 0x2d);
  if ((bVar1 & 0x10) == 0) {
    if ((bVar1 & 0xf) != 0) {
      return 1;
    }
    bVar1 = bVar1 & 0xf0 | 2;
    *(undefined1 *)(param_1 + 0x2c) = 0xa5;
  }
  else {
    *(undefined1 *)(param_1 + 0x2c) = 0xa5;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(byte *)(param_1 + 0x2d) = bVar1 | 0x10;
  return 0;
}

