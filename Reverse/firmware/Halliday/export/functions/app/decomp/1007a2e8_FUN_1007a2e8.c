/* FUN_1007a2e8 @ 0x1007a2e8 */

void FUN_1007a2e8(undefined2 param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  
  iVar1 = DAT_1007a308;
  uVar3 = *(byte *)(DAT_1007a308 + 0x157) + 1;
  uVar2 = (undefined1)uVar3;
  if (9 < (uVar3 & 0xff)) {
    uVar2 = 0;
  }
  *(undefined2 *)(DAT_1007a308 + (*(byte *)(DAT_1007a308 + 0x157) + 0x94) * 2) = param_1;
  *(undefined1 *)(iVar1 + 0x157) = uVar2;
  return;
}

