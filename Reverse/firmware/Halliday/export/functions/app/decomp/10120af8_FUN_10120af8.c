/* FUN_10120af8 @ 0x10120af8 */

uint FUN_10120af8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 0x20);
  while( true ) {
    uVar1 = uVar2 & 0xff;
    if (uVar4 <= uVar1) {
      if (uVar4 == uVar1) {
        uVar1 = 0xff;
      }
      return uVar1;
    }
    uVar2 = uVar2 + 1;
    uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 0x14 + uVar2 * 0x1c);
    if (param_2 < uVar3) break;
    param_2 = param_2 - uVar3 & 0xff;
  }
  return uVar1;
}

