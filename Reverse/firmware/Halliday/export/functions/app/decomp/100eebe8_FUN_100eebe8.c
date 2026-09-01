/* FUN_100eebe8 @ 0x100eebe8 */

undefined2 FUN_100eebe8(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *DAT_100eec0c;
  uVar2 = (uint)*(byte *)(iVar3 + 2);
  if (uVar2 <= param_1) {
    if ((int)param_1 < (int)(uVar2 + 2)) {
      uVar1 = *(undefined2 *)(iVar3 + (param_1 - uVar2) * 2 + 0x12);
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return *(undefined2 *)(*(int *)(iVar3 + 4) + param_1 * 2);
}

