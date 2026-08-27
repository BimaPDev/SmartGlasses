/* FUN_2c4e5fec @ 0x2c4e5fec */

void FUN_2c4e5fec(undefined4 param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 in_cr7;
  undefined2 *puVar9;
  
  if (param_5 == 0x10) {
    FUN_2c4e5e44(param_1,param_2,param_4);
    if ((0 < param_4) && (0 < (int)param_6)) {
      iVar6 = 0;
      uVar2 = param_6 & 0xfffffffe;
      iVar1 = 0;
      do {
        puVar16 = (undefined4 *)(param_3 + iVar6 * 2);
        if (((undefined4 *)(param_2 + 2 + iVar1 * 2) == puVar16) || (param_6 - 1 < 10)) {
          puVar5 = (undefined2 *)(iVar6 * 2 + param_3 + -2);
          puVar8 = (undefined2 *)(iVar1 * 2 + param_2);
          do {
            puVar9 = puVar8 + 1;
            puVar5 = puVar5 + 1;
            *puVar5 = *puVar8;
            puVar8 = puVar9;
          } while (puVar9 != (undefined2 *)(param_2 + (param_6 + iVar1) * 2));
        }
        else {
          puVar4 = (undefined4 *)(iVar1 * 2 + param_2);
          puVar13 = puVar16;
          do {
            puVar14 = puVar13 + 1;
            *puVar13 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar13 = puVar14;
          } while (puVar16 + (param_6 >> 1) != puVar14);
          if (param_6 != uVar2) {
            *(undefined2 *)(param_3 + (uVar2 + iVar6) * 2) =
                 *(undefined2 *)(param_2 + (uVar2 + iVar1) * 2);
          }
        }
        iVar1 = iVar1 + param_6 * (int)(short)param_7;
        iVar6 = iVar6 + param_6;
      } while (iVar1 < param_4);
    }
  }
  else {
    FUN_2c4e5f1c();
    if ((0 < param_4) && (0 < (int)param_6)) {
      uVar12 = param_6 & 0xfffffffc;
      iVar1 = 0;
      iVar6 = uVar12 + 2;
      iVar15 = uVar12 + 1;
      iVar11 = 0;
      uVar2 = param_2;
      do {
        uVar10 = param_3 + iVar1 * 4;
        if ((((uVar2 | uVar10) & 0xf) == 0 && 8 < uVar10 - (uVar2 + 4)) && (8 < param_6 - 1)) {
          uVar7 = 0;
          uVar3 = uVar2;
          do {
            uVar7 = uVar7 + 1;
            coprocessor_load(0xf,in_cr7,uVar3);
            coprocessor_store(0xf,in_cr7,uVar10);
            uVar3 = uVar3 + 0x10;
            uVar10 = uVar10 + 0x10;
          } while (param_6 >> 2 != uVar7);
          if (((param_6 != uVar12) &&
              (*(undefined4 *)(param_3 + (iVar1 + uVar12) * 4) =
                    *(undefined4 *)(param_2 + (iVar11 + uVar12) * 4), iVar15 < (int)param_6)) &&
             (*(undefined4 *)(param_3 + (iVar15 + iVar1) * 4) =
                   *(undefined4 *)(param_2 + (iVar15 + iVar11) * 4), iVar6 < (int)param_6)) {
            *(undefined4 *)(param_3 + (iVar1 + iVar6) * 4) =
                 *(undefined4 *)(param_2 + (iVar11 + iVar6) * 4);
          }
        }
        else {
          puVar16 = (undefined4 *)(uVar2 - 4);
          puVar4 = (undefined4 *)(iVar1 * 4 + param_3 + -4);
          uVar10 = 0;
          do {
            uVar10 = uVar10 + 1;
            puVar16 = puVar16 + 1;
            puVar4 = puVar4 + 1;
            *puVar4 = *puVar16;
          } while (param_6 != uVar10);
        }
        iVar1 = iVar1 + param_6;
        iVar11 = iVar11 + param_6 * param_7;
        uVar2 = uVar2 + param_6 * param_7 * 4;
      } while (iVar11 < param_4);
    }
  }
  return;
}

