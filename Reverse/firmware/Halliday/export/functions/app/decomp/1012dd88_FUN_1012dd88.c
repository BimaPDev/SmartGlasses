/* FUN_1012dd88 @ 0x1012dd88 */

uint FUN_1012dd88(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(byte *)(param_1 + 0x28) & 1;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar1 = *(uint *)(param_1 + 0x20);
    bVar3 = *(uint *)(param_1 + 0x24) <= *(uint *)(param_1 + 0x1c);
    if (*(uint *)(param_1 + 0x1c) == *(uint *)(param_1 + 0x24)) {
      bVar3 = uVar1 <= uVar2;
    }
    if (bVar3) {
      uVar1 = (*(int *)(param_1 + 0x10) + uVar1) - uVar2;
    }
    else {
      uVar1 = uVar1 - uVar2;
    }
    uVar1 = uVar1 - ((uVar1 >> 0xc) * 0xc + 0xc);
  }
  return uVar1;
}

