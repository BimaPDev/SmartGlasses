/* FUN_100e8b10 @ 0x100e8b10 */

int FUN_100e8b10(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar3 = param_1 - 4U & 0xff;
  if (uVar3 < 0x1a) {
    iVar1 = (int)*(short *)(DAT_100e8b30 + uVar3 * 2);
    uVar2 = *(undefined1 *)(DAT_100e8b34 + uVar3);
  }
  else {
    uVar2 = 0;
    iVar1 = -1;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = uVar2;
  }
  return iVar1;
}

