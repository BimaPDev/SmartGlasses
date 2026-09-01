/* FUN_101019e8 @ 0x101019e8 */

undefined4 FUN_101019e8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar5 = *(int *)(param_1 + 0x10);
  uVar9 = 0;
  uVar6 = *(uint *)(iVar5 + 6);
  uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  while( true ) {
    do {
      uVar8 = uVar6;
      uVar6 = uVar8 + uVar9 >> 1;
      iVar4 = uVar6 * 0xb + 10;
      iVar7 = iVar5 + iVar4;
      if (uVar8 <= uVar9) {
        return 0xffffffff;
      }
      uVar1 = (uint)*(byte *)(iVar7 + 1) << 8 | (uint)*(byte *)(iVar5 + iVar4) << 0x10 |
              (uint)*(byte *)(iVar7 + 2);
    } while (param_3 < uVar1);
    if (param_3 == uVar1) break;
    uVar9 = uVar6 + 1;
    uVar6 = uVar8;
  }
  if (iVar7 == -3) {
    return 0xffffffff;
  }
  uVar6 = *(uint *)(iVar7 + 3);
  uVar8 = *(uint *)(iVar7 + 7);
  uVar9 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  if (uVar6 != 0) {
    uVar6 = *(uint *)(iVar5 + uVar9);
    iVar4 = uVar9 + iVar5;
    uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
            uVar6 >> 0x18;
    uVar9 = 0;
    while( true ) {
      uVar1 = uVar6 + uVar9 >> 1;
      uVar2 = uVar1 + 1;
      iVar7 = iVar4 + uVar2 * 4;
      if (uVar6 <= uVar9) break;
      uVar3 = (uint)*(byte *)(iVar7 + 1) << 8 | (uint)*(byte *)(iVar4 + uVar2 * 4) << 0x10 |
              (uint)*(byte *)(iVar7 + 2);
      if (uVar3 > param_2) {
        uVar6 = uVar1;
      }
      if ((uVar3 <= param_2) && (uVar9 = uVar2, param_2 <= uVar3 + *(byte *)(iVar7 + 3))) {
        return 1;
      }
    }
  }
  if (uVar8 == 0) {
    return 0xffffffff;
  }
  uVar6 = *(uint *)(iVar5 + uVar8);
  uVar9 = 0;
  uVar6 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18;
  while( true ) {
    do {
      uVar1 = uVar6;
      uVar6 = uVar1 + uVar9 >> 1;
      iVar4 = uVar6 * 5 + 4;
      iVar7 = iVar5 + uVar8 + iVar4;
      if (uVar1 <= uVar9) {
        return 0xffffffff;
      }
      uVar2 = (uint)*(byte *)(iVar7 + 1) << 8 | (uint)*(byte *)(iVar5 + uVar8 + iVar4) << 0x10 |
              (uint)*(byte *)(iVar7 + 2);
    } while (param_2 < uVar2);
    if (param_2 == uVar2) break;
    uVar9 = uVar6 + 1;
    uVar6 = uVar1;
  }
  if (CONCAT11(*(undefined1 *)(iVar7 + 3),*(undefined1 *)(iVar7 + 4)) == 0) {
    return 0xffffffff;
  }
  return 0;
}

