/* FUN_1011a668 @ 0x1011a668 */

undefined4 FUN_1011a668(ushort *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100568d0();
  if (uVar1 >> 0x10 == 0x4252) {
    *param_1 = (ushort)uVar1 & 0xff00;
    *param_2 = (char)uVar1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

