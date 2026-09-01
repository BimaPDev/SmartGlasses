/* FUN_10101344 @ 0x10101344 */

undefined4 * FUN_10101344(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_1c;
  
  iVar4 = *(int *)(param_1 + 0x18);
  uVar6 = iVar4 + 1;
  iVar3 = *(int *)(param_1 + 0x10);
  local_1c = 0;
  if (*(uint *)(param_1 + 0x1c) < uVar6) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    puVar1 = (undefined4 *)
             FUN_100fb280(param_2,4,*(uint *)(param_1 + 0x1c),uVar6,*(undefined4 *)(param_1 + 0x20),
                          &local_1c);
    *(undefined4 **)(param_1 + 0x20) = puVar1;
    if (local_1c != 0) {
      return (undefined4 *)0x0;
    }
    *(uint *)(param_1 + 0x1c) = uVar6;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x20);
  }
  puVar5 = puVar1;
  if (iVar4 != 0) {
    iVar3 = iVar3 + 0x15;
    puVar2 = puVar1 + -1;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = (uint)*(byte *)(iVar3 + -10) << 8 | (uint)*(byte *)(iVar3 + -0xb) << 0x10 |
                (uint)*(byte *)(iVar3 + -9);
      iVar3 = iVar3 + 0xb;
    } while (puVar1 + iVar4 + -1 != puVar2);
    puVar5 = puVar1 + iVar4;
  }
  *puVar5 = 0;
  return puVar1;
}

