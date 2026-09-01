/* FUN_10101450 @ 0x10101450 */

uint * FUN_10101450(int param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int local_1c;
  
  uVar4 = *param_2;
  uVar6 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    iVar7 = 0;
    do {
      iVar1 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 + *(byte *)((int)param_2 + iVar1 + 7) + 1;
    } while (uVar6 != uVar4);
    uVar4 = iVar7 + 1;
  }
  local_1c = 0;
  if (*(uint *)(param_1 + 0x1c) < uVar4) {
    *(undefined4 *)(param_1 + 0x24) = param_3;
    puVar2 = (uint *)FUN_100fb280(param_3,4,*(uint *)(param_1 + 0x1c),uVar4,
                                  *(undefined4 *)(param_1 + 0x20),&local_1c);
    *(uint **)(param_1 + 0x20) = puVar2;
    if (local_1c != 0) {
      return (uint *)0x0;
    }
    *(uint *)(param_1 + 0x1c) = uVar4;
  }
  else {
    puVar2 = *(uint **)(param_1 + 0x20);
  }
  param_2 = param_2 + 2;
  puVar8 = puVar2;
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar5 = (uint)*(byte *)((int)param_2 + -3) << 8 | (uint)(byte)param_2[-1] << 0x10 |
            (uint)*(byte *)((int)param_2 + -2);
    iVar7 = *(byte *)((int)param_2 + -1) + 1;
    uVar4 = uVar5 + iVar7;
    puVar3 = puVar8;
    do {
      *puVar3 = uVar5;
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != uVar4);
    puVar8 = puVar8 + iVar7;
    param_2 = param_2 + 1;
  }
  *puVar8 = 0;
  return puVar2;
}

