/* FUN_100feac0 @ 0x100feac0 */

void FUN_100feac0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x164);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 8);
  if (uVar1 != 0) {
    uVar4 = uVar1 + *(int *)(param_1 + 0x15c) * 0x14;
    if (uVar1 < uVar4) {
      do {
        FUN_100fb5cc(uVar3,*(undefined4 *)(uVar1 + 0x10));
        uVar2 = uVar1 + 0x14;
        *(undefined4 *)(uVar1 + 0x10) = 0;
        uVar1 = uVar2;
      } while (uVar2 < uVar4);
      uVar1 = *(uint *)(param_1 + 0x164);
    }
    FUN_100fb5cc(uVar3,uVar1);
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x16c);
  if (uVar1 != 0) {
    uVar4 = uVar1 + *(int *)(param_1 + 0x168) * 0xc;
    if (uVar1 < uVar4) {
      do {
        FUN_100fb5cc(uVar3,*(undefined4 *)(uVar1 + 8));
        uVar2 = uVar1 + 0xc;
        *(undefined4 *)(uVar1 + 8) = 0;
        uVar1 = uVar2;
      } while (uVar2 < uVar4);
      uVar1 = *(uint *)(param_1 + 0x16c);
    }
    FUN_100fb5cc(uVar3,uVar1);
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined2 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}

