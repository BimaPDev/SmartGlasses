/* FUN_1006a8a4 @ 0x1006a8a4 */

int FUN_1006a8a4(code *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  int local_64;
  int local_4c;
  uint local_34 [2];
  
  piVar17 = (int *)*DAT_1006ab60;
  piVar7 = piVar17 + 0x12;
  if (piVar17 == (int *)0x0) {
    FUN_100a5b78(DAT_1006ac6c | (DAT_1006ac68 - DAT_1006ac64) * 0x20 & 0xff00U,DAT_1006ac74,
                 DAT_1006ac70);
    return 0;
  }
  if (param_1 == (code *)0x0) {
    uVar11 = (uint)*(ushort *)((int)piVar17 + 0x16);
    if (*(uint *)(*piVar17 + 0x10) <= uVar11) {
      return 0;
    }
    local_4c = 0;
  }
  else {
    local_4c = FUN_1013cfe2(0x200);
    if (local_4c == 0) {
      FUN_100a5b78(DAT_1006ac78 | (DAT_1006ac68 - DAT_1006ac64) * 0x20 & 0xff00U,DAT_1006ac74,
                   DAT_1006ac7c);
      return 0;
    }
    uVar11 = (uint)*(ushort *)((int)piVar17 + 0x16);
    if (*(uint *)(*piVar17 + 0x10) <= uVar11) {
      local_64 = 0;
      goto LAB_1006a93c;
    }
  }
  local_64 = 0;
  uVar8 = (DAT_1006ab68 - DAT_1006ab64) * 0x20 & 0xff00;
  uVar3 = uVar8 | DAT_1006ab6c;
  uVar9 = uVar8 | DAT_1006ab70;
  do {
    iVar1 = FUN_1006a0c8(piVar17,uVar11,piVar17 + 6,local_34);
    if (iVar1 == 0x30) {
      uVar4 = (uint)*(ushort *)(piVar17 + 0xe);
      piVar14 = piVar17 + 10;
      iVar5 = piVar17[8];
      uVar16 = uVar11 + 0x30;
      iVar2 = piVar17[9];
      FUN_100a5b78(uVar8 | 0x2980036,DAT_1006ab78,DAT_1006ab74,(short)piVar17[7],piVar14,iVar2,iVar5
                   ,uVar4,uVar11);
      iVar10 = piVar17[0x10];
      iVar15 = 0;
      uVar19 = uVar16;
      for (iVar1 = piVar17[8]; 0 < iVar1; iVar1 = iVar1 - iVar13) {
        iVar13 = iVar1;
        if (0x7fff < iVar1) {
          iVar13 = 0x8000;
        }
        FUN_10114a38();
        uVar12 = *(uint *)(*piVar17 + 0x10);
        piVar14 = (int *)piVar17[4];
        uVar18 = uVar19;
        if (uVar12 <= uVar19) {
          uVar18 = uVar19 - uVar12;
        }
        iVar6 = *(int *)(*piVar17 + 0xc);
        if (uVar12 < iVar13 + uVar18) {
          FUN_10069ba8(piVar17,0,iVar6 + uVar18,0,piVar14,uVar12 - uVar18);
          iVar2 = (iVar13 - uVar12) + uVar18;
          iVar6 = *(int *)(*piVar17 + 0xc);
          piVar14 = (int *)((int)piVar14 + (uVar12 - uVar18));
        }
        else {
          iVar6 = iVar6 + uVar18;
          iVar2 = iVar13;
        }
        FUN_10069ba8(piVar17,0,iVar6,0,piVar14,iVar2);
        iVar15 = FUN_10068e38(iVar15,piVar17[4],iVar13);
        FUN_101150e0();
        uVar19 = uVar19 + iVar13;
      }
      if (iVar10 != iVar15) {
        FUN_100a5b78(uVar3,DAT_1006ab78,DAT_1006ab7c,iVar10,piVar14,iVar2,iVar5,uVar4,uVar11);
      }
      if (param_1 != (code *)0x0) {
        (*param_1)(piVar17 + 6,0x30);
        local_64 = local_64 + 0x30;
      }
      uVar11 = DAT_1006ab90;
      uVar19 = piVar17[8];
      while (0x20 < uVar19) {
        while( true ) {
          uVar4 = *(uint *)(*piVar17 + 0x10);
          iVar1 = *(int *)(*piVar17 + 0xc);
          uVar19 = uVar16 - uVar4;
          if (uVar16 < uVar4) {
            uVar19 = uVar16;
          }
          uVar18 = uVar16 - uVar4;
          if (uVar16 < uVar4) {
            uVar18 = uVar16;
          }
          if (uVar4 < uVar19 + 0x20) {
            FUN_10069ba8(piVar17,0,iVar1 + uVar18,0,piVar7,uVar4 - uVar18);
            piVar14 = (int *)((uVar4 - uVar18) + (int)piVar7);
            iVar15 = (0x20 - uVar4) + uVar18;
            iVar1 = *(int *)(*piVar17 + 0xc);
          }
          else {
            iVar15 = 0x20;
            iVar1 = iVar1 + uVar18;
            piVar14 = piVar7;
          }
          FUN_10069ba8(piVar17,0,iVar1,0,piVar14,iVar15);
          if (piVar17[0x12] == DAT_1006ab80) break;
          if ((uint)piVar17[8] < 0x21) goto LAB_1006a92c;
        }
        if (*(short *)((int)piVar17 + 0x4e) == 0x20) {
          FUN_100a5b78(uVar9,DAT_1006ab78,DAT_1006ab8c,(short)piVar17[0x13],piVar17[0x16],
                       piVar17[0x15],piVar17[0x14]);
          iVar1 = piVar17[8];
          uVar16 = uVar16 + 0x20;
          piVar17[8] = iVar1 + -0x20;
          if (param_1 == (code *)0x0) {
            uVar19 = (iVar1 + -0x20) - piVar17[0x14];
            piVar17[8] = uVar19;
            uVar16 = uVar16 + piVar17[0x14];
          }
          else {
            (*param_1)(piVar7,0x20);
            local_64 = local_64 + 0x20;
            uVar19 = piVar17[0x14];
            while (uVar19 != 0) {
              iVar1 = *piVar17;
              uVar4 = *(uint *)(iVar1 + 0x10);
              if (0x1ff < uVar19) {
                uVar19 = 0x200;
              }
              uVar18 = uVar16;
              if (uVar4 <= uVar16) {
                uVar18 = uVar16 - uVar4;
              }
              uVar12 = uVar19;
              iVar15 = local_4c;
              if (uVar4 < uVar18 + uVar19) {
                iVar15 = uVar4 - uVar18;
                FUN_10069ba8(piVar17,0,*(int *)(iVar1 + 0xc) + uVar18,0,local_4c,iVar15);
                uVar12 = (uVar19 - uVar4) + uVar18;
                iVar1 = *piVar17;
                uVar18 = 0;
                iVar15 = iVar15 + local_4c;
              }
              FUN_10069ba8(piVar17,0,*(int *)(iVar1 + 0xc) + uVar18,0,iVar15,uVar12);
              piVar17[0x14] = piVar17[0x14] - uVar19;
              piVar17[8] = piVar17[8] - uVar19;
              (*param_1)(local_4c,uVar19);
              local_64 = local_64 + uVar19;
              uVar16 = uVar16 + uVar19;
              uVar19 = piVar17[0x14];
            }
            uVar19 = piVar17[8];
          }
        }
        else {
          FUN_100a5b78(uVar8 | uVar11,DAT_1006ab88,DAT_1006ab84,uVar16);
          uVar19 = piVar17[8];
        }
      }
    }
LAB_1006a92c:
    uVar11 = local_34[0];
  } while (local_34[0] < *(uint *)(*piVar17 + 0x10));
  if (param_1 == (code *)0x0) {
    return local_64;
  }
LAB_1006a93c:
  FUN_1013cfd4(local_4c);
  return local_64;
}

