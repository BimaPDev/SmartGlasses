/* FUN_101013c8 @ 0x101013c8 */

undefined4 * FUN_101013c8(int param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_1c;
  
  uVar4 = *param_2;
  uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
  uVar6 = uVar4 + 1;
  local_1c = 0;
  if (*(uint *)(param_1 + 0x1c) < uVar6) {
    *(undefined4 *)(param_1 + 0x24) = param_3;
    puVar1 = (undefined4 *)
             FUN_100fb280(param_3,4,*(uint *)(param_1 + 0x1c),uVar6,*(undefined4 *)(param_1 + 0x20),
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
  if (uVar4 != 0) {
    iVar2 = (int)param_2 + 9;
    puVar3 = puVar1 + -1;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = (uint)*(byte *)(iVar2 + -4) << 8 | (uint)*(byte *)(iVar2 + -5) << 0x10 |
                (uint)*(byte *)(iVar2 + -3);
      iVar2 = iVar2 + 5;
    } while (puVar3 != puVar1 + (uVar4 - 1));
    puVar5 = puVar1 + uVar4;
  }
  *puVar5 = 0;
  return puVar1;
}

