/* FUN_100ff3ec @ 0x100ff3ec */

int FUN_100ff3ec(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_2c [2];
  
  iVar2 = (**(code **)(param_1 + 0x204))(param_1,DAT_100ff508,param_2,local_2c);
  if (iVar2 == 0) {
    if (local_2c[0] < 4) {
      return 0x8e;
    }
    iVar2 = FUN_100fae48(param_2,local_2c[0],param_1 + 0x310);
    if (iVar2 == 0) {
      iVar6 = *(int *)(param_1 + 0x310);
      *(uint *)(param_1 + 0x314) = local_2c[0];
      local_2c[0] = local_2c[0] + iVar6;
      uVar3 = (uint)CONCAT11(*(undefined1 *)(iVar6 + 2),*(undefined1 *)(iVar6 + 3));
      uVar13 = uVar3;
      if (0x1f < uVar3) {
        uVar13 = 0x20;
      }
      uVar8 = 0;
      uVar10 = uVar8;
      uVar11 = uVar8;
      if ((uVar3 != 0) && (iVar6 + 10U <= local_2c[0])) {
        uVar9 = 1;
        uVar3 = iVar6 + 4;
        while( true ) {
          uVar7 = (uint)CONCAT11(*(undefined1 *)(uVar3 + 2),*(undefined1 *)(uVar3 + 3));
          if (uVar7 < 0xf) break;
          uVar7 = uVar7 + uVar3;
          if (local_2c[0] <= uVar7) {
            uVar7 = local_2c[0];
          }
          if (((*(char *)(uVar3 + 4) == '\0') && ((*(byte *)(uVar3 + 5) & 3) == 1)) &&
             (uVar3 + 0xe <= uVar7)) {
            iVar6 = uVar7 - (uVar3 + 0xe);
            uVar4 = (uint)CONCAT11(*(undefined1 *)(uVar3 + 6),*(undefined1 *)(uVar3 + 7));
            if (iVar6 < (int)(uVar4 * 6)) {
              uVar4 = (int)((ulonglong)((longlong)DAT_100ff50c * (longlong)iVar6) >> 0x20) -
                      (iVar6 >> 0x1f);
            }
            uVar10 = uVar10 | uVar9;
            if (uVar4 != 0) {
              uVar12 = *(uint *)(uVar3 + 0xe);
              puVar5 = (uint *)(uVar3 + 0x14);
              uVar3 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                      uVar12 >> 0x18;
              do {
                uVar4 = uVar4 - 1;
                if (uVar4 == 0) {
                  uVar11 = uVar11 | uVar9;
                  break;
                }
                uVar12 = *puVar5;
                puVar5 = (uint *)((int)puVar5 + 6);
                uVar12 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18;
                bVar1 = uVar3 < uVar12;
                uVar3 = uVar12;
              } while (bVar1);
            }
          }
          uVar8 = uVar8 + 1;
          if ((uVar13 <= uVar8) ||
             (uVar9 = 1 << (uVar8 & 0xff), uVar3 = uVar7, local_2c[0] < uVar7 + 6)) break;
        }
      }
      *(uint *)(param_1 + 0x318) = uVar8;
      *(uint *)(param_1 + 0x31c) = uVar10;
      *(uint *)(param_1 + 800) = uVar11;
    }
  }
  return iVar2;
}

