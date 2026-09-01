/* FUN_101014f8 @ 0x101014f8 */

int FUN_101014f8(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  int local_2c [2];
  
  iVar9 = *(int *)(param_1 + 0x10);
  uVar13 = *(uint *)(iVar9 + 6);
  uVar17 = 0;
  uVar13 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18;
  while( true ) {
    do {
      uVar11 = uVar13;
      uVar13 = uVar11 + uVar17 >> 1;
      iVar10 = uVar13 * 0xb + 10;
      iVar18 = iVar9 + iVar10;
      if (uVar11 <= uVar17) {
        return 0;
      }
      uVar7 = (uint)*(byte *)(iVar18 + 1) << 8 | (uint)*(byte *)(iVar9 + iVar10) << 0x10 |
              (uint)*(byte *)(iVar18 + 2);
    } while (param_3 < uVar7);
    if (param_3 == uVar7) break;
    uVar17 = uVar13 + 1;
    uVar13 = uVar11;
  }
  if (iVar18 == -3) {
    return 0;
  }
  uVar17 = *(uint *)(iVar18 + 3);
  uVar13 = *(uint *)(iVar18 + 7);
  uVar11 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18;
  uVar13 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18;
  if (uVar17 == 0) {
    if (uVar13 == 0) {
      return 0;
    }
    iVar9 = FUN_101013c8(param_1,iVar9 + uVar13,param_2);
    return iVar9;
  }
  if (uVar13 == 0) {
    iVar9 = FUN_10101450(param_1,iVar9 + uVar11,param_2);
    return iVar9;
  }
  uVar7 = *(uint *)(iVar9 + uVar13);
  uVar17 = *(uint *)(iVar9 + uVar11);
  iVar10 = iVar9 + uVar13;
  uVar7 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
  iVar9 = iVar9 + uVar11;
  uVar13 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18;
  if (uVar17 == 0) {
    if (uVar7 == 0) goto LAB_101016a6;
  }
  else {
    uVar17 = 0;
    iVar18 = 0;
    do {
      iVar1 = uVar17 * 4;
      uVar17 = uVar17 + 1;
      iVar18 = iVar18 + *(byte *)(iVar9 + 7 + iVar1) + 1;
    } while (uVar13 != uVar17);
    if (uVar7 == 0) {
LAB_101016a6:
      iVar9 = FUN_10101450(param_1,iVar9,param_2);
      return iVar9;
    }
    if (iVar18 != 0) {
      uVar17 = uVar7 + 1 + iVar18;
      local_2c[0] = 0;
      if (*(uint *)(param_1 + 0x1c) < uVar17) {
        *(undefined4 *)(param_1 + 0x24) = param_2;
        iVar18 = FUN_100fb280(param_2,4,*(uint *)(param_1 + 0x1c),uVar17,
                              *(undefined4 *)(param_1 + 0x20),local_2c);
        *(int *)(param_1 + 0x20) = iVar18;
        if (local_2c[0] != 0) {
          return 0;
        }
        *(uint *)(param_1 + 0x1c) = uVar17;
      }
      else {
        iVar18 = *(int *)(param_1 + 0x20);
      }
      uVar11 = 1;
      uVar16 = 1;
      uVar15 = (uint)*(byte *)(iVar9 + 7);
      uVar8 = (uint)*(byte *)(iVar9 + 5) << 8 | (uint)*(byte *)(iVar9 + 4) << 0x10 |
              (uint)*(byte *)(iVar9 + 6);
      pbVar6 = (byte *)(iVar9 + 8);
      uVar5 = uVar8 + uVar15;
      uVar17 = (uint)*(byte *)(iVar10 + 5) << 8 | (uint)*(byte *)(iVar10 + 4) << 0x10 |
               (uint)*(byte *)(iVar10 + 6);
      pbVar14 = (byte *)(iVar10 + 9);
      iVar9 = 0;
      do {
        while (uVar17 <= uVar5) {
          uVar11 = uVar11 + 1;
          iVar10 = iVar9;
          if (uVar17 < uVar8) {
            *(uint *)(iVar18 + iVar9 * 4) = uVar17;
            iVar10 = iVar9 + 1;
          }
          if (uVar7 < uVar11) {
            if (uVar16 <= uVar13) {
              puVar12 = (uint *)(iVar18 + (iVar10 + 0x3fffffff) * 4);
              do {
                bVar19 = uVar5 != uVar8;
                puVar12 = puVar12 + 1;
                *puVar12 = uVar8;
                uVar8 = uVar8 + 1;
              } while (bVar19);
              iVar10 = iVar10 + 1 + uVar15;
              if (uVar16 < uVar13) {
                do {
                  bVar4 = pbVar6[3];
                  uVar17 = (uint)pbVar6[1] << 8 | (uint)*pbVar6 << 0x10 | (uint)pbVar6[2];
                  uVar11 = bVar4 + 1 + uVar17;
                  puVar12 = (uint *)(iVar18 + (iVar10 + 0x3fffffff) * 4);
                  do {
                    puVar12 = puVar12 + 1;
                    *puVar12 = uVar17;
                    uVar17 = uVar17 + 1;
                  } while (uVar17 != uVar11);
                  uVar16 = uVar16 + 1;
                  iVar10 = iVar10 + bVar4 + 1;
                  pbVar6 = pbVar6 + 4;
                } while (uVar16 != uVar13);
              }
            }
LAB_1010172a:
            *(undefined4 *)(iVar18 + iVar10 * 4) = 0;
            return iVar18;
          }
          pbVar2 = pbVar14 + 1;
          bVar4 = *pbVar14;
          pbVar3 = pbVar14 + 2;
          pbVar14 = pbVar14 + 5;
          iVar9 = iVar10;
          uVar17 = (uint)*pbVar2 << 8 | (uint)bVar4 << 0x10 | (uint)*pbVar3;
        }
        puVar12 = (uint *)(iVar18 + (iVar9 + 0x3fffffff) * 4);
        do {
          bVar19 = uVar5 != uVar8;
          puVar12 = puVar12 + 1;
          *puVar12 = uVar8;
          uVar8 = uVar8 + 1;
        } while (bVar19);
        uVar16 = uVar16 + 1;
        iVar10 = iVar9 + 1 + uVar15;
        iVar9 = iVar9 + uVar15;
        if (uVar13 < uVar16) {
          if (uVar11 <= uVar7) {
            *(uint *)(iVar18 + iVar10 * 4) = uVar17;
            iVar10 = iVar9 + 2;
            if (uVar11 < uVar7) {
              puVar12 = (uint *)(iVar18 + (iVar9 + 0x40000001) * 4);
              do {
                puVar12 = puVar12 + 1;
                *puVar12 = (uint)pbVar14[1] << 8 | (uint)*pbVar14 << 0x10 | (uint)pbVar14[2];
                pbVar14 = pbVar14 + 5;
              } while ((uint *)(iVar18 + 4 + uVar11 * -4 + (iVar9 + uVar7) * 4) != puVar12);
              iVar10 = (uVar7 - uVar11) + iVar9 + 2;
            }
          }
          goto LAB_1010172a;
        }
        uVar15 = (uint)pbVar6[3];
        uVar8 = (uint)pbVar6[1] << 8 | (uint)*pbVar6 << 0x10 | (uint)pbVar6[2];
        pbVar6 = pbVar6 + 4;
        uVar5 = uVar8 + uVar15;
        iVar9 = iVar10;
      } while( true );
    }
  }
  iVar9 = FUN_101013c8(param_1,iVar10,param_2);
  return iVar9;
}

