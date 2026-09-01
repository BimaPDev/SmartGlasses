/* FUN_100e8ae8 @ 0x100e8ae8 */

uint FUN_100e8ae8(int param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 - 4U & 0xff;
  if (uVar2 < 0x1a) {
    uVar1 = *(uint *)(DAT_100e8b08 + uVar2 * 4);
    uVar2 = (uint)*(byte *)(DAT_100e8b0c + uVar2);
  }
  else {
    uVar2 = 0;
    uVar1 = uVar2;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = (char)uVar2;
  }
  return uVar1;
}

