/* FUN_10130472 @ 0x10130472 */

undefined4 FUN_10130472(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar1 = **(ushort **)(param_1 + 0x14);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar2 = FUN_1012d654(*(undefined4 *)(param_1 + 0x6c));
    uVar5 = ((uVar1 & 0x7fff) + 1 & 0xfffffffe) + 2;
    if (uVar2 < uVar5) {
      uVar3 = 0xffffff97;
    }
    else {
      FUN_100a07a0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x14),uVar5);
      uVar3 = 0;
      puVar4 = *(undefined1 **)(param_1 + 0x14);
      *puVar4 = 0;
      puVar4[1] = 0;
    }
  }
  return uVar3;
}

