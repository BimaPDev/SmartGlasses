/* FUN_10120b24 @ 0x10120b24 */

uint FUN_10120b24(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = 0;
  while ((uVar2 & 0xff) < (uint)*(byte *)(iVar1 + 0x20)) {
    uVar3 = (uint)*(byte *)(iVar1 + uVar2 * 0x1c + 0x30);
    if (param_2 < uVar3) goto LAB_10120b4c;
    param_2 = param_2 - uVar3 & 0xff;
    uVar2 = uVar2 + 1;
  }
  if ((uint)*(byte *)(iVar1 + 0x20) == (uVar2 & 0xff)) {
    uVar2 = 0xff;
  }
  else {
LAB_10120b4c:
    uVar2 = (uint)*(byte *)(uVar2 * 0x1c + iVar1 + 0x30);
    uVar2 = param_2 - uVar2 * (param_2 / uVar2) & 0xff;
  }
  return uVar2;
}

