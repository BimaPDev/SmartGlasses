/* FUN_100ffe48 @ 0x100ffe48 */

undefined4 FUN_100ffe48(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar15;
  bool bVar16;
  undefined1 *puVar14;
  
  if (*(uint *)(param_2 + 8) < param_1 + 4U) {
    FUN_100f9004(param_2,8);
  }
  uVar8 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar6 = (undefined1 *)(param_1 + uVar8);
  if ((*(undefined1 **)(param_2 + 8) < puVar6) || (uVar8 < 0x206)) {
    FUN_100f9004(param_2,8);
  }
  uVar8 = 0;
  puVar7 = (undefined1 *)(param_1 + 6);
  do {
    while( true ) {
      puVar9 = puVar7 + 2;
      uVar5 = CONCAT11(*puVar7,puVar7[1]);
      if ((*(byte *)(param_2 + 0xc) < 2) || ((puVar7[1] & 7) == 0)) break;
      uVar10 = (uint)(uVar5 >> 3);
      FUN_100f9004(param_2,8);
      if (uVar8 < uVar10) {
        uVar8 = uVar10;
      }
      puVar7 = puVar9;
      if (puVar9 == (undefined1 *)(param_1 + 0x206)) goto LAB_100ffeba;
    }
    uVar10 = (uint)(uVar5 >> 3);
    if (uVar8 < uVar10) {
      uVar8 = uVar10;
    }
    puVar7 = puVar9;
  } while (puVar9 != (undefined1 *)(param_1 + 0x206));
LAB_100ffeba:
  puVar7 = puVar9 + (uVar8 + 1) * 8;
  if (*(undefined1 **)(param_2 + 8) < puVar7) {
    FUN_100f9004(param_2,8);
  }
  uVar10 = 0;
  do {
    puVar15 = puVar9 + 8;
    uVar11 = (uint)CONCAT11(puVar9[2],puVar9[3]);
    if (uVar11 != 0) {
      uVar1 = puVar9[4];
      uVar4 = puVar9[5];
      uVar2 = puVar9[6];
      uVar3 = puVar9[7];
      if ((1 < *(byte *)(param_2 + 0xc)) &&
         ((0xff < CONCAT11(*puVar9,puVar9[1]) || (0x100 - CONCAT11(*puVar9,puVar9[1]) < uVar11)))) {
        FUN_100f9004(param_2,8);
      }
      if (CONCAT11(uVar2,uVar3) != 0) {
        if ((puVar15 + (CONCAT11(uVar2,uVar3) - 2) < puVar7) ||
           (puVar6 < puVar15 + (CONCAT11(uVar2,uVar3) - 2) + uVar11 * 2)) {
          FUN_100f9004(param_2,9);
        }
        if ((*(char *)(param_2 + 0xc) != '\0') &&
           (puVar12 = puVar15 + uVar11 * 2, puVar15 < puVar12)) {
          puVar14 = puVar15;
          do {
            while( true ) {
              puVar13 = puVar14 + 2;
              if ((CONCAT11(*puVar14,puVar14[1]) == 0) ||
                 ((uint)(ushort)(CONCAT11(*puVar14,puVar14[1]) + CONCAT11(uVar1,uVar4)) <
                  *(uint *)(param_2 + 0x14))) break;
              FUN_100f9004(param_2,0x10);
              puVar14 = puVar13;
              if (puVar12 <= puVar13) goto LAB_100fff9e;
            }
            puVar14 = puVar13;
          } while (puVar13 < puVar12);
LAB_100fff9e:
          puVar15 = puVar15 + ((uint)(puVar12 + (-9 - (int)puVar9)) & 0xfffffffe) + 2;
        }
      }
    }
    puVar9 = puVar15;
    bVar16 = uVar8 == uVar10;
    uVar10 = uVar10 + 1;
    if (bVar16) {
      return 0;
    }
  } while( true );
}

