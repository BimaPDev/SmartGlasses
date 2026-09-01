/* FUN_10100968 @ 0x10100968 */

uint FUN_10100968(int param_1,int param_2,uint *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  
  uVar1 = CONCAT11(*(undefined1 *)(param_2 + 6),*(undefined1 *)(param_2 + 7));
  uVar12 = uVar1 & 0xfffffffe;
  uVar2 = (uint)(uVar1 >> 1);
  if (uVar2 != 0) {
    uVar8 = *param_3;
    if (param_4 != 0) {
      uVar8 = uVar8 + 1;
    }
    if (0xffff < uVar8) {
      return 0;
    }
    uVar9 = 0;
    puVar10 = (undefined1 *)(uVar12 + 0x10 + param_2);
    puVar6 = (undefined1 *)(*(int *)(param_1 + 0x1fc) + *(int *)(param_1 + 0x200));
    puVar11 = puVar10 + uVar12 * 2;
    puVar16 = (undefined1 *)(param_2 + 0xe);
    puVar17 = puVar10;
    do {
      uVar13 = (uint)CONCAT11(*puVar17,puVar17[1]);
      uVar5 = (uint)CONCAT11(*puVar16,puVar16[1]);
      if ((uVar8 < uVar13) && (uVar8 = uVar13, param_4 == 0)) {
        return 0;
      }
      if (uVar8 <= uVar5) {
        uVar7 = (uint)CONCAT11(*puVar11,puVar11[1]);
        iVar18 = (int)CONCAT11(puVar10[uVar9 * 2 + uVar12],puVar10[uVar9 * 2 + uVar12 + 1]);
        do {
          iVar15 = iVar18;
          if ((uVar9 < uVar2 - 1) ||
             ((ushort)(CONCAT11(*puVar16,puVar16[1]) & CONCAT11(*puVar17,puVar17[1])) != 0xffff)) {
            if (uVar7 == 0xffff) break;
            if (uVar7 == 0) goto LAB_10100a82;
LAB_10100a2c:
            puVar3 = puVar11 + uVar7 + (uVar8 - uVar13) * 2;
            if (param_4 == 0) {
              if (CONCAT11(*puVar3,puVar3[1]) == 0) {
                return 0;
              }
              uVar2 = (uint)CONCAT11(*puVar3,puVar3[1]) + iVar18 & 0xffff;
              if (*(uint *)(param_1 + 0x10) <= uVar2) {
                uVar2 = 0;
              }
              return uVar2;
            }
            if (puVar6 < puVar3) break;
            if ((CONCAT11(*puVar3,puVar3[1]) != 0) &&
               (uVar4 = (uint)CONCAT11(*puVar3,puVar3[1]) + iVar18 & 0xffff,
               uVar4 < *(uint *)(param_1 + 0x10))) goto LAB_10100abe;
          }
          else {
            if (uVar7 != 0) {
              if (puVar11 + uVar7 + 2 <= puVar6) {
                if (uVar7 != 0xffff) goto LAB_10100a2c;
                break;
              }
              iVar15 = 1;
            }
LAB_10100a82:
            uVar14 = uVar8 + iVar15;
            uVar4 = uVar14 & 0xffff;
            if (param_4 == 0) {
              return uVar4;
            }
            if (uVar4 < *(uint *)(param_1 + 0x10)) {
LAB_10100abe:
              if (uVar4 != 0) {
                *param_3 = uVar8;
                return uVar4;
              }
            }
            else if ((int)uVar14 < 0) {
              if ((int)(uVar5 + iVar15) < 0) break;
              uVar8 = -iVar15;
            }
            else {
              if ((0xffff < (int)uVar14) || ((int)(uVar5 + iVar15) < 0x10000)) break;
              uVar8 = 0x10000 - iVar15;
            }
          }
          if (0xfffe < uVar8) goto LAB_10100a66;
          uVar8 = uVar8 + 1;
        } while (uVar8 <= uVar5);
      }
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + 2;
      puVar16 = puVar16 + 2;
      puVar17 = puVar17 + 2;
    } while (uVar2 != uVar9);
LAB_10100a66:
    if (param_4 != 0) {
      *param_3 = uVar8;
    }
  }
  return 0;
}

