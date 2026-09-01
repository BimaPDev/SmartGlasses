/* FUN_1007a2a4 @ 0x1007a2a4 */

void FUN_1007a2a4(undefined2 param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  
  iVar1 = DAT_1007a2c4;
  uVar3 = *(byte *)(DAT_1007a2c4 + 0x156) + 1;
  uVar2 = (undefined1)uVar3;
  if (0x1d < (uVar3 & 0xff)) {
    uVar2 = 0;
  }
  *(undefined2 *)(DAT_1007a2c4 + (uint)*(byte *)(DAT_1007a2c4 + 0x156) * 2 + 0xec) = param_1;
  *(undefined1 *)(iVar1 + 0x156) = uVar2;
  return;
}

