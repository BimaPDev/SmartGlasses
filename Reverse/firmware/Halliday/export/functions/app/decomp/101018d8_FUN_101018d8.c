/* FUN_101018d8 @ 0x101018d8 */

uint FUN_101018d8(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar7 = *(int *)(param_1 + 0x10);
  uVar1 = *(uint *)(iVar7 + 6);
  uVar8 = 0;
  uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  while( true ) {
    do {
      uVar6 = uVar1;
      uVar1 = uVar6 + uVar8 >> 1;
      iVar5 = uVar1 * 0xb + 10;
      iVar9 = iVar7 + iVar5;
      if (uVar6 <= uVar8) {
        return 0;
      }
      uVar4 = (uint)*(byte *)(iVar9 + 1) << 8 | (uint)*(byte *)(iVar7 + iVar5) << 0x10 |
              (uint)*(byte *)(iVar9 + 2);
    } while (param_4 < uVar4);
    if (param_4 == uVar4) break;
    uVar8 = uVar1 + 1;
    uVar1 = uVar6;
  }
  if (iVar9 != -3) {
    uVar8 = *(uint *)(iVar9 + 3);
    uVar1 = *(uint *)(iVar9 + 7);
    uVar6 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
            uVar8 >> 0x18;
    uVar1 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
            uVar1 >> 0x18;
    if (uVar8 != 0) {
      uVar8 = *(uint *)(iVar7 + uVar6);
      iVar5 = uVar6 + iVar7;
      uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18;
      uVar6 = 0;
      while( true ) {
        uVar4 = uVar8;
        uVar8 = uVar4 + uVar6 >> 1;
        uVar2 = uVar8 + 1;
        iVar9 = iVar5 + uVar2 * 4;
        if (uVar4 <= uVar6) break;
        uVar3 = (uint)*(byte *)(iVar9 + 1) << 8 | (uint)*(byte *)(iVar5 + uVar2 * 4) << 0x10 |
                (uint)*(byte *)(iVar9 + 2);
        if ((uVar3 <= param_3) &&
           (uVar8 = uVar4, uVar6 = uVar2, param_3 <= uVar3 + *(byte *)(iVar9 + 3))) {
                    /* WARNING: Could not recover jumptable at 0x101019da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*(int *)(param_2 + 0xc) + 0xc))(param_2,param_3);
          return uVar1;
        }
      }
    }
    if (uVar1 != 0) {
      uVar8 = *(uint *)(iVar7 + uVar1);
      uVar6 = 0;
      uVar8 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18;
      while( true ) {
        uVar4 = uVar8;
        uVar8 = uVar4 + uVar6 >> 1;
        iVar5 = uVar8 * 5 + 4;
        iVar9 = uVar1 + iVar7 + iVar5;
        if (uVar4 <= uVar6) break;
        uVar2 = (uint)*(byte *)(iVar9 + 1) << 8 | (uint)*(byte *)(uVar1 + iVar7 + iVar5) << 0x10 |
                (uint)*(byte *)(iVar9 + 2);
        if (uVar2 <= param_3) {
          if (param_3 == uVar2) {
            return (uint)CONCAT11(*(undefined1 *)(iVar9 + 3),*(undefined1 *)(iVar9 + 4));
          }
          uVar6 = uVar8 + 1;
          uVar8 = uVar4;
        }
      }
    }
    return 0;
  }
  return 0;
}

